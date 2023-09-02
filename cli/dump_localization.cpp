// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#pragma once

#include <fstream>
#include <iostream>

#include <clipp.h>
#include <nlohmann/json.hpp>

#include <rivet/data/localization.hpp>
#include <rivet/rivet.hpp>

#include "helper.hpp"

using namespace rivet;
using namespace rivet::data;

auto
convert_texture(int argc, char **argv) -> int {
	std::vector<std::string> input_files;
	bool version_flag = false;
	bool help_flag = false;
	bool tsv = false;
	bool json = false;

	auto cli = (clipp::joinable(clipp::option("-h", "--help").set(help_flag, true) % "show help",
								clipp::option("-v", "--version").set(version_flag, true) % "show version",
								clipp::option("-t", "--tsv").set(tsv, true) % "convert to TSV",
								clipp::option("-j", "--json").set(json, true) % "convert to JSON"),
				clipp::values("input-files", input_files) % "input files");

	if (!clipp::parse(argc, argv, cli) || help_flag || version_flag) {
		if (version_flag) {
			std::cout << "rivet-localization-dump version " << rivet::rivet_version_detailed() << '\n';
			return 0;
		}

		if (help_flag) {
			std::cout << clipp::make_man_page(cli, "rivet-localization-dump") << '\n';
			return 1;
		}

		std::cout << clipp::usage_lines(cli, "rivet-localization-dump") << '\n';
		return 1;
	}

	const auto normalized_input_files = find_glob(input_files, ".localization");

	for (const auto &input_file : normalized_input_files) {
		std::cout << "converting " << input_file << '\n';

		auto loc_buffer = rivet_data_array::from_file(input_file);
		auto loc = localization(asset_bundle(loc_buffer));

		auto path = std::filesystem::path(input_file);
		if (json) {
			path.replace_extension(".json");
			nlohmann::json json_data = nlohmann::json::array();

			for (const auto &entry_pair : loc.entries) {
				const auto &entry = entry_pair.second;
				json_data.emplace_back(nlohmann::json {
					{"id",		entry.id										 },
					{ "flags", entry.flags									   },
					{ "hash",  entry.hash										 },
					{ "tag",	 entry.tag										},
					{ "text",  reinterpret_cast<const char *>(entry.text.data())},
				});
			}

			std::ofstream out(path, std::ios::out | std::ios::trunc | std::ios::binary);
			if (!out.is_open()) {
				std::cout << "failed to open " << path << '\n';
				return 1;
			}

			out << json_data.dump(4) << '\n';
			continue;
		}

		char sep = ',';
		if (tsv) {
			path.replace_extension(".tsv");
			sep = '\t';
		} else {
			path.replace_extension(".csv");
		}

		std::ofstream out(path, std::ios::out | std::ios::trunc | std::ios::binary);
		if (!out.is_open()) {
			std::cout << "failed to open " << path << '\n';
			return 1;
		}

		out << "ID" << sep << "Flags" << sep << "Hash" << sep << "Tag" << sep << "Text" << '\n';

		for (const auto &entry_pair : loc.entries) {
			const auto &entry = entry_pair.second;
			out << entry.id << sep << entry.flags << sep << entry.hash << sep << entry.tag << sep << reinterpret_cast<const char *>(entry.text.data()) << '\n';
		}
	}

	return 0;
}

MAIN_WRAPPER(convert_texture)
