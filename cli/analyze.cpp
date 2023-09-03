// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <algorithm>
#include <array>
#include <cstdint>
#include <functional>
#include <iostream>
#include <memory>
#include <optional>
#include <string>
#include <string_view>
#include <unordered_set>
#include <utility>
#include <vector>

#include <ankerl/unordered_dense.h>
#include <clipp.h>

#include <rivet/data/asset_bundle.hpp>
#include <rivet/data/dat1.hpp>
#include <rivet/data/toc.hpp>
#include <rivet/gfx/texture.hpp>
#include <rivet/rivet.hpp>
#include <rivet/rivet_array.hpp>
#include <rivet/rivet_game.hpp>
#include <rivet/rivet_keywords.hpp>
#include <rivet/structures/rivet_asset.hpp>
#include <rivet/structures/rivet_print_helper.hpp>

#include "helper.hpp"

using namespace rivet;
using namespace rivet::structures;
using namespace rivet::gfx;

enum class analyze_target {
	none,
	header,
	texture_header,
	dat1_sections,
	nested_dat1,
	max,
};

const std::array<std::string, (int) analyze_target::max> analyze_target_enum { "none", "header", "texture_header", "dat1_sections", "nested_dat1" };

struct dat1_info {
	ankerl::unordered_dense::map<rivet_type_id, std::unordered_set<std::string>> schemas;
	ankerl::unordered_dense::map<rivet_type_id, std::unordered_set<std::string>> sections;
};

#define LOOP_START                                                          \
	for (auto locale_id = 0; locale_id < 32; locale_id++) {                 \
		auto locale = static_cast<rivet_locale>(locale_id);                 \
		for (auto category_id = 0; category_id < 4; category_id++) {        \
			auto category = static_cast<rivet_asset_category>(category_id); \
			auto assets = game->toc->get_group(locale, category, false);    \
			for (const auto &asset : assets) {
#define LOOP_END \
	}            \
	}            \
	}

void
analyze_header(const std::shared_ptr<rivet_game> &game) {
	ankerl::unordered_dense::map<std::string, ankerl::unordered_dense::map<uint64_t, std::unordered_set<std::string>>> header_values = {
		{"unknown14",  {}},
		 { "unknown16", {}},
		  { "unknown18", {}},
		   { "unknown1C", {}},
		{ "unknown20", {}},
	};

	LOOP_START

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

	LOOP_END

	for (const auto &[key, value] : header_values) {
		std::cout << std::hex << key << ' ' << std::dec << value.size() << " entries\n";
		for (const auto &[key2, value2] : value) {
			std::cout << '\t' << std::hex << key2 << ' ' << std::dec << value2.size() << " entries\n";
			for (const auto &name : value2) {
				std::cout << "\t\t" << name << '\n';
			}
		}
	}
}

void
analyze_texture_header(const std::shared_ptr<rivet_game> &game) {
	ankerl::unordered_dense::map<std::string, ankerl::unordered_dense::map<uint64_t, std::unordered_set<std::string>>> texture_values = {
		{"surface_count", {}},
		 { "unknown11",	{}},
		  { "unknown12",	 {}},
		   { "unknown1C",	  {}},
		{ "unknown21",	   {}},
		 { "unknown22",	{}},
		  { "unknown23",	 {}},
		   { "unknown24",	  {}},
	};

	LOOP_START

	auto name = asset->name.value_or(std::to_string(asset->id));
	if (!asset->header.has_value()) {
		continue;
	}
	auto header = asset->header.value();

	if (header.schema == texture::type_id) {
		auto asset_data = game->open_file(asset);
		auto tex = texture(rivet::data::asset_bundle(asset_data));
		auto tex_header = tex.get_header();

		texture_values["surface_count"][tex_header.surface_count].emplace(name);
		texture_values["unknown11"][tex_header.unknown11].emplace(name);
		texture_values["unknown12"][tex_header.unknown12].emplace(name);
		texture_values["unknown1C"][tex_header.unknown1C].emplace(name);
		texture_values["unknown21"][tex_header.unknown21].emplace(name);
		texture_values["unknown22"][tex_header.unknown22].emplace(name);
		texture_values["unknown23"][tex_header.unknown23].emplace(name);
		texture_values["unknown24"][tex_header.unknown24].emplace(name);
	}

	LOOP_END

	for (const auto &[key, value] : texture_values) {
		std::cout << std::hex << key << ' ' << std::dec << value.size() << " entries\n";
		for (const auto &[key2, value2] : value) {
			std::cout << '\t' << std::hex << key2 << ' ' << std::dec << value2.size() << " entries\n";
			for (const auto &name : value2) {
				std::cout << "\t\t" << name << '\n';
			}
		}
	}
}

void
analyze_dat1_sections(const std::shared_ptr<rivet_game> &game) {
	ankerl::unordered_dense::map<rivet_asset_type, dat1_info> dat1_info_map;

	LOOP_START

	if (asset->type == rivet_asset_type::NONE) {
		continue;
	}

	if (!asset->header.has_value()) {
		continue;
	}

	auto &dat1_info = dat1_info_map[asset->type];

	auto asset_data = game->open_file(asset);
	if (asset_data == nullptr || asset_data->size() < sizeof(rivet::data::dat1::dat1_header) || asset_data->size() < sizeof(rivet::structures::rivet_asset_header)) {
		continue;
	}
	auto asset_bundle = rivet::data::asset_bundle(asset_data);

	for (auto bundle_index = 0; bundle_index < asset_bundle.header.sizes.size(); ++bundle_index) {
		auto bundle_data = asset_bundle.get_entry(bundle_index);
		if (bundle_data == nullptr || bundle_data->size() < sizeof(rivet::data::dat1::dat1_header) || bundle_data->get<rivet_type_id>(0) != rivet::data::dat1::magic) {
			continue;
		}

		auto dat1 = rivet::data::dat1(bundle_data);

		if (dat1_info.schemas[dat1.header.schema].size() < 10) {
			dat1_info.schemas[dat1.header.schema].emplace(asset->name.value_or(std::to_string(asset->id)));
		}

		for (const auto &section_id : dat1.section_ids) {
			if (dat1_info.sections[section_id].size() < 10) {
				dat1_info.sections[section_id].emplace(asset->name.value_or(std::to_string(asset->id)));
			}
		}
	}

	LOOP_END

	for (const auto &[key, value] : dat1_info_map) {
		std::cout << key << ' ' << value.schemas.size() << " schemas, " << value.sections.size() << " sections\n";
		std::cout << '\t' << "schemas\n";

		for (const auto &[key2, value2] : value.schemas) {
			std::cout << "\t\t" << key2 << ' ' << value2.size() << " entries\n";
			for (const auto &name : value2) {
				std::cout << "\t\t\t" << name << '\n';
			}
		}

		std::cout << '\t' << "sections\n";

		for (const auto &[key2, value2] : value.sections) {
			std::cout << "\t\t" << key2 << ' ' << value2.size() << " entries\n";
			for (const auto &name : value2) {
				std::cout << "\t\t\t" << name << '\n';
			}
		}
	}
}

void
analyze_nested_dats(const std::shared_ptr<rivet_game> &game) {
	ankerl::unordered_dense::map<rivet_asset_type, ankerl::unordered_dense::map<uint32_t, std::unordered_set<std::string>>> nested_values;

	const std::array<uint8_t, 4> dat1_magic = { 0x31, 0x54, 0x41, 0x44 }; // "DAT1" in little endian

	LOOP_START

	if (asset->type == rivet_asset_type::NONE) {
		continue;
	}

	if (!asset->header.has_value()) {
		continue;
	}

	auto &map = nested_values[asset->type];

	auto asset_data = game->open_file(asset);
	if (asset_data == nullptr || asset_data->size() < sizeof(rivet::data::dat1::dat1_header) || asset_data->size() < sizeof(rivet::structures::rivet_asset_header)) {
		continue;
	}
	auto asset_bundle = rivet::data::asset_bundle(asset_data);

	for (auto bundle_index = 0; bundle_index < asset_bundle.header.sizes.size(); ++bundle_index) {
		auto bundle_data = asset_bundle.get_entry(bundle_index);
		if (bundle_data == nullptr) {
			continue;
		}

		if (bundle_data->size() < sizeof(rivet::data::dat1::dat1_header) || bundle_data->get<rivet_type_id>(0) != rivet::data::dat1::magic) {
			auto found = std::search(bundle_data->begin(), bundle_data->end(), dat1_magic.begin(), dat1_magic.end());
			if (found == bundle_data->end()) {
				continue;
			}

			map[bundle_index].emplace(asset->name.value_or(std::to_string(asset->id)));
		} else {
			auto dat1 = rivet::data::dat1(bundle_data);

			for (const auto &[id, section] : dat1.sections) {
				auto section_data = section.second;

				auto found = std::search(section_data->begin(), section_data->end(), dat1_magic.begin(), dat1_magic.end());
				if (found == section_data->end()) {
					continue;
				}

				map[id].emplace(asset->name.value_or(std::to_string(asset->id)));
			}
		}
	}

	LOOP_END

	for (const auto &[key, value] : nested_values) {
		std::cout << key << ' ' << value.size() << " entries\n";
		for (const auto &[key2, value2] : value) {
			std::cout << '\t' << key2 << ' ' << value2.size() << " entries\n";
			for (const auto &name : value2) {
				std::cout << "\t\t" << name << '\n';
			}
		}
	}
}

auto
analyze(int argc, char **argv) -> int {
	std::string game_path;
	std::string target = analyze_target_enum[0];
	bool version_flag = false;
	bool help_flag = false;

	auto cli = (clipp::joinable(clipp::option("-h", "--help").set(help_flag, true) % "show help", clipp::option("-v", "--version").set(version_flag, true) % "show version"),
				clipp::value("mode", target) % "mode to analyze",
				clipp::value("game", game_path) % "path to game directory");

	if (!clipp::parse(argc, argv, cli) || help_flag || version_flag) {
		return handle_exit("rivet-debug-analyze", cli, version_flag, help_flag);
	}

	analyze_target target_enum = analyze_target::none;

	for (int i = 0; i < (int) analyze_target::max; i++) {
		if (target == analyze_target_enum[i]) {
			target_enum = static_cast<analyze_target>(i);
			break;
		}
	}

	if (target_enum == analyze_target::none) {
		std::cout << "invalid mode\n";
		std::cout << "available modes:\n";
		for (const auto &mode : analyze_target_enum) {
			std::cout << '\t' << mode << '\n';
		}
		return 2;
	}

	auto game = std::make_shared<rivet_game>(game_path);

	switch (target_enum) {
		case analyze_target::header: analyze_header(game); break;
		case analyze_target::texture_header: analyze_texture_header(game); break;
		case analyze_target::dat1_sections: analyze_dat1_sections(game); break;
		case analyze_target::nested_dat1: analyze_nested_dats(game); break;
		default: return 3;
	}

	return 0;
}

MAIN_WRAPPER(analyze)
