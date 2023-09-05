// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#pragma once

// clang-format off

#include <cstdint>
#include <string_view>
#include <array>

#include <rivet/hash/type_id.hpp>
#include <rivet/rivet_keywords.hpp>

namespace rivet::ddl::generated {
	constexpr const static std::string_view x5578becf_type_name = "x5578becf";
	constexpr const static rivet::rivet_type_id x5578becf_type_id = 0x5578becf;

	constexpr const static std::array<std::string_view, 4> x5578becf_values = {
		"kLogSystemUnknown",
		"kLogSoundSystem",
		"kLogConduitSystem",
		"kLogSoundInfo", 
	};

	enum class x5578becf : uint64_t {
		LogSystemUnknown,
		LogSoundSystem,
		LogConduitSystem,
		LogSoundInfo, 
	};
} // namespace rivet::ddl::generated

// clang-format on
