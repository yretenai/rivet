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
#include <nlohmann/json.hpp>

#include <rivet/data/asset_bundle.hpp>
#include <rivet/data/dat1.hpp>
#include <rivet/data/toc.hpp>
#include <rivet/gfx/texture.hpp>
#include <rivet/rivet_array.hpp>
#include <rivet/rivet_game.hpp>
#include <rivet/rivet_keywords.hpp>
#include <rivet/structures/rivet_asset.hpp>
#include <rivet/structures/rivet_print_helper.hpp>

#include "helper.hpp"

using namespace rivet;
using namespace rivet::structures;
using namespace rivet::gfx;

enum class analyze_target : uint8_t {
	none,
	header,
	texture_header,
	dat1_sections,
	nested_dat1,
	max,
};

const std::array<std::string, static_cast<int>(analyze_target::max)> analyze_target_enum { "none", "header", "texture_header", "dat1_sections", "nested_dat1" };

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
	auto [schema, sizes, unknown14, unknown16, unknown18, unknown1C, unknown20] = asset->header.value();

	if (unknown14 != 0) {
		header_values["unknown14"][unknown14].emplace(name);
	}

	if (unknown16 != 0) {
		header_values["unknown16"][unknown16].emplace(name);
	}

	if (unknown18 != 0) {
		header_values["unknown18"][unknown18].emplace(name);
	}

	if (unknown1C != 0) {
		header_values["unknown1C"][unknown1C].emplace(name);
	}

	if (unknown20 != 0) {
		header_values["unknown20"][unknown20].emplace(name);
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

	if (auto [schema, sizes, unknown14, unknown16, unknown18, unknown1C, unknown20] = asset->header.value(); schema == texture::type_id) {
		auto asset_data = game->open_file(asset);
		auto tex = texture(data::asset_bundle(asset_data));
		auto [resident_size,
			  stream_size,
			  stream_width,
			  stream_height,
			  resident_width,
			  resident_height,
			  surface_count,
			  unknown11,
			  unknown12,
			  format,
			  mid_alpha_level,
			  unknown1C_,
			  mip_count,
			  streamed_mips,
			  unknown21,
			  unknown22,
			  unknown23,
			  unknown24] = tex.get_header();

		texture_values["surface_count"][surface_count].emplace(name);
		texture_values["unknown11"][unknown11].emplace(name);
		texture_values["unknown12"][unknown12].emplace(name);
		texture_values["unknown1C"][unknown1C_].emplace(name);
		texture_values["unknown21"][unknown21].emplace(name);
		texture_values["unknown22"][unknown22].emplace(name);
		texture_values["unknown23"][unknown23].emplace(name);
		texture_values["unknown24"][unknown24].emplace(name);
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
	nlohmann::json dat1_info_map;
	nlohmann::json root;
	nlohmann::json id_map;

	LOOP_START

	if (asset->type == rivet_asset_type::NONE) {
		continue;
	}

	if (!asset->header.has_value()) {
		continue;
	}

	id_map[std::to_string(asset->id)] = asset->name.value_or(std::to_string(asset->id));

	auto asset_type_str = helpers::rivet_asset_type_enum[static_cast<uint32_t>(asset->type)];
	if (dat1_info_map.find(asset_type_str) == dat1_info_map.end()) {
		dat1_info_map[asset_type_str] = nlohmann::json::object_t();
	}

	auto &dat1_info = dat1_info_map[asset_type_str];

	auto asset_data = game->open_file(asset);
	if (asset_data == nullptr || asset_data->size() < sizeof(data::dat1::dat1_header) || asset_data->size() < sizeof(rivet_asset_header)) {
		continue;
	}
	auto asset_bundle = data::asset_bundle(asset_data);

	for (auto bundle_index = 0; bundle_index < asset_bundle.header.sizes.size(); ++bundle_index) {
		auto bundle_data = asset_bundle.get_entry(bundle_index);
		if (bundle_data == nullptr || bundle_data->size() < sizeof(data::dat1::dat1_header) || bundle_data->get<rivet_type_id>(0) != data::dat1::magic) {
			continue;
		}

		for (auto dat1 = data::dat1(bundle_data); const auto &section_id : dat1.section_ids) {
			auto [section_data, _] = dat1.sections.find(section_id)->second;
			auto section_list = dat1_info.find(std::to_string(section_id));
			if (section_list == dat1_info.end()) {
				section_list = dat1_info.emplace(std::to_string(section_id), nlohmann::json::array_t()).first;
			}
			nlohmann::json value {};
			value["asset"] = asset->id;
			value["size"] = section_data.size;
			section_list.value().emplace_back(value);
		}
	}

	LOOP_END

	// sort by size
	for (const auto &[key, value] : dat1_info_map.items()) {
		for (const auto &[key2, value2] : value.items()) {
			std::sort(value2.begin(), value2.end(), [](const auto &left, const auto &right) { return left["size"] < right["size"]; });
		}
	}

	auto json_stream = std::ofstream("dat1_sections.json");
	root["ids"] = id_map;
	root["dat"] = dat1_info_map;
	json_stream << root.dump(4);
	json_stream.close();
}

void
analyze_nested_dats(const std::shared_ptr<rivet_game> &game) {
	ankerl::unordered_dense::map<rivet_asset_type, ankerl::unordered_dense::map<uint32_t, std::unordered_set<std::string>>> nested_values;

	constexpr std::array<uint8_t, 4> dat1_magic = { 0x31, 0x54, 0x41, 0x44 }; // "DAT1" in little endian

	LOOP_START

	if (asset->type == rivet_asset_type::NONE) {
		continue;
	}

	if (!asset->header.has_value()) {
		continue;
	}

	auto &map = nested_values[asset->type];

	auto asset_data = game->open_file(asset);
	if (asset_data == nullptr || asset_data->size() < sizeof(data::dat1::dat1_header) || asset_data->size() < sizeof(rivet_asset_header)) {
		continue;
	}
	auto asset_bundle = data::asset_bundle(asset_data);

	for (auto bundle_index = 0; bundle_index < asset_bundle.header.sizes.size(); ++bundle_index) {
		auto bundle_data = asset_bundle.get_entry(bundle_index);
		if (bundle_data == nullptr) {
			continue;
		}

		if (bundle_data->size() < sizeof(data::dat1::dat1_header) || bundle_data->get<rivet_type_id>(0) != data::dat1::magic) {
			if (std::search(bundle_data->begin(), bundle_data->end(), dat1_magic.begin(), dat1_magic.end()) == bundle_data->end()) {
				continue;
			}

			map[bundle_index].emplace(asset->name.value_or(std::to_string(asset->id)));
		} else {
			for (const auto &[id, section] : data::dat1(bundle_data).sections) {
				const auto section_data = section.second;

				if (std::search(section_data->begin(), section_data->end(), dat1_magic.begin(), dat1_magic.end()) == section_data->end()) {
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
analyze(const int argc, char **argv) -> int {
	std::string game_path;
	std::string target = analyze_target_enum[0];
	bool version_flag = false;
	bool help_flag = false;

	if (const auto cli = (clipp::joinable(clipp::option("-h", "--help").set(help_flag, true) % "show help", clipp::option("-v", "--version").set(version_flag, true) % "show version"),
					clipp::value("mode", target) % "mode to analyze",
					clipp::value("game", game_path) % "path to game directory");
		!clipp::parse(argc, argv, cli) || help_flag || version_flag) {
		return handle_exit("rivet-debug-analyze", cli, version_flag, help_flag);
	}

	analyze_target target_enum = analyze_target::none;

	for (int i = 0; i < static_cast<int>(analyze_target::max); i++) {
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

	const auto game = std::make_shared<rivet_game>(game_path);

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
