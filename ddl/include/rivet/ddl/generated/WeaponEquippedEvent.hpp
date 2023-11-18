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
	struct DDLVector3; 

	struct RIVET_DDL_SHARED WeaponEquippedEvent : EventBase {
		constexpr static std::string_view type_name = "WeaponEquippedEvent";
		constexpr static rivet::rivet_type_id type_id = 0x91fe56ac;

		constexpr static std::string_view ActorPosition_type_name = "ActorPosition";
		constexpr static rivet::rivet_type_id ActorPosition_type_id = 0xd69ed521;
		constexpr static std::string_view OldWeaponDuration_type_name = "OldWeaponDuration";
		constexpr static rivet::rivet_type_id OldWeaponDuration_type_id = 0xd1078cdf; 

		explicit WeaponEquippedEvent() = default;
		explicit WeaponEquippedEvent([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		std::shared_ptr<rivet::ddl::generated::DDLVector3> ActorPosition {};
		float OldWeaponDuration {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<WeaponEquippedEvent>;
	};
} // namespace rivet::ddl::generated

// clang-format on
