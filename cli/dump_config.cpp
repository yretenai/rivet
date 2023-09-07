// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#define RIVET_USE_NLOHMANN

#include <filesystem>
#include <iostream>
#include <string>
#include <string_view>
#include <utility>
#include <vector>

#include <ankerl/unordered_dense.h>
#include <clipp.h>

#include <rivet/data/asset_bundle.hpp>
#include <rivet/data/config.hpp>
#include <rivet/ddl/serialization.hpp>
#include <rivet/ddl/rivet_ddl.hpp>
#include <rivet/rivet.hpp>
#include <rivet/rivet_array.hpp>
#include <rivet/rivet_keywords.hpp>
#include <rivet/structures/rivet_serialization.hpp>

#include "helper.hpp"

using namespace rivet;
using namespace rivet::data;

auto
dump_config(int argc, char **argv) -> int {
	std::vector<std::string> input_files;
	bool version_flag = false;
	bool help_flag = false;
	bool recursive = false;

	auto cli = (clipp::joinable(clipp::option("-h", "--help").set(help_flag, true) % "show help",
								clipp::option("-v", "--version").set(version_flag, true) % "show version",
								clipp::option("-r", "--recursive").set(recursive, true) % "find files in directories recursively"),
				clipp::values("input-files", input_files) % "input files");

	if (!clipp::parse(argc, argv, cli) || help_flag || version_flag) {
		return handle_exit("rivet-config-dump", cli, version_flag, help_flag);
	}

	const auto normalized_input_files = find_glob(input_files, ".config", recursive);

	rivet::ddl::register_ddl_types();

	for (const auto &input_file : normalized_input_files) {
		std::cout << "converting " << input_file << '\n';

		auto config_buffer = rivet_data_array::from_file(input_file);
		auto conf = config(asset_bundle(config_buffer));

		auto path = std::filesystem::path(input_file);
		path = path.replace_extension(".json");

		nlohmann::json json_data;
		json_data["Type"] = conf.type.type;
		json_data["Obj"] = conf.value->to_nlohmann_json();

		std::ofstream out(path, std::ios::out | std::ios::trunc | std::ios::binary);
		if (!out.is_open()) {
			std::cout << "failed to open " << path << '\n';
			return 1;
		}

		out << json_data.dump(4) << '\n';
	}

	return 0;
}

MAIN_WRAPPER(dump_config)
