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

#include <rivet/ddl/generated/enums/KnockbackLevels.hpp>
#include <rivet/ddl/generated/DamageModifierProcIncomingPrius.hpp> 

namespace rivet::ddl::generated {
	struct RIVET_DDL_SHARED DamageModifierProcKnockbackLevelIncomingPrius : DamageModifierProcIncomingPrius {
		constexpr static std::string_view type_name = "DamageModifierProcKnockbackLevelIncomingPrius";
		constexpr static rivet::rivet_type_id type_id = 0x3839cc4c;

		constexpr static std::string_view KnockbackLevel_type_name = "KnockbackLevel";
		constexpr static rivet::rivet_type_id KnockbackLevel_type_id = 0x2554a262;
		constexpr static std::string_view AllowKnockbackDowngrade_type_name = "AllowKnockbackDowngrade";
		constexpr static rivet::rivet_type_id AllowKnockbackDowngrade_type_id = 0x2079692c; 

		explicit DamageModifierProcKnockbackLevelIncomingPrius() = default;
		explicit DamageModifierProcKnockbackLevelIncomingPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		rivet::ddl::generated::KnockbackLevels KnockbackLevel {};
		bool AllowKnockbackDowngrade {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<DamageModifierProcKnockbackLevelIncomingPrius>;
	};
} // namespace rivet::ddl::generated

// clang-format on
