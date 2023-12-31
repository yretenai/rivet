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
	struct RIVET_DDL_SHARED AimAssistDistanceModifier : rivet::structures::rivet_ddl_base {
		constexpr static std::string_view type_name = "AimAssistDistanceModifier";
		constexpr static rivet::rivet_type_id type_id = 0xbc6167b5;

		constexpr static std::string_view Enable_type_name = "Enable";
		constexpr static rivet::rivet_type_id Enable_type_id = 0xcdd88655;
		constexpr static std::string_view FrictionDistanceNear_type_name = "FrictionDistanceNear";
		constexpr static rivet::rivet_type_id FrictionDistanceNear_type_id = 0xe66f6da4;
		constexpr static std::string_view FrictionDistanceFar_type_name = "FrictionDistanceFar";
		constexpr static rivet::rivet_type_id FrictionDistanceFar_type_id = 0xe2f0705f;
		constexpr static std::string_view FrictionMod_type_name = "FrictionMod";
		constexpr static rivet::rivet_type_id FrictionMod_type_id = 0x259d7ff2;
		constexpr static std::string_view MagnetDistanceNear_type_name = "MagnetDistanceNear";
		constexpr static rivet::rivet_type_id MagnetDistanceNear_type_id = 0x793fd2b3;
		constexpr static std::string_view MagnetDistanceFar_type_name = "MagnetDistanceFar";
		constexpr static rivet::rivet_type_id MagnetDistanceFar_type_id = 0xdabc219;
		constexpr static std::string_view MagnetMod_type_name = "MagnetMod";
		constexpr static rivet::rivet_type_id MagnetMod_type_id = 0xcc015279;
		constexpr static std::string_view CenterDistanceNear_type_name = "CenterDistanceNear";
		constexpr static rivet::rivet_type_id CenterDistanceNear_type_id = 0x4de9d4af;
		constexpr static std::string_view CenterDistanceFar_type_name = "CenterDistanceFar";
		constexpr static rivet::rivet_type_id CenterDistanceFar_type_id = 0xb5742270;
		constexpr static std::string_view CenterMod_type_name = "CenterMod";
		constexpr static rivet::rivet_type_id CenterMod_type_id = 0x9237bce3; 

		explicit AimAssistDistanceModifier() = default;
		explicit AimAssistDistanceModifier([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		bool Enable {};
		float FrictionDistanceNear {};
		float FrictionDistanceFar {};
		float FrictionMod {};
		float MagnetDistanceNear {};
		float MagnetDistanceFar {};
		float MagnetMod {};
		float CenterDistanceNear {};
		float CenterDistanceFar {};
		float CenterMod {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<AimAssistDistanceModifier>;
	};
} // namespace rivet::ddl::generated

// clang-format on
