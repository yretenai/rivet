// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#pragma once

#include <cstdint>
#include <string>
#include <unordered_map>

#include <rivet/rivet_keywords.hpp>
#include <rivet/rivet_array.hpp>

namespace rivet::structures {
	struct rivet_asset;

	struct rivet_archive {
		std::string name;
		uint64_t time;
		uint32_t version;
		uint32_t unknown;
		uint16_t load_priority;
	};
}
