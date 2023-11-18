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

#include <rivet/ddl/generated/enums/MissionStates.hpp>
#include <rivet/ddl/generated/EventBase.hpp> 

namespace rivet::ddl::generated {
	struct RIVET_DDL_SHARED MissionStateChangedEvent : EventBase {
		constexpr static std::string_view type_name = "MissionStateChangedEvent";
		constexpr static rivet::rivet_type_id type_id = 0xf1b34e7;

		constexpr static std::string_view MissionName_type_name = "MissionName";
		constexpr static rivet::rivet_type_id MissionName_type_id = 0xa5c30e60;
		constexpr static std::string_view MissionState_type_name = "MissionState";
		constexpr static rivet::rivet_type_id MissionState_type_id = 0xd5bb196b;
		constexpr static std::string_view PreviousState_type_name = "PreviousState";
		constexpr static rivet::rivet_type_id PreviousState_type_id = 0xf6c107b4; 

		explicit MissionStateChangedEvent() = default;
		explicit MissionStateChangedEvent([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		std::string_view MissionName {};
		rivet::ddl::generated::MissionStates MissionState {};
		rivet::ddl::generated::MissionStates PreviousState {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<MissionStateChangedEvent>;
	};
} // namespace rivet::ddl::generated

// clang-format on
