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
	struct RIVET_DDL_SHARED GamePausedEvent : EventBase {
		constexpr static std::string_view type_name = "GamePausedEvent";
		constexpr static rivet::rivet_type_id type_id = 0x4d2d08c7;

		constexpr static std::string_view UserIndex_type_name = "UserIndex";
		constexpr static rivet::rivet_type_id UserIndex_type_id = 0xe4ebebdb;
		constexpr static std::string_view Time_type_name = "Time";
		constexpr static rivet::rivet_type_id Time_type_id = 0x5f0458f5; 

		explicit GamePausedEvent() = default;
		explicit GamePausedEvent([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		int32_t UserIndex {};
		float Time {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<GamePausedEvent>;
	};
} // namespace rivet::ddl::generated

// clang-format on