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
	struct RIVET_DDL_SHARED DialogDurationEvent : EventBase {
		constexpr static std::string_view type_name = "DialogDurationEvent";
		constexpr static rivet::rivet_type_id type_id = 0xdcf30ba;

		constexpr static std::string_view PlayCountId_type_name = "PlayCountId";
		constexpr static rivet::rivet_type_id PlayCountId_type_id = 0x75b3e503;
		constexpr static std::string_view Duration_type_name = "Duration";
		constexpr static rivet::rivet_type_id Duration_type_id = 0x7c5e3db0; 

		explicit DialogDurationEvent() = default;
		explicit DialogDurationEvent([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		uint16_t PlayCountId {};
		uint16_t Duration {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<DialogDurationEvent>;
	};
} // namespace rivet::ddl::generated

// clang-format on
