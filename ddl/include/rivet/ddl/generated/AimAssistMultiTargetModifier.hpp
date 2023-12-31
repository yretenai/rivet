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
	struct RIVET_DDL_SHARED AimAssistMultiTargetModifier : rivet::structures::rivet_ddl_base {
		constexpr static std::string_view type_name = "AimAssistMultiTargetModifier";
		constexpr static rivet::rivet_type_id type_id = 0x30050cc0;

		constexpr static std::string_view Enable_type_name = "Enable";
		constexpr static rivet::rivet_type_id Enable_type_id = 0xcdd88655;
		constexpr static std::string_view MinTargets_type_name = "MinTargets";
		constexpr static rivet::rivet_type_id MinTargets_type_id = 0xd496c408;
		constexpr static std::string_view ManyTargetCount_type_name = "ManyTargetCount";
		constexpr static rivet::rivet_type_id ManyTargetCount_type_id = 0xf12d4a6;
		constexpr static std::string_view FrictionMod_type_name = "FrictionMod";
		constexpr static rivet::rivet_type_id FrictionMod_type_id = 0x259d7ff2;
		constexpr static std::string_view MagnetMod_type_name = "MagnetMod";
		constexpr static rivet::rivet_type_id MagnetMod_type_id = 0xcc015279;
		constexpr static std::string_view CenterMod_type_name = "CenterMod";
		constexpr static rivet::rivet_type_id CenterMod_type_id = 0x9237bce3; 

		explicit AimAssistMultiTargetModifier() = default;
		explicit AimAssistMultiTargetModifier([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		bool Enable {};
		uint32_t MinTargets {};
		uint32_t ManyTargetCount {};
		float FrictionMod {};
		float MagnetMod {};
		float CenterMod {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<AimAssistMultiTargetModifier>;
	};
} // namespace rivet::ddl::generated

// clang-format on
