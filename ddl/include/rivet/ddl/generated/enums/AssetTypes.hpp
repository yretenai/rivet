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
	constexpr static std::string_view AssetTypes_type_name = "AssetTypes";
	constexpr static rivet::rivet_type_id AssetTypes_type_id = 0xfa864dde;

	constexpr static std::array<std::string_view, 14> AssetTypes_values = {
		"kActorAsset",
		"kConduitAsset",
		"kConfigAsset",
		"kCinematicAsset",
		"kModel",
		"kAnimSet",
		"kMaterial",
		"kMaterialTemplate",
		"kTextureAsset",
		"kAtmosphere",
		"kVisualEffect",
		"kSoundBank",
		"kLocalizationAsset",
		"kZone", 
	};

	enum class AssetTypes : uint64_t {
		Actor,
		Conduit,
		Config,
		Cinematic,
		Model,
		AnimSet,
		Material,
		Material_Template,
		Texture,
		Atmosphere,
		Visual_Effect,
		Sound_Bank,
		Localization,
		Zone, 
	};
} // namespace rivet::ddl::generated

// clang-format on
