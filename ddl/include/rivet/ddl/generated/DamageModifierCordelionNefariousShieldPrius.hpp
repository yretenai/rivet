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

#include <rivet/ddl/generated/DamageModifierIncomingPrius.hpp> 

namespace rivet::ddl::generated {
	struct RIVET_DDL_SHARED DamageModifierCordelionNefariousShieldPrius : DamageModifierIncomingPrius {
		constexpr static std::string_view type_name = "DamageModifierCordelionNefariousShieldPrius";
		constexpr static rivet::rivet_type_id type_id = 0xd0ff5d1;

		constexpr static std::string_view DamageReductionMultiplier_type_name = "DamageReductionMultiplier";
		constexpr static rivet::rivet_type_id DamageReductionMultiplier_type_id = 0x79a857f1; 

		explicit DamageModifierCordelionNefariousShieldPrius() = default;
		explicit DamageModifierCordelionNefariousShieldPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		float DamageReductionMultiplier {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<DamageModifierCordelionNefariousShieldPrius>;
	};
} // namespace rivet::ddl::generated

// clang-format on
