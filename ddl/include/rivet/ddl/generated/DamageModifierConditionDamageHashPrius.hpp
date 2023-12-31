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
	struct RIVET_DDL_SHARED DamageModifierConditionDamageHashPrius : DamageModifierConditionBasePrius {
		constexpr static std::string_view type_name = "DamageModifierConditionDamageHashPrius";
		constexpr static rivet::rivet_type_id type_id = 0x8bb2bbb5;

		constexpr static std::string_view DamageString_type_name = "DamageString";
		constexpr static rivet::rivet_type_id DamageString_type_id = 0x4624269b;
		constexpr static std::string_view DamageHash_type_name = "DamageHash";
		constexpr static rivet::rivet_type_id DamageHash_type_id = 0xd96a20dc;
		constexpr static std::string_view IsInclude_type_name = "IsInclude";
		constexpr static rivet::rivet_type_id IsInclude_type_id = 0x9497a047; 

		explicit DamageModifierConditionDamageHashPrius() = default;
		explicit DamageModifierConditionDamageHashPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		std::string_view DamageString {};
		uint32_t DamageHash {};
		bool IsInclude {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<DamageModifierConditionDamageHashPrius>;
	};
} // namespace rivet::ddl::generated

// clang-format on
