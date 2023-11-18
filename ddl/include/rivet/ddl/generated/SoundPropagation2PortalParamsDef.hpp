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
	struct SoundPropagation2RangeDef; 

	struct RIVET_DDL_SHARED SoundPropagation2PortalParamsDef : rivet::structures::rivet_ddl_base {
		constexpr static std::string_view type_name = "SoundPropagation2PortalParamsDef";
		constexpr static rivet::rivet_type_id type_id = 0x9e556b51;

		constexpr static std::string_view ReverbFocusDistanceScale_type_name = "ReverbFocusDistanceScale";
		constexpr static rivet::rivet_type_id ReverbFocusDistanceScale_type_id = 0xb993144f;
		constexpr static std::string_view ReverbAzimuthDistanceScale_type_name = "ReverbAzimuthDistanceScale";
		constexpr static rivet::rivet_type_id ReverbAzimuthDistanceScale_type_id = 0x135cefe9;
		constexpr static std::string_view VirtualPositionDistanceScale_type_name = "VirtualPositionDistanceScale";
		constexpr static rivet::rivet_type_id VirtualPositionDistanceScale_type_id = 0x59876124;
		constexpr static std::string_view AttenuationFadeScalar_type_name = "AttenuationFadeScalar";
		constexpr static rivet::rivet_type_id AttenuationFadeScalar_type_id = 0x78357782;
		constexpr static std::string_view MaxFilteredAttenuationAngle_type_name = "MaxFilteredAttenuationAngle";
		constexpr static rivet::rivet_type_id MaxFilteredAttenuationAngle_type_id = 0x4ca7e6b5;
		constexpr static std::string_view MaxFullAttenuationAngle_type_name = "MaxFullAttenuationAngle";
		constexpr static rivet::rivet_type_id MaxFullAttenuationAngle_type_id = 0xd7e09827; 

		explicit SoundPropagation2PortalParamsDef() = default;
		explicit SoundPropagation2PortalParamsDef([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		std::shared_ptr<rivet::ddl::generated::SoundPropagation2RangeDef> ReverbFocusDistanceScale {};
		std::shared_ptr<rivet::ddl::generated::SoundPropagation2RangeDef> ReverbAzimuthDistanceScale {};
		std::shared_ptr<rivet::ddl::generated::SoundPropagation2RangeDef> VirtualPositionDistanceScale {};
		float AttenuationFadeScalar {};
		float MaxFilteredAttenuationAngle {};
		float MaxFullAttenuationAngle {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<SoundPropagation2PortalParamsDef>;
	};
} // namespace rivet::ddl::generated

// clang-format on
