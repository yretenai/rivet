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
	struct RIVET_DDL_SHARED DamageModifierConditionRequestIdPrius : DamageModifierConditionBasePrius {
		constexpr static std::string_view type_name = "DamageModifierConditionRequestIdPrius";
		constexpr static rivet::rivet_type_id type_id = 0x2a369d76;

		constexpr static std::string_view RequestId_type_name = "RequestId";
		constexpr static rivet::rivet_type_id RequestId_type_id = 0x239eef0d;
		constexpr static std::string_view IsInclude_type_name = "IsInclude";
		constexpr static rivet::rivet_type_id IsInclude_type_id = 0x9497a047; 

		explicit DamageModifierConditionRequestIdPrius() = default;
		explicit DamageModifierConditionRequestIdPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		uint32_t RequestId {};
		bool IsInclude {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<DamageModifierConditionRequestIdPrius>;
	};
} // namespace rivet::ddl::generated

// clang-format on
