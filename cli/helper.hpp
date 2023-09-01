// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#pragma once

#include <cstdio>
#include <string_view>
#include <vector>

auto
find_glob(const std::vector<std::string> &input_files, const std::string &ext) -> std::vector<std::filesystem::path> {
	std::vector<std::filesystem::path> files;
	for (const auto &path : input_files) {
		if (std::filesystem::is_directory(path)) {
			for (const auto &entry : std::filesystem::recursive_directory_iterator(path)) {
				if (entry.is_regular_file() && entry.path().extension() == ext) {
					files.emplace_back(entry.path());
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
