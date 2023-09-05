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

#include <rivet/ddl/generated/DamageModifierOutgoingPrius.hpp> 

namespace rivet::ddl::generated {
	struct RIVET_DDL_SHARED DamageModifierHitDirectionOutgoingPrius : DamageModifierOutgoingPrius {
		constexpr const static std::string_view type_name = "DamageModifierHitDirectionOutgoingPrius";
		constexpr const static rivet::rivet_type_id type_id = 0x3560429a;

		constexpr const static std::string_view ConeAngle_type_name = "ConeAngle";
		constexpr const static rivet::rivet_type_id ConeAngle_type_id = 0x8c03b095;
		constexpr const static std::string_view KeepHitsInCone_type_name = "KeepHitsInCone";
		constexpr const static rivet::rivet_type_id KeepHitsInCone_type_id = 0x97e703ce; 

		explicit DamageModifierHitDirectionOutgoingPrius() = default;
		explicit DamageModifierHitDirectionOutgoingPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		float ConeAngle {};
		bool KeepHitsInCone {}; 

		auto
		get_type_id() const noexcept -> rivet::rivet_type_id override;

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<DamageModifierHitDirectionOutgoingPrius>;
	};
} // namespace rivet::ddl::generated

// clang-format on
