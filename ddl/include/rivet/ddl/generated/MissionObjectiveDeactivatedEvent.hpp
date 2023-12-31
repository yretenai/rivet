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
	struct RIVET_DDL_SHARED MissionObjectiveDeactivatedEvent : EventBase {
		constexpr static std::string_view type_name = "MissionObjectiveDeactivatedEvent";
		constexpr static rivet::rivet_type_id type_id = 0x35d6494a;

		constexpr static std::string_view MissionName_type_name = "MissionName";
		constexpr static rivet::rivet_type_id MissionName_type_id = 0xa5c30e60;
		constexpr static std::string_view ObjectiveName_type_name = "ObjectiveName";
		constexpr static rivet::rivet_type_id ObjectiveName_type_id = 0x58746b9b; 

		explicit MissionObjectiveDeactivatedEvent() = default;
		explicit MissionObjectiveDeactivatedEvent([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		std::string_view MissionName {};
		std::string_view ObjectiveName {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<MissionObjectiveDeactivatedEvent>;
	};
} // namespace rivet::ddl::generated

// clang-format on
