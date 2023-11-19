// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#define RIVET_USE_NLOHMANN

#include <array>
#include <cstdint>
#include <filesystem>
#include <iomanip>
#include <iostream>
#include <memory>
#include <string>
#include <string_view>
#include <utility>
#include <vector>

#include <ankerl/unordered_dense.h>
#include <clipp.h>

#include <rivet/data/asset_bundle.hpp>
#include <rivet/data/dag.hpp>
#include <rivet/data/dat1.hpp>
#include <rivet/data/toc.hpp>
#include <rivet/rivet_array.hpp>
#include <rivet/rivet_keywords.hpp>
#include <rivet/structures/rivet_asset.hpp>
#include <rivet/structures/rivet_serialization.hpp>
#include <rivet/ddl/serialization.hpp>

#include "helper.hpp"

using namespace rivet;
using namespace rivet::data;
using namespace rivet::structures;

auto
dump_dat1(const int argc, char **argv) -> int {
	std::string output_dir;
	std::vector<std::string> input_files;
	bool version_flag = false;
	bool help_flag = false;
	bool recursive = false;
	bool verbose = false;

	if (const auto cli = (clipp::joinable(clipp::option("-h", "--help").set(help_flag, true) % "show help",
									clipp::option("-v", "--version").set(version_flag, true) % "show version",
									clipp::option("-r", "--recursive").set(recursive, true) % "find files in directories recursively",
									clipp::option("-V", "--verbose").set(verbose, true) % "verbose logging"),
					clipp::option("-o", "--output-dir") & clipp::value("output_dir", output_dir) % "output directory",
					clipp::values("input-files", input_files) % "input files");
		!clipp::parse(argc, argv, cli) || help_flag || version_flag) {
		return handle_exit("rivet-dat1-dump", cli, version_flag, help_flag);
	}

	auto has_output_dir = !output_dir.empty();
	auto root_path = std::filesystem::path(output_dir);

	const auto normalized_input_files = find_glob(input_files, {}, recursive);

	auto section_name_map = ankerl::unordered_dense::map<rivet_type_id, std::string>();

	// todo: this really should be in /share/ or something
	if (std::filesystem::exists("dat1_hashes_known.txt")) {
		std::ifstream file("dat1_hashes_known.txt");
		std::string line;
		while (std::getline(file, line)) {
			auto split = line.find_first_of(' ');
			auto hash = std::stoul(line.substr(0, split), nullptr, 16);
			auto name = line.substr(split + 1);
			section_name_map.emplace(hash, name);
		}
	}

	for (const auto &input_file : normalized_input_files) {
		auto dat1_path = std::filesystem::path(input_file);
		if (!std::filesystem::exists(dat1_path)) {
			std::cout << dat1_path << " does not exist\n";
			continue;
		}

		// ignore recursion
		if (std::ranges::find(dat1_path, ".sections") != dat1_path.end()) {
			continue;
		}

		std::filesystem::path output_path;
		if (has_output_dir) {
			output_path = root_path / dat1_path.filename();
		} else {
			output_path = dat1_path;
			output_path.replace_extension(output_path.extension().string() + ".sections");
		}

		if (!std::filesystem::exists(output_path)) {
			std::filesystem::create_directories(output_path);
		}

		auto dat1_buffer = rivet_data_array::from_file(dat1_path);
		if (dat1_buffer == nullptr) {
			std::cout << "failed to load " << dat1_path << '\n';
			continue;
		}

		std::cout << "processing " << dat1_path.string() << '\n';

		std::vector<std::shared_ptr<rivet_data_array>> buffers;
		if (auto tag = dat1_buffer->get<uint32_t>(0); tag == archive_toc::magic || tag == archive_toc::magic_compressed) {
			buffers.emplace_back(archive_toc::get_toc_data_buffer(dat1_buffer));
		} else if (tag == dependency_dag::magic || tag == dependency_dag::magic_compressed) {
			buffers.emplace_back(dependency_dag::get_dag_data_buffer(dat1_buffer));
		} else if (tag == dat1::magic) {
			buffers.emplace_back(dat1_buffer);
		} else {
			auto bundle = std::make_shared<rivet::data::asset_bundle>(dat1_buffer);
			for (rivet_size i = 0; i < bundle->header.sizes.size(); i++) {
				auto entry = bundle->get_entry(i);
				buffers.emplace_back(entry);
			}
		}

		auto idx = 0u;
		for (const auto &buffer : buffers) {
			const std::string stream_name = "stream_" + std::to_string(++idx);

			if (buffer == nullptr || buffer->empty()) {
				continue;
			}

			if (verbose) {
				std::cout << "stream " << stream_name << '\n';
			}
			auto buffer_path = output_path / (stream_name + ".bin");
			std::ofstream buffer_file(buffer_path, std::ios::binary);
			if (!buffer_file.is_open()) {
				std::cout << "failed to open " << buffer_path << '\n';
				continue;
			}
			buffer_file.write(reinterpret_cast<const char *>(buffer->data()), static_cast<std::streamsize>(buffer->size()));

			if (buffer->size() > 4 && buffer->get<uint32_t>(0) == dat1::magic) {
				for (const auto dat = std::make_shared<dat1>(buffer, idx < buffers.size() ? buffers[idx] : nullptr); const auto &[section_id, section] : dat->sections) {
					if (verbose) {
						std::cout << "section " << std::setfill('0') << std::setw(8) << std::hex << section_id;

						if (auto name = section_name_map.find(section_id); name != section_name_map.end()) {
							std::cout << " (" << name->second << ")";
						}

						std::cout << '\n';
					}

					auto filename_stream = std::stringstream();
					filename_stream << std::setfill('0') << std::setw(8) << std::hex << section_id;
					if (section_name_map.find(section_id) != section_name_map.end()) {
						filename_stream << '_' << section_name_map[section_id];
					}
					filename_stream << ".bin";
					auto section_path = output_path / stream_name / filename_stream.str();
					std::filesystem::create_directories(section_path.parent_path());

					std::ofstream section_file(section_path, std::ios::binary);
					if (!section_file.is_open()) {
						std::cout << "failed to open " << section_path << '\n';
						continue;
					}

					section_file.write(reinterpret_cast<const char *>(section.second->data()), static_cast<std::streamsize>(section.second->size()));

					if(section.second->size() > 8) {
						if(section.second->get<rivet_type_id>(0) == rivet::ddl::serialized::magic_a &&
							section.second->get<rivet_type_id>(4) == rivet::ddl::serialized::magic_b) {
							auto serialized = std::make_shared<rivet::ddl::serialized>(section.second, dat->buffer);
							auto json = serialized->to_nlohmann_json();

							auto json_path = section_path;
							json_path.replace_extension(".json");
							std::ofstream json_file(json_path, std::ios::binary);
							if (!json_file.is_open()) {
								std::cout << "failed to open " << json_path << '\n';
								continue;
							}

							json_file << json.dump(4) << '\n';
						}
					}
				}
			}
		}
	}

	return 0;
}

MAIN_WRAPPER(dump_dat1)
