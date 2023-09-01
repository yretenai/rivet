// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#pragma once

#include <cstdio>
#include <string_view>
#include <vector>

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
		auto main(int argc, char **argv) -> int { return name(argc, argv); }
#endif
