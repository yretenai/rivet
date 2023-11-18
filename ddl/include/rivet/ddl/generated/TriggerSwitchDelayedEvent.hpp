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
	struct RIVET_DDL_SHARED TriggerSwitchDelayedEvent : EventBase {
		constexpr static std::string_view type_name = "TriggerSwitchDelayedEvent";
		constexpr static rivet::rivet_type_id type_id = 0x2c8bbeae;

		constexpr static std::string_view SequenceNumber_type_name = "SequenceNumber";
		constexpr static rivet::rivet_type_id SequenceNumber_type_id = 0x32d0ae43;
		constexpr static std::string_view Index_type_name = "Index";
		constexpr static rivet::rivet_type_id Index_type_id = 0x9920abc0; 

		explicit TriggerSwitchDelayedEvent() = default;
		explicit TriggerSwitchDelayedEvent([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		int16_t SequenceNumber {};
		int16_t Index {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<TriggerSwitchDelayedEvent>;
	};
} // namespace rivet::ddl::generated

// clang-format on
