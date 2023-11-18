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

#include <rivet/ddl/generated/enums/x8b0475d0.hpp> 

namespace rivet::ddl::generated {
	struct RIVET_DDL_SHARED PlatformMovingStopItem : rivet::structures::rivet_ddl_base {
		constexpr static std::string_view type_name = "PlatformMovingStopItem";
		constexpr static rivet::rivet_type_id type_id = 0xc87d3cb1;

		constexpr static std::string_view StopVolume_type_name = "StopVolume";
		constexpr static rivet::rivet_type_id StopVolume_type_id = 0x62da917a;
		constexpr static std::string_view StopType_type_name = "StopType";
		constexpr static rivet::rivet_type_id StopType_type_id = 0xa8037a19;
		constexpr static std::string_view ActionTime_type_name = "ActionTime";
		constexpr static rivet::rivet_type_id ActionTime_type_id = 0x6401eef8;
		constexpr static std::string_view CallVolume_type_name = "CallVolume";
		constexpr static rivet::rivet_type_id CallVolume_type_id = 0x8dd2e6f5;
		constexpr static std::string_view SquashVolume_type_name = "SquashVolume";
		constexpr static rivet::rivet_type_id SquashVolume_type_id = 0x1a290659;
		constexpr static std::string_view SquashStopDist_type_name = "SquashStopDist";
		constexpr static rivet::rivet_type_id SquashStopDist_type_id = 0x660de44f;
		constexpr static std::string_view OfferLOCTag_type_name = "OfferLOCTag";
		constexpr static rivet::rivet_type_id OfferLOCTag_type_id = 0xda16bb20; 

		explicit PlatformMovingStopItem() = default;
		explicit PlatformMovingStopItem([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		uint64_t StopVolume {};
		rivet::ddl::generated::x8b0475d0 StopType {};
		float ActionTime {};
		uint64_t CallVolume {};
		uint64_t SquashVolume {};
		float SquashStopDist {};
		std::string_view OfferLOCTag {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<PlatformMovingStopItem>;
	};
} // namespace rivet::ddl::generated

// clang-format on
