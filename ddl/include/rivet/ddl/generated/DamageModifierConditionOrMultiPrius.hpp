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

#include <rivet/ddl/generated/DamageModifierConditionBasePrius.hpp> 

namespace rivet::ddl::generated {
	struct DamageModifierConditionEntry; 

	struct RIVET_DDL_SHARED DamageModifierConditionOrMultiPrius : DamageModifierConditionBasePrius {
		constexpr static std::string_view type_name = "DamageModifierConditionOrMultiPrius";
		constexpr static rivet::rivet_type_id type_id = 0x86d1b817;

		constexpr static std::string_view AnyOf_type_name = "AnyOf";
		constexpr static rivet::rivet_type_id AnyOf_type_id = 0x28ca2169; 

		explicit DamageModifierConditionOrMultiPrius() = default;
		explicit DamageModifierConditionOrMultiPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		std::vector<std::shared_ptr<rivet::ddl::generated::DamageModifierConditionEntry>> AnyOf {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<DamageModifierConditionOrMultiPrius>;
	};
} // namespace rivet::ddl::generated

// clang-format on
