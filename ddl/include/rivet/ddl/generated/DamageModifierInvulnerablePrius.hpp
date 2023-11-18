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
	struct RIVET_DDL_SHARED DamageModifierInvulnerablePrius : DamageModifierIncomingPrius {
		constexpr static std::string_view type_name = "DamageModifierInvulnerablePrius";
		constexpr static rivet::rivet_type_id type_id = 0xf2bf1056;

		constexpr static std::string_view Lifetime_type_name = "Lifetime";
		constexpr static rivet::rivet_type_id Lifetime_type_id = 0xc7e68df8;
		constexpr static std::string_view AllowReacts_type_name = "AllowReacts";
		constexpr static rivet::rivet_type_id AllowReacts_type_id = 0x7d494b99; 

		explicit DamageModifierInvulnerablePrius() = default;
		explicit DamageModifierInvulnerablePrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		float Lifetime {};
		bool AllowReacts {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<DamageModifierInvulnerablePrius>;
	};
} // namespace rivet::ddl::generated

// clang-format on
