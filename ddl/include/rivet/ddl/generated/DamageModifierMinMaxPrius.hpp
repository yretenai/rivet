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
	struct RIVET_DDL_SHARED DamageModifierMinMaxPrius : DamageModifierIncomingPrius {
		constexpr static std::string_view type_name = "DamageModifierMinMaxPrius";
		constexpr static rivet::rivet_type_id type_id = 0x6318ce99;

		constexpr static std::string_view Min_type_name = "Min";
		constexpr static rivet::rivet_type_id Min_type_id = 0x8b2e3419;
		constexpr static std::string_view Max_type_name = "Max";
		constexpr static rivet::rivet_type_id Max_type_id = 0xb7230b40; 

		explicit DamageModifierMinMaxPrius() = default;
		explicit DamageModifierMinMaxPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		float Min {};
		float Max {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<DamageModifierMinMaxPrius>;
	};
} // namespace rivet::ddl::generated

// clang-format on
