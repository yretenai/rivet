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

#include <rivet/ddl/generated/enums/xc6f5c0d7.hpp>
#include <rivet/ddl/generated/EventBase.hpp> 

namespace rivet::ddl::generated {
	struct RIVET_DDL_SHARED DevstatsSegmentMappingEvent : EventBase {
		constexpr static std::string_view type_name = "DevstatsSegmentMappingEvent";
		constexpr static rivet::rivet_type_id type_id = 0x848399a8;

		constexpr static std::string_view EventId_type_name = "EventId";
		constexpr static rivet::rivet_type_id EventId_type_id = 0x2ac4d854;
		constexpr static std::string_view SegmentId_type_name = "SegmentId";
		constexpr static rivet::rivet_type_id SegmentId_type_id = 0x7d1d5d0e;
		constexpr static std::string_view SegmentType_type_name = "SegmentType";
		constexpr static rivet::rivet_type_id SegmentType_type_id = 0x2f332e9a;
		constexpr static std::string_view SegmentTime_type_name = "SegmentTime";
		constexpr static rivet::rivet_type_id SegmentTime_type_id = 0xcc79e1f6; 

		explicit DevstatsSegmentMappingEvent() = default;
		explicit DevstatsSegmentMappingEvent([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		std::string_view EventId {};
		std::string_view SegmentId {};
		rivet::ddl::generated::xc6f5c0d7 SegmentType {};
		float SegmentTime {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<DevstatsSegmentMappingEvent>;
	};
} // namespace rivet::ddl::generated

// clang-format on
