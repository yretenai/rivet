// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <array>
#include <cstdint>
#include <filesystem>
#include <functional>
#include <iostream>
#include <memory>
#include <optional>
#include <string>
#include <string_view>
#include <utility>
#include <vector>

#include <ankerl/unordered_dense.h>
#include <clipp.h>

#include <rivet/data/dag.hpp>
#include <rivet/data/toc.hpp>
#include <rivet/hash/asset_id.hpp>
#include <rivet/rivet_game.hpp>
#include <rivet/structures/rivet_print_helper.hpp>

#include "helper.hpp"

using namespace rivet;
using namespace rivet::structures;

const std::array<const std::string, 32> localization_enum { "none", "us", "gb", "dk", "nl", "fi", "fr", "de", "it", "jp", "kr", "no", "pl", "pt", "ru", "es",
															"se",	"br", "ar", "tr", "la", "cs", "ct", "fc", "cz", "hu", "el", "ro", "th", "vi", "id", "hr" };

constexpr std::array<const std::string_view, static_cast<int>(rivet_asset_category::Max)> stream_exts { ".stream", ".wem", ".animstrm", ".lgstream" };

constexpr std::array<const std::string_view, static_cast<int>(rivet_asset_category::Max)> category_enum { "none", "sound", "animation", "lightgrid" };

static auto
hash_checksum(const std::shared_ptr<rivet_array<uint8_t>> &value, rivet_asset_id hash = rivet::hash::asset_hash_basis) noexcept -> rivet_asset_id {
	for (const uint8_t byte_value : *value) {
		hash = rivet::hash::crc64_table[(hash ^ byte_value) & 0xffu] ^ hash >> 8u;
	}

	return hash;
}

void
process_asset(const std::shared_ptr<rivet::structures::rivet_asset> &asset, const rivet_size locale_id, const rivet_size category_id, const bool is_stream, const std::string &root_prefix, std::ostream &toc_file) {
	std::string name;
	if (!asset->name.has_value()) {
		if ((asset->id & rivet::hash::wem_mask) != 0) {
			name = "sound/wem/" + std::to_string(asset->id & UINT32_MAX) + std::string(".wem");
		} else {
			if (asset->archive->name.find('/') == std::string::npos && asset->archive->name.find('\\') == std::string::npos) {
				name = root_prefix + std::string(asset->archive->name) + "/" + std::to_string(asset->id);
			} else {
				name = std::string(asset->archive->name) + "/" + std::to_string(asset->id);
			}
		}
	} else {
		name = asset->name.value(); // NOLINT(*-unchecked-optional-access)
		rivet::hash::normalize_asset_path(name);
	}

	if (name.ends_with("/localization_all.localization")) {
		name = name.substr(0, name.find_last_of('/')) + "/localization_" + localization_enum[locale_id] + ".localization";
	} else if (locale_id > 0) {
		name = name.substr(0, name.find_last_of('/')) + "/" + localization_enum[locale_id] + "/" + name.substr(name.find_last_of('/') + 1);
	}

	if (is_stream) { // normalize extension
		if (const auto ext = stream_exts[category_id]; !ext.empty() && !name.ends_with(ext)) {
			name += ext;
		}
	}

	toc_file << std::hex << asset->id << ',' << name << ',' << asset->header.value_or(rivet_asset_header({})).schema << std::dec << ',' << localization_enum[locale_id] << ','
			 << category_enum[category_id] << ',' << (is_stream ? 'y' : 'n') << ',' << asset->size << ',';
}

auto
extract(const int argc, char **argv) -> int {
	std::string game_path;
	std::string output_dir;
	bool hash_data = false;
	bool version_flag = false;
	bool help_flag = false;

	if (const auto cli = (clipp::joinable(clipp::option("-h", "--help").set(help_flag, true) % "show help",
									clipp::option("-v", "--version").set(version_flag, true) % "show version",
									clipp::option("-H", "--hash").set(hash_data, true) % "hash dta"),
					clipp::value("game", game_path) % "path to game directory",
					clipp::option("-o", "--output-dir") & clipp::value("output-dir", output_dir) % "output directory");
		!clipp::parse(argc, argv, cli) || help_flag || version_flag) {
		return handle_exit("rivet-toc-dump", cli, version_flag, help_flag);
	}

	if (output_dir.empty()) {
		output_dir = game_path;
	}

	auto game = std::make_shared<rivet_game>(game_path);

	std::string file_version_string_u8 = "toc";
	for (const auto &entry : std::filesystem::directory_iterator(game_path)) {
		if (entry.is_regular_file() && entry.path().extension() == ".exe" && entry.path().filename() != "crs-handler.exe") {
			const auto &exe_path = entry.path();
			auto exe_bin = rivet_data_array::from_file(exe_path);
			auto exe_binw = exe_bin->cast<wchar_t>();
			constexpr std::wstring_view file_version = L"FileVersion";
			if (auto file_version_offset = std::search(exe_binw->begin(), exe_binw->end(), file_version.begin(), file_version.end()); file_version_offset != exe_binw->end()) {
				auto file_version_string_offset = reinterpret_cast<uint8_t *>(file_version_offset.array_ptr) - exe_bin->data() + (static_cast<uint>(file_version.size() + 1) << 1u);
				file_version_string_offset = static_cast<uint>(file_version_string_offset + 3) & ~3u;
				auto file_version_string = std::wstring(reinterpret_cast<const wchar_t *>(exe_bin->data() + file_version_string_offset)); // NOLINT(*-pro-bounds-pointer-arithmetic)
				file_version_string_u8.clear();
				file_version_string_u8.reserve(file_version_string.size());
				std::ranges::transform(file_version_string, std::back_inserter(file_version_string_u8), [](const wchar_t test) { return static_cast<char>(test); });
			}
			break;
		}
	}

	const std::string name = file_version_string_u8 + ".txt";

	std::filesystem::path archive_toc_path = std::filesystem::path(output_dir) / file_version_string_u8;
	if (hash_data && !std::filesystem::exists(archive_toc_path)) {
		std::filesystem::create_directories(archive_toc_path);
	}

	std::ofstream toc_file(output_dir + "/" + name);
	if (!toc_file.is_open()) {
		std::cout << "failed to open toc dump file " << name << '\n';
		return 1;
	}

	if (file_version_string_u8.size() > 4) {
		toc_file << "# version " << file_version_string_u8 << '\n';
	}
	toc_file << "id,name,type,locale,category,is_stream,size,archive\n";

	// todo: this really should be in /share/ or something on linux
	if (auto streamed_files_path = std::filesystem::path("streamed_files.txt"); std::filesystem::exists(streamed_files_path)) {
		game->load_streamed_files_list(streamed_files_path);
	}

	auto root_prefix = std::string("d/");

	ankerl::unordered_dense::map<std::string_view, std::shared_ptr<std::ofstream>> files;

	for (auto locale_id = 0; locale_id < 32; locale_id++) {
		auto locale = static_cast<rivet_locale>(locale_id);
		std::cout << locale << '\n';

		for (auto category_id = 0; category_id < 4; category_id++) {
			auto category = static_cast<rivet_asset_category>(category_id);
			std::cout << category << '\n';

			for (auto subtype_id = 0; subtype_id < 2; subtype_id++) {
				auto is_stream = subtype_id == 1;
				std::cout << (is_stream ? "stream" : "dat1") << '\n';

				for (const auto &asset : game->toc->get_group(locale, category, is_stream)) {
					std::stringstream str_stream;
					process_asset(asset, locale_id, category_id, is_stream, root_prefix, str_stream);
					toc_file << str_stream.str() << (asset->archive != nullptr ? asset->archive->name : "") << '\n';
					if (!hash_data || asset->archive == nullptr) {
						continue;
					}

					auto asset_data = game->open_file(asset);
					if(asset_data == nullptr) {
						continue;
					}

					auto hash = hash_checksum(asset_data);

					auto archive_toc_file = files[asset->archive->name];
					if (archive_toc_file == nullptr) {
						const std::filesystem::path archive_toc_filename = std::string(asset->archive->name) + ".txt";
						const auto archive_toc_file_path = archive_toc_path / archive_toc_filename.filename();
						archive_toc_file = std::make_shared<std::ofstream>(archive_toc_file_path);
						*archive_toc_file << "id,name,type,locale,category,is_stream,size,hash\n";
						files[asset->archive->name] = archive_toc_file;
					}

					*archive_toc_file << str_stream.str() << std::hex << std::setfill('0') << std::setw(16) << hash << '\n';
				}
			}
		}
	}

	return 0;
}

MAIN_WRAPPER(extract)
