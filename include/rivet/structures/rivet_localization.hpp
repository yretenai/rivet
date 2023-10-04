// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#pragma once

#include <cstdint>
#include <rivet/rivet_keywords.hpp>
#include <string_view>

namespace rivet::structures {
	enum class rivet_localization_flag : uint8_t {
		None,
		Hide,
		Force
	};

	struct rivet_localization_entry {
		rivet_id id;
		rivet_hash hash;
		uint16_t sorting_index;
		rivet_localization_flag flags;
		std::string_view tag;
		std::u8string_view text;
	};
} // namespace rivet::structures
