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
	struct BotPlayAnimData; 

	struct RIVET_DDL_SHARED BotComboMovePlayAnim : BotComboMove {
		constexpr static std::string_view type_name = "BotComboMovePlayAnim";
		constexpr static rivet::rivet_type_id type_id = 0x2ce5d9f3;

		constexpr static std::string_view PlayAnimData_type_name = "PlayAnimData";
		constexpr static rivet::rivet_type_id PlayAnimData_type_id = 0xf898fac0; 

		explicit BotComboMovePlayAnim() = default;
		explicit BotComboMovePlayAnim([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		std::shared_ptr<rivet::ddl::generated::BotPlayAnimData> PlayAnimData {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<BotComboMovePlayAnim>;
	};
} // namespace rivet::ddl::generated

// clang-format on
