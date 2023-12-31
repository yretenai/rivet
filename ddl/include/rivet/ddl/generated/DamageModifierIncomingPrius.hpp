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
	struct DamageModifierConditionEntry; 

	struct RIVET_DDL_SHARED DamageModifierIncomingPrius : rivet::structures::rivet_ddl_base {
		constexpr static std::string_view type_name = "DamageModifierIncomingPrius";
		constexpr static rivet::rivet_type_id type_id = 0xae334654;

		constexpr static std::string_view ModifierName_type_name = "ModifierName";
		constexpr static rivet::rivet_type_id ModifierName_type_id = 0xe992e16a;
		constexpr static std::string_view Conditions_type_name = "Conditions";
		constexpr static rivet::rivet_type_id Conditions_type_id = 0x2f505790; 

		explicit DamageModifierIncomingPrius() = default;
		explicit DamageModifierIncomingPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		std::string_view ModifierName {};
		std::vector<std::shared_ptr<rivet::ddl::generated::DamageModifierConditionEntry>> Conditions {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<DamageModifierIncomingPrius>;
	};
} // namespace rivet::ddl::generated

// clang-format on
