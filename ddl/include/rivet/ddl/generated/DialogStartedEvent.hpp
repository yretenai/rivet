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
	struct RIVET_DDL_SHARED DialogStartedEvent : EventBase {
		constexpr static std::string_view type_name = "DialogStartedEvent";
		constexpr static rivet::rivet_type_id type_id = 0xbb9ef567;

		constexpr static std::string_view PlayCountId_type_name = "PlayCountId";
		constexpr static rivet::rivet_type_id PlayCountId_type_id = 0x75b3e503;
		constexpr static std::string_view SoundEventName_type_name = "SoundEventName";
		constexpr static rivet::rivet_type_id SoundEventName_type_id = 0x9c64655a; 

		explicit DialogStartedEvent() = default;
		explicit DialogStartedEvent([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		uint16_t PlayCountId {};
		std::string_view SoundEventName {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<DialogStartedEvent>;
	};
} // namespace rivet::ddl::generated

// clang-format on
