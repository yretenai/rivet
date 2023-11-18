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

#include <rivet/ddl/generated/EventBase.hpp> 

namespace rivet::ddl::generated {
	struct RIVET_DDL_SHARED StatusEffectDamageStartEvent : EventBase {
		constexpr static std::string_view type_name = "StatusEffectDamageStartEvent";
		constexpr static rivet::rivet_type_id type_id = 0xd3043986;

		constexpr static std::string_view DamageTypeName_type_name = "DamageTypeName";
		constexpr static rivet::rivet_type_id DamageTypeName_type_id = 0xeaa6e76a; 

		explicit StatusEffectDamageStartEvent() = default;
		explicit StatusEffectDamageStartEvent([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		std::string_view DamageTypeName {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<StatusEffectDamageStartEvent>;
	};
} // namespace rivet::ddl::generated

// clang-format on
