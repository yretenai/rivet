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
	struct EventBase; 

	struct RIVET_DDL_SHARED AnimPropForwardEvent : EventBase {
		constexpr static std::string_view type_name = "AnimPropForwardEvent";
		constexpr static rivet::rivet_type_id type_id = 0x57e23f78;

		constexpr static std::string_view PropName_type_name = "PropName";
		constexpr static rivet::rivet_type_id PropName_type_id = 0x97a161ef;
		constexpr static std::string_view ForwardEvent_type_name = "ForwardEvent";
		constexpr static rivet::rivet_type_id ForwardEvent_type_id = 0x12f85095; 

		explicit AnimPropForwardEvent() = default;
		explicit AnimPropForwardEvent([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		std::string_view PropName {};
		std::shared_ptr<rivet::ddl::generated::EventBase> ForwardEvent {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<AnimPropForwardEvent>;
	};
} // namespace rivet::ddl::generated

// clang-format on
