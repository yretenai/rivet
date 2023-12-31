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
	struct RIVET_DDL_SHARED EventFilterOptions : rivet::structures::rivet_ddl_base {
		constexpr static std::string_view type_name = "EventFilterOptions";
		constexpr static rivet::rivet_type_id type_id = 0x6feaf664;

		constexpr static std::string_view FilterAllEvents_type_name = "FilterAllEvents";
		constexpr static rivet::rivet_type_id FilterAllEvents_type_id = 0x111ff31d;
		constexpr static std::string_view FilterEventsList_type_name = "FilterEventsList";
		constexpr static rivet::rivet_type_id FilterEventsList_type_id = 0x6a224c68; 

		explicit EventFilterOptions() = default;
		explicit EventFilterOptions([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		bool FilterAllEvents {};
		std::vector<std::string_view> FilterEventsList {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<EventFilterOptions>;
	};
} // namespace rivet::ddl::generated

// clang-format on
