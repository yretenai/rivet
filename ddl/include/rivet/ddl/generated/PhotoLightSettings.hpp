// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#pragma once

// clang-format off

#include <cstdint>
#include <memory>
#include <string_view>
#include <vector>

#include <rivet/hash/type_id.hpp>
#include <rivet/rivet_array.hpp>
#include <rivet/rivet_keywords.hpp>
#include <rivet/structures/rivet_serialization.hpp>

namespace rivet::ddl::generated {
	struct PhotoLightMoveOrbitData;
	struct PhotoLightData; 

	struct RIVET_DDL_SHARED PhotoLightSettings : rivet::structures::rivet_ddl_base {
		constexpr static std::string_view type_name = "PhotoLightSettings";
		constexpr static rivet::rivet_type_id type_id = 0x8745b4c0;

		constexpr static std::string_view MaxNumLights_type_name = "MaxNumLights";
		constexpr static rivet::rivet_type_id MaxNumLights_type_id = 0xec3163a4;
		constexpr static std::string_view LightSettings_type_name = "LightSettings";
		constexpr static rivet::rivet_type_id LightSettings_type_id = 0x7e3ed937;
		constexpr static std::string_view Orbit_type_name = "Orbit";
		constexpr static rivet::rivet_type_id Orbit_type_id = 0xad21c9d2;
		constexpr static std::string_view SpotlightCone_type_name = "SpotlightCone";
		constexpr static rivet::rivet_type_id SpotlightCone_type_id = 0xf06caaf6;
		constexpr static std::string_view PointLightModel_type_name = "PointLightModel";
		constexpr static rivet::rivet_type_id PointLightModel_type_id = 0x5827e22e;
		constexpr static std::string_view UseDebugLightRig_type_name = "UseDebugLightRig";
		constexpr static rivet::rivet_type_id UseDebugLightRig_type_id = 0xcaefd69c;
		constexpr static std::string_view RigModel_type_name = "RigModel";
		constexpr static rivet::rivet_type_id RigModel_type_id = 0xaaff68e0; 

		explicit PhotoLightSettings() = default;
		explicit PhotoLightSettings([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		uint8_t MaxNumLights {};
		std::shared_ptr<rivet::ddl::generated::PhotoLightData> LightSettings {};
		std::shared_ptr<rivet::ddl::generated::PhotoLightMoveOrbitData> Orbit {};
		std::string_view SpotlightCone {};
		std::string_view PointLightModel {};
		bool UseDebugLightRig {};
		std::string_view RigModel {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<PhotoLightSettings>;
	};
} // namespace rivet::ddl::generated

// clang-format on
