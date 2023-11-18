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
	struct EventListElement; 

	struct RIVET_DDL_SHARED EventConverterElement : rivet::structures::rivet_ddl_base {
		constexpr static std::string_view type_name = "EventConverterElement";
		constexpr static rivet::rivet_type_id type_id = 0x8fc8eb86;

		constexpr static std::string_view InputEventName_type_name = "InputEventName";
		constexpr static rivet::rivet_type_id InputEventName_type_id = 0xc7adef5f;
		constexpr static std::string_view onDerivedEvent_type_name = "onDerivedEvent";
		constexpr static rivet::rivet_type_id onDerivedEvent_type_id = 0x6cd8ad82;
		constexpr static std::string_view Outputs_type_name = "Outputs";
		constexpr static rivet::rivet_type_id Outputs_type_id = 0xd9fcc64;
		constexpr static std::string_view PlayedOnce_type_name = "PlayedOnce";
		constexpr static rivet::rivet_type_id PlayedOnce_type_id = 0xd7aeb82c; 

		explicit EventConverterElement() = default;
		explicit EventConverterElement([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		std::string_view InputEventName {};
		bool onDerivedEvent {};
		std::vector<std::shared_ptr<rivet::ddl::generated::EventListElement>> Outputs {};
		bool PlayedOnce {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<EventConverterElement>;
	};
} // namespace rivet::ddl::generated

// clang-format on
