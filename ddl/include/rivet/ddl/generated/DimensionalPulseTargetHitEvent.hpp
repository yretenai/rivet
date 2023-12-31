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

#include <rivet/ddl/generated/enums/xee804118.hpp>
#include <rivet/ddl/generated/EventBase.hpp> 

namespace rivet::ddl::generated {
	struct DDLVector3; 

	struct RIVET_DDL_SHARED DimensionalPulseTargetHitEvent : EventBase {
		constexpr static std::string_view type_name = "DimensionalPulseTargetHitEvent";
		constexpr static rivet::rivet_type_id type_id = 0x729b8c2f;

		constexpr static std::string_view EffectTimeRemaining_type_name = "EffectTimeRemaining";
		constexpr static rivet::rivet_type_id EffectTimeRemaining_type_id = 0xdbd808c9;
		constexpr static std::string_view ExtraBehavior_type_name = "ExtraBehavior";
		constexpr static rivet::rivet_type_id ExtraBehavior_type_id = 0x5137c6ec;
		constexpr static std::string_view CurrentSize_type_name = "CurrentSize";
		constexpr static rivet::rivet_type_id CurrentSize_type_id = 0x9eb93c43;
		constexpr static std::string_view CurrentSizeX_type_name = "CurrentSizeX";
		constexpr static rivet::rivet_type_id CurrentSizeX_type_id = 0x8afb70d0;
		constexpr static std::string_view CurrentSizeY_type_name = "CurrentSizeY";
		constexpr static rivet::rivet_type_id CurrentSizeY_type_id = 0xfdfc4046;
		constexpr static std::string_view CurrentSizeZ_type_name = "CurrentSizeZ";
		constexpr static rivet::rivet_type_id CurrentSizeZ_type_id = 0x64f511fc;
		constexpr static std::string_view NextSize_type_name = "NextSize";
		constexpr static rivet::rivet_type_id NextSize_type_id = 0x1e592e39;
		constexpr static std::string_view NextSizeX_type_name = "NextSizeX";
		constexpr static rivet::rivet_type_id NextSizeX_type_id = 0x3aab08e0;
		constexpr static std::string_view NextSizeY_type_name = "NextSizeY";
		constexpr static rivet::rivet_type_id NextSizeY_type_id = 0x4dac3876;
		constexpr static std::string_view NextSizeZ_type_name = "NextSizeZ";
		constexpr static rivet::rivet_type_id NextSizeZ_type_id = 0xd4a569cc; 

		explicit DimensionalPulseTargetHitEvent() = default;
		explicit DimensionalPulseTargetHitEvent([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		float EffectTimeRemaining {};
		rivet::ddl::generated::xee804118 ExtraBehavior {};
		std::shared_ptr<rivet::ddl::generated::DDLVector3> CurrentSize {};
		float CurrentSizeX {};
		float CurrentSizeY {};
		float CurrentSizeZ {};
		std::shared_ptr<rivet::ddl::generated::DDLVector3> NextSize {};
		float NextSizeX {};
		float NextSizeY {};
		float NextSizeZ {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<DimensionalPulseTargetHitEvent>;
	};
} // namespace rivet::ddl::generated

// clang-format on
