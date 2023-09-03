// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <array>
#include <fstream>
#include <iostream>

#include <clipp.h>

#include <rivet/data/dag.hpp>
#include <rivet/data/toc.hpp>
#include <rivet/gfx/texture.hpp>
#include <rivet/hash/asset_id.hpp>
#include <rivet/rivet.hpp>
#include <rivet/rivet_game.hpp>
#include <rivet/structures/rivet_print_helper.hpp>

#include "helper.hpp"

using namespace rivet;
using namespace rivet::structures;

const std::array<std::string, 32> localization_enum { "none", "us", "gb", "dk", "nl", "fi", "fr", "de", "it", "jp", "kr", "no", "pl", "pt", "ru", "es",
													  "se",	  "br", "ar", "tr", "la", "cs", "ct", "fc", "cz", "hu", "el", "ro", "th", "vi", "id", "hr" };

const std::array<std::string_view, (int) rivet_asset_category::Max> stream_exts { ".stream", ".wem", ".animstrm", ".lgstream" };

void
process_asset(const std::shared_ptr<rivet_game> &game, const std::shared_ptr<rivet::structures::rivet_asset> &asset, rivet_size locale_id, rivet_size category_id, bool is_stream,
			  const std::string &root_prefix, const std::filesystem::path &dump, std::ofstream &error_file) {
	if (!game->prepare_archive(asset)) {
		return;
	}

	std::string name;
	if (!asset->name.has_value()) {
		if ((asset->id & 0x40000000'00000000) != 0) {
			name = "sound/wem/" + std::to_string(asset->id & UINT32_MAX) + std::string(".wem");
		} else {
			if (asset->archive->name.find('/') == std::string::npos && asset->archive->name.find('\\') == std::string::npos) {
				name = root_prefix + std::string(asset->archive->name) + "/" + std::to_string(asset->id);
			} else {
				name = std::string(asset->archive->name) + "/" + std::to_string(asset->id);
			}
		}
	} else {
		name = asset->name.value();
		rivet::hash::normalize_asset_path(name);
	}

	if (name.ends_with("/localization_all.localization")) {
		name = name.substr(0, name.find_last_of('/')) + "/localization_" + localization_enum[locale_id] + ".localization";
	} else if (locale_id > 0) {
		name = name.substr(0, name.find_last_of('/')) + "/" + localization_enum[locale_id] + "/" + name.substr(name.find_last_of('/') + 1);
	}

	auto asset_data = game->open_file(asset);
	if (asset_data == nullptr || asset_data->empty()) {
		std::cout << "failed to open asset " << name << '\n';
		error_file << "open " << name << '\n';
		return;
	}

	std::cout << "writing " << name << '\n';

	// rename .movie to .bik
	if (asset_data->get<uint32_t>(0) == 0x6A32424B) {
		name = name.substr(0, name.find_last_of('.')) + ".bik";
	}

	auto output_path = dump / name;
	if (is_stream) { // normalize extension
		auto ext = stream_exts[category_id];
		if (!ext.empty() && !name.ends_with(ext)) {
			name += ext;
		}

		output_path = dump / name;
	}

	std::filesystem::create_directories(output_path.parent_path());
	auto asset_file = std::fstream(output_path, std::ios::binary | std::ios::out | std::ios::trunc);

	if (!asset_file.is_open()) {
		std::cout << "failed to open output file " << output_path << '\n';
		error_file << "output " << name << '\n';
		return;
	}

	if (!is_stream) {
		if (asset->header.has_value()) {
			asset_file.write(reinterpret_cast<const char *>(&asset->header.value()), sizeof(rivet_asset_header));
		}

		if (asset->texture_header.has_value()) {
			if (asset->header.has_value() && asset->header.value().schema != rivet::gfx::texture::type_id) {
				std::cout << "ill texture header " << name << '\n';
				error_file << "ill texture header " << name << '\n';
			}
			asset_file.write(reinterpret_cast<const char *>(&asset->texture_header.value()), sizeof(rivet_asset_texture_header));
		} else if (asset->header.has_value() && asset->header.value().schema == rivet::gfx::texture::type_id) {
			std::cout << "ill formed texture " << name << '\n';
			error_file << "ill texture " << name << '\n';
			auto empty_header = rivet_asset_texture_header {};
			asset_file.write(reinterpret_cast<const char *>(&empty_header), sizeof(rivet_asset_texture_header));
		}
	} else if (asset->header.has_value()) {
		std::cout << "ill header " << name << '\n';
		error_file << "ill header " << name << '\n';
	}

	asset_file.write(reinterpret_cast<const char *>(asset_data->data()), static_cast<std::streamsize>(asset_data->byte_size()));
	asset_file.close();
}

auto
extract(int argc, char **argv) -> int {
	std::string game_path;
	std::string output_dir;
	bool version_flag = false;
	bool help_flag = false;
	bool verbose = false;

	auto cli = (clipp::joinable(clipp::option("-h", "--help").set(help_flag, true) % "show help",
								clipp::option("-v", "--version").set(version_flag, true) % "show version",
								clipp::option("-V", "--verbose").set(verbose, true) % "verbose output"),
				clipp::value("game", game_path) % "path to game directory",
				clipp::option("-o", "--output-dir") & clipp::value("output-dir", output_dir) % "output directory");

	if (!clipp::parse(argc, argv, cli) || help_flag || version_flag) {
		if (version_flag) {
			std::cout << "rivet-extract version " << rivet::rivet_version_detailed() << '\n';
			return 0;
		}

		if (help_flag) {
			std::cout << clipp::make_man_page(cli, "rivet-extract") << '\n';
			return 1;
		}

		std::cout << clipp::usage_lines(cli, "rivet-extract") << '\n';
		return 1;
	}

	auto game = std::make_shared<rivet_game>(game_path);
	if (output_dir.empty()) {
		std::cout << "no output path provided, exiting\n";
		return 0;
	}

	// todo: this really should be in /share/ or something
	auto streamed_files_path = std::filesystem::path("streamed_files.txt");
	if (std::filesystem::exists(streamed_files_path)) {
		game->load_streamed_files_list(streamed_files_path);
	}

	auto root_prefix = std::string("d/");

	const std::filesystem::path dump(output_dir);

	const std::filesystem::path error_path = dump / root_prefix / "errors.txt";
	std::ofstream error_file(error_path, std::ios::out);

	for (auto locale_id = 0; locale_id < 32; locale_id++) {
		auto locale = static_cast<rivet_locale>(locale_id);

		for (auto category_id = 0; category_id < 4; category_id++) {
			auto category = static_cast<rivet_asset_category>(category_id);

			for (auto subtype_id = 0; subtype_id < 2; subtype_id++) {
				auto is_stream = subtype_id == 1;
				auto assets = game->toc->get_group(locale, category, is_stream);

				for (const auto &asset : assets) {
					process_asset(game, asset, locale_id, category_id, is_stream, root_prefix, dump, error_file);
				}
			}
		}
	}

	error_file.close();

	const std::filesystem::path dag_path = dump / root_prefix / "missing.txt";
	std::filesystem::create_directories(dag_path.parent_path());
	std::ofstream dag_file(dag_path, std::ios::out);
	if (!dag_file.is_open()) {
		std::cout << "failed to open output file " << dag_path << '\n';
		return 1;
	}

	for (const auto &asset : game->dag->missing_assets) {
		dag_file << asset.second->name.value() << '\n';
	}
	dag_file.close();

	return 0;
}

MAIN_WRAPPER(extract)
