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
	struct StatusEffectBasePrius; 

	struct RIVET_DDL_SHARED DamageModStatusEffectData : rivet::structures::rivet_ddl_base {
		constexpr static std::string_view type_name = "DamageModStatusEffectData";
		constexpr static rivet::rivet_type_id type_id = 0xc502171;

		constexpr static std::string_view Effect_type_name = "Effect";
		constexpr static rivet::rivet_type_id Effect_type_id = 0x8818df95; 

		explicit DamageModStatusEffectData() = default;
		explicit DamageModStatusEffectData([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		std::shared_ptr<rivet::ddl::generated::StatusEffectBasePrius> Effect {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<DamageModStatusEffectData>;
	};
} // namespace rivet::ddl::generated

// clang-format on
