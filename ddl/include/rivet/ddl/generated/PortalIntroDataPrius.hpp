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

#include <rivet/ddl/generated/IntroDataPrius.hpp> 

namespace rivet::ddl::generated {
	struct RIVET_DDL_SHARED PortalIntroDataPrius : IntroDataPrius {
		constexpr static std::string_view type_name = "PortalIntroDataPrius";
		constexpr static rivet::rivet_type_id type_id = 0x5fbf8cb0;

		constexpr static std::string_view PortalAsset_type_name = "PortalAsset";
		constexpr static rivet::rivet_type_id PortalAsset_type_id = 0x99619335;
		constexpr static std::string_view DestDist_type_name = "DestDist";
		constexpr static rivet::rivet_type_id DestDist_type_id = 0x93e236af;
		constexpr static std::string_view WaitAnim_type_name = "WaitAnim";
		constexpr static rivet::rivet_type_id WaitAnim_type_id = 0xd103b125;
		constexpr static std::string_view JumpAnim_type_name = "JumpAnim";
		constexpr static rivet::rivet_type_id JumpAnim_type_id = 0xcb3dc9d4;
		constexpr static std::string_view InAirAnim_type_name = "InAirAnim";
		constexpr static rivet::rivet_type_id InAirAnim_type_id = 0xf91d895d;
		constexpr static std::string_view LandAnim_type_name = "LandAnim";
		constexpr static rivet::rivet_type_id LandAnim_type_id = 0x8d373b62;
		constexpr static std::string_view HoverIntroAnim_type_name = "HoverIntroAnim";
		constexpr static rivet::rivet_type_id HoverIntroAnim_type_id = 0x198ef61e;
		constexpr static std::string_view HoverAnim_type_name = "HoverAnim";
		constexpr static rivet::rivet_type_id HoverAnim_type_id = 0x38cac627;
		constexpr static std::string_view HoverYOffset_type_name = "HoverYOffset";
		constexpr static rivet::rivet_type_id HoverYOffset_type_id = 0xfd6e31f;
		constexpr static std::string_view PreShader_type_name = "PreShader";
		constexpr static rivet::rivet_type_id PreShader_type_id = 0xea318765;
		constexpr static std::string_view PostShader_type_name = "PostShader";
		constexpr static rivet::rivet_type_id PostShader_type_id = 0x3e4aa554;
		constexpr static std::string_view OpenTime_type_name = "OpenTime";
		constexpr static rivet::rivet_type_id OpenTime_type_id = 0xea59bf87;
		constexpr static std::string_view CloseTime_type_name = "CloseTime";
		constexpr static rivet::rivet_type_id CloseTime_type_id = 0xc926d00e;
		constexpr static std::string_view TimeBetweenIntros_type_name = "TimeBetweenIntros";
		constexpr static rivet::rivet_type_id TimeBetweenIntros_type_id = 0x312cfb42;
		constexpr static std::string_view DropShipBonusDist_type_name = "DropShipBonusDist";
		constexpr static rivet::rivet_type_id DropShipBonusDist_type_id = 0xa4456301; 

		explicit PortalIntroDataPrius() = default;
		explicit PortalIntroDataPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		std::string_view PortalAsset {};
		float DestDist {};
		std::string_view WaitAnim {};
		std::string_view JumpAnim {};
		std::string_view InAirAnim {};
		std::string_view LandAnim {};
		std::string_view HoverIntroAnim {};
		std::string_view HoverAnim {};
		float HoverYOffset {};
		std::string_view PreShader {};
		std::string_view PostShader {};
		float OpenTime {};
		float CloseTime {};
		float TimeBetweenIntros {};
		float DropShipBonusDist {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<PortalIntroDataPrius>;
	};
} // namespace rivet::ddl::generated

// clang-format on
