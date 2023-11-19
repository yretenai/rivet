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

#include <rivet/ddl/generated/bitsets/x8b303a8b.hpp>
#include <rivet/ddl/generated/DamageModifierIncomingPrius.hpp> 

namespace rivet::ddl::generated {
	struct RIVET_DDL_SHARED DamageModifierIncomingAllowKnockbackPrius : DamageModifierIncomingPrius {
		constexpr static std::string_view type_name = "DamageModifierIncomingAllowKnockbackPrius";
		constexpr static rivet::rivet_type_id type_id = 0xafa63b41;

		constexpr static std::string_view AllowedKnockbacks_type_name = "AllowedKnockbacks";
		constexpr static rivet::rivet_type_id AllowedKnockbacks_type_id = 0xe6b0ab90; 

		explicit DamageModifierIncomingAllowKnockbackPrius() = default;
		explicit DamageModifierIncomingAllowKnockbackPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		rivet::ddl::generated::x8b303a8b AllowedKnockbacks {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<DamageModifierIncomingAllowKnockbackPrius>;
	};
} // namespace rivet::ddl::generated

// clang-format on