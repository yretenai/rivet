// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#pragma once

#include <cstdio>
#include <filesystem>
#include <string>
#include <vector>

#include <rivet/rivet.hpp>

auto
handle_exit(const std::string &name, const clipp::group &cli, bool version_flag, bool help_flag) -> int {
	if (version_flag) {
		std::cout << name << " version " << rivet::rivet_version_detailed() << '\n';
		return 0;
	}

	if (help_flag) {
		std::cout << clipp::make_man_page(cli, name) << '\n';
		return 1;
	}

	std::cout << clipp::usage_lines(cli, name) << '\n';
	return 1;
}

auto
find_glob(const std::vector<std::string> &input_files, const std::string &ext = {}, bool recursive = false) -> std::vector<std::filesystem::path> {
	std::vector<std::filesystem::path> files;
	for (const auto &path : input_files) {
		if (std::filesystem::is_directory(path)) {
			if (recursive) {
				for (const auto &entry : std::filesystem::recursive_directory_iterator(path)) {
					if (entry.is_regular_file() && (ext.empty() || entry.path().extension() == ext)) {
						files.emplace_back(entry.path());
					}
				}
			} else {
				for (const auto &entry : std::filesystem::directory_iterator(path)) {
					if (entry.is_regular_file() && (ext.empty() || entry.path().extension() == ext)) {
						files.emplace_back(entry.path());
					}
				}
			}

			continue;
		}

		if (std::filesystem::exists(path)) {
			files.emplace_back(path);
		}
	}

	return files;
}

#ifdef NDEBUG
	#define MAIN_WRAPPER(name)                                \
		auto main(int argc, char **argv) -> int {             \
			try {                                             \
				return name(argc, argv);                      \
			} catch (std::exception & e) {                    \
				RIVET_DEBUG_BREAK;                            \
				printf("Uncaught Exception: %s\n", e.what()); \
				return 1;                                     \
			}                                                 \
		}
#else
	#define MAIN_WRAPPER(name) \
		auto main(int argc, char **argv) -> int { return name(argc, argv); } // NOLINT(*-exception-escape)
#endif
