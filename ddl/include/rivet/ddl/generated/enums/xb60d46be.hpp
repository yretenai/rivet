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
	constexpr static std::string_view xb60d46be_type_name = "xb60d46be";
	constexpr static rivet::rivet_type_id xb60d46be_type_id = 0xb60d46be;

	constexpr static std::array<std::string_view, 11> xb60d46be_values = {
		"VendorPurchase",
		"VendorUpgrade",
		"VendorOmegaWeaponIntro",
		"VendorOmegaWeaponPurchased",
		"PauseWeaponsRemap",
		"PauseVanity",
		"PauseVanityColor",
		"PauseMap",
		"PauseGoldBolts",
		"PauseSpybots",
		"PauseLorbs", 
	};

	constexpr static std::array<std::string_view, 11> xb60d46be_labels = {
		"NONE",
		"NONE",
		"NONE",
		"NONE",
		"NONE",
		"NONE",
		"NONE",
		"NONE",
		"NONE",
		"NONE",
		"NONE", 
	};

	enum class xb60d46be : uint64_t {
		VendorPurchase,
		VendorUpgrade,
		VendorOmegaWeaponIntro,
		VendorOmegaWeaponPurchased,
		PauseWeaponsRemap,
		PauseVanity,
		PauseVanityColor,
		PauseMap,
		PauseGoldBolts,
		PauseSpybots,
		PauseLorbs, 
	};
} // namespace rivet::ddl::generated

// clang-format on