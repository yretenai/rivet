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
	struct RIVET_DDL_SHARED HealthBarShowEvent : EventBase {
		constexpr static std::string_view type_name = "HealthBarShowEvent";
		constexpr static rivet::rivet_type_id type_id = 0x27ac5886;

		constexpr static std::string_view IsFriendly_type_name = "IsFriendly";
		constexpr static rivet::rivet_type_id IsFriendly_type_id = 0x42fa44dd; 

		explicit HealthBarShowEvent() = default;
		explicit HealthBarShowEvent([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		bool IsFriendly {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<HealthBarShowEvent>;
	};
} // namespace rivet::ddl::generated

// clang-format on
