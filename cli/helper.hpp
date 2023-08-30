// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#pragma once

#include <string_view>
#include <vector>

#define MAIN_WRAPPER(name) \
	auto main(int argc, char **argv) -> int { \
		try { \
			auto args = std::vector<std::string_view>(); \
			if (argc > 1) \
				args = std::vector<std::string_view>(argv + 1, argv + argc); \
			return name(args); \
		} catch (std::exception & e) { \
			RIVET_DEBUG_BREAK; \
			try { \
				std::cout << "Exception: " << e.what() << '\n'; \
			} catch (...) { } \
			return 1; \
		} \
	}
