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
	struct RIVET_DDL_SHARED StatusEffectStartEvent : EventBase {
		constexpr static std::string_view type_name = "StatusEffectStartEvent";
		constexpr static rivet::rivet_type_id type_id = 0xdc2b5475;

		constexpr static std::string_view EffectName_type_name = "EffectName";
		constexpr static rivet::rivet_type_id EffectName_type_id = 0xb266fef4;
		constexpr static std::string_view SourceWeaponId_type_name = "SourceWeaponId";
		constexpr static rivet::rivet_type_id SourceWeaponId_type_id = 0xfc928207; 

		explicit StatusEffectStartEvent() = default;
		explicit StatusEffectStartEvent([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		std::string_view EffectName {};
		uint16_t SourceWeaponId {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<StatusEffectStartEvent>;
	};
} // namespace rivet::ddl::generated

// clang-format on
