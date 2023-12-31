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
	struct RIVET_DDL_SHARED LoadedZoneDevstatsEvent : EventBase {
		constexpr static std::string_view type_name = "LoadedZoneDevstatsEvent";
		constexpr static rivet::rivet_type_id type_id = 0x44ff072c;

		constexpr static std::string_view ParentEventId_type_name = "ParentEventId";
		constexpr static rivet::rivet_type_id ParentEventId_type_id = 0x6dca4420;
		constexpr static std::string_view ZoneName_type_name = "ZoneName";
		constexpr static rivet::rivet_type_id ZoneName_type_id = 0x63344b7e; 

		explicit LoadedZoneDevstatsEvent() = default;
		explicit LoadedZoneDevstatsEvent([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		std::string_view ParentEventId {};
		std::string_view ZoneName {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<LoadedZoneDevstatsEvent>;
	};
} // namespace rivet::ddl::generated

// clang-format on
