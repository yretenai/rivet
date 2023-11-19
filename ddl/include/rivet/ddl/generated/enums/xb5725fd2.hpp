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
	constexpr static std::string_view xb5725fd2_type_name = "xb5725fd2";
	constexpr static rivet::rivet_type_id xb5725fd2_type_id = 0xb5725fd2;

	constexpr static std::array<std::string_view, 2> xb5725fd2_values = {
		"kSceneMode",
		"kVaultMode", 
	};

	constexpr static std::array<std::string_view, 2> xb5725fd2_labels = {
		"Scene Mode",
		"Vault Mode", 
	};

	enum class xb5725fd2 : uint64_t {
		Scene_Mode,
		Vault_Mode, 
	};
} // namespace rivet::ddl::generated

// clang-format on