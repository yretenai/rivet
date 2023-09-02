// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <array>
#include <fstream>
#include <iostream>
#include <set>

#include <ankerl/unordered_dense.h>
#include <clipp.h>

#include <rivet/data/toc.hpp>
#include <rivet/gfx/texture.hpp>
#include <rivet/rivet.hpp>
#include <rivet/rivet_game.hpp>

#include "helper.hpp"

using namespace rivet;
using namespace rivet::structures;
using namespace rivet::gfx;

auto
analyze(int argc, char **argv) -> int {
	std::string game_path;
	bool version_flag = false;
	bool help_flag = false;

	auto cli = (clipp::joinable(clipp::option("-h", "--help").set(help_flag, true) % "show help", clipp::option("-v", "--version").set(version_flag, true) % "show version"),
				clipp::value("game", game_path) % "path to game directory");

	if (!clipp::parse(argc, argv, cli) || help_flag || version_flag) {
		if (version_flag) {
			std::cout << "rivet-debug-analyze version " << rivet::rivet_version() << '\n';
			return 0;
		}

		if (help_flag) {
			std::cout << clipp::make_man_page(cli, "rivet-debug-analyze") << '\n';
			return 1;
		}

		std::cout << clipp::usage_lines(cli, "rivet-debug-analyze") << '\n';
		return 1;
	}

	auto game = std::make_shared<rivet_game>(game_path);

	auto streamed_files_path = std::filesystem::path("streamed_files.txt");
	if (std::filesystem::exists(streamed_files_path)) {
		game->load_streamed_files_list(streamed_files_path);
	}

	ankerl::unordered_dense::map<std::string, ankerl::unordered_dense::map<uint64_t, std::set<std::string>>> header_values = {
		{"unknown14",  {}},
		 { "unknown16", {}},
		  { "unknown18", {}},
		   { "unknown1C", {}},
		{ "unknown20", {}},
	};

	ankerl::unordered_dense::map<std::string, ankerl::unordered_dense::map<uint64_t, std::set<std::string>>> texture_values = {
		{"unknown11",  {}},
		 { "unknown12", {}},
		  { "unknown1C", {}},
		   { "unknown21", {}},
		{ "unknown22", {}},
		 { "unknown23", {}},
		  { "unknown24", {}},
	};

	for (auto locale_id = 0; locale_id < 32; locale_id++) {
		auto locale = static_cast<rivet_locale>(locale_id);

		for (auto category_id = 0; category_id < 4; category_id++) {
			auto category = static_cast<rivet_asset_category>(category_id);

			auto assets = game->toc->get_group(locale, category, false);

			for (const auto &asset : assets) {
				auto name = asset->name.value_or(std::to_string(asset->id));
				if (!asset->header.has_value()) {
					continue;
				}
				auto header = asset->header.value();

				if (header.unknown14 != 0) {
					header_values["unknown14"][header.unknown14].emplace(name);
				}

				if (header.unknown16 != 0) {
					header_values["unknown16"][header.unknown16].emplace(name);
				}

				if (header.unknown18 != 0) {
					header_values["unknown18"][header.unknown18].emplace(name);
				}

				if (header.unknown1C != 0) {
					header_values["unknown1C"][header.unknown1C].emplace(name);
				}

				if (header.unknown20 != 0) {
					header_values["unknown20"][header.unknown20].emplace(name);
				}

				if (header.schema == texture::type_id) {
					auto asset_data = game->open_file(asset);
					auto tex = texture(asset_data);
					auto tex_header = tex.get_header();

					texture_values["unknown11"][tex_header.unknown11].emplace(name);
					texture_values["unknown12"][tex_header.unknown12].emplace(name);
					texture_values["unknown1C"][tex_header.unknown1C].emplace(name);
					texture_values["unknown21"][tex_header.unknown21].emplace(name);
					texture_values["unknown22"][tex_header.unknown22].emplace(name);
					texture_values["unknown23"][tex_header.unknown23].emplace(name);
					texture_values["unknown24"][tex_header.unknown24].emplace(name);
				}
			}
		}
	}

	std::cout << "\nheader\n";
	for (const auto &[key, value] : header_values) {
		std::cout << std::hex << key << ' ' << std::dec << value.size() << " entries\n";
		for (const auto &[key2, value2] : value) {
			std::cout << '\t' << std::hex << key2 << ' ' << std::dec << value2.size() << " entries\n";
			auto limit = 10;
			for (const auto &name : value2) {
				std::cout << "\t\t" << name << '\n';

				if (limit-- < 0) {
					std::cout << "\t\t\t...\n";
					break;
				}
			}
		}
	}

	std::cout << "\ntexture header\n";
	for (const auto &[key, value] : texture_values) {
		std::cout << std::hex << key << ' ' << std::dec << value.size() << " entries\n";
		for (const auto &[key2, value2] : value) {
			std::cout << '\t' << std::hex << key2 << ' ' << std::dec << value2.size() << " entries\n";
			auto limit = 10;
			for (const auto &name : value2) {
				std::cout << "\t\t" << name << '\n';

				if (limit-- < 0) {
					std::cout << "\t\t\t...\n";
					break;
				}
			}
		}
	}

	return 0;
}

MAIN_WRAPPER(analyze)
