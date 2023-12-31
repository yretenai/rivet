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

#include <rivet/ddl/generated/BotComboMove.hpp> 

namespace rivet::ddl::generated {
	struct ShootAtMortarCurveData; 

	struct RIVET_DDL_SHARED BotComboMoveShootAtMortarCurve : BotComboMove {
		constexpr static std::string_view type_name = "BotComboMoveShootAtMortarCurve";
		constexpr static rivet::rivet_type_id type_id = 0x1dc46d83;

		constexpr static std::string_view ShootAtMortarCurveData_type_name = "ShootAtMortarCurveData";
		constexpr static rivet::rivet_type_id ShootAtMortarCurveData_type_id = 0xd5bba073; 

		explicit BotComboMoveShootAtMortarCurve() = default;
		explicit BotComboMoveShootAtMortarCurve([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		std::shared_ptr<rivet::ddl::generated::ShootAtMortarCurveData> ShootAtMortarCurveData {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<BotComboMoveShootAtMortarCurve>;
	};
} // namespace rivet::ddl::generated

// clang-format on
