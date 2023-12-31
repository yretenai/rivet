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
	struct TimeScaleBasePrius; 

	struct RIVET_DDL_SHARED TimeScaleStartEvent : EventBase {
		constexpr static std::string_view type_name = "TimeScaleStartEvent";
		constexpr static rivet::rivet_type_id type_id = 0x659a8191;

		constexpr static std::string_view IsEnabled_type_name = "IsEnabled";
		constexpr static rivet::rivet_type_id IsEnabled_type_id = 0xb4c37748;
		constexpr static std::string_view Data_type_name = "Data";
		constexpr static rivet::rivet_type_id Data_type_id = 0x9d6333d3; 

		explicit TimeScaleStartEvent() = default;
		explicit TimeScaleStartEvent([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		bool IsEnabled {};
		std::shared_ptr<rivet::ddl::generated::TimeScaleBasePrius> Data {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<TimeScaleStartEvent>;
	};
} // namespace rivet::ddl::generated

// clang-format on
