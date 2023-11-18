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

#include <rivet/ddl/generated/EventBase.hpp> 

namespace rivet::ddl::generated {
	struct RIVET_DDL_SHARED CineCameraEnableYawPitchEvent : EventBase {
		constexpr static std::string_view type_name = "CineCameraEnableYawPitchEvent";
		constexpr static rivet::rivet_type_id type_id = 0xb66b81ba;

		constexpr static std::string_view YawMin_type_name = "YawMin";
		constexpr static rivet::rivet_type_id YawMin_type_id = 0x975af737;
		constexpr static std::string_view YawMax_type_name = "YawMax";
		constexpr static rivet::rivet_type_id YawMax_type_id = 0xab57c86e;
		constexpr static std::string_view YawSoftZone_type_name = "YawSoftZone";
		constexpr static rivet::rivet_type_id YawSoftZone_type_id = 0x9ce69f57;
		constexpr static std::string_view PitchMin_type_name = "PitchMin";
		constexpr static rivet::rivet_type_id PitchMin_type_id = 0xfb99e53b;
		constexpr static std::string_view PitchMax_type_name = "PitchMax";
		constexpr static rivet::rivet_type_id PitchMax_type_id = 0xc794da62;
		constexpr static std::string_view PitchSoftZone_type_name = "PitchSoftZone";
		constexpr static rivet::rivet_type_id PitchSoftZone_type_id = 0xf9a7e1f0;
		constexpr static std::string_view StickConfig_type_name = "StickConfig";
		constexpr static rivet::rivet_type_id StickConfig_type_id = 0x3bc8f276; 

		explicit CineCameraEnableYawPitchEvent() = default;
		explicit CineCameraEnableYawPitchEvent([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		float YawMin {};
		float YawMax {};
		float YawSoftZone {};
		float PitchMin {};
		float PitchMax {};
		float PitchSoftZone {};
		std::string_view StickConfig {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<CineCameraEnableYawPitchEvent>;
	};
} // namespace rivet::ddl::generated

// clang-format on
