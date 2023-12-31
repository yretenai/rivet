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
	struct RIVET_DDL_SHARED WeakSpotDamagedEvent : EventBase {
		constexpr static std::string_view type_name = "WeakSpotDamagedEvent";
		constexpr static rivet::rivet_type_id type_id = 0xbb461b95;

		constexpr static std::string_view LocatorName_type_name = "LocatorName";
		constexpr static rivet::rivet_type_id LocatorName_type_id = 0x5814524d;
		constexpr static std::string_view HealthPercent_type_name = "HealthPercent";
		constexpr static rivet::rivet_type_id HealthPercent_type_id = 0x13ab5436;
		constexpr static std::string_view DamageAmount_type_name = "DamageAmount";
		constexpr static rivet::rivet_type_id DamageAmount_type_id = 0x563be470; 

		explicit WeakSpotDamagedEvent() = default;
		explicit WeakSpotDamagedEvent([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		std::string_view LocatorName {};
		float HealthPercent {};
		float DamageAmount {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<WeakSpotDamagedEvent>;
	};
} // namespace rivet::ddl::generated

// clang-format on
