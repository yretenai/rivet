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
	struct RIVET_DDL_SHARED Cinematic2BotGotoEvent : EventBase {
		constexpr static std::string_view type_name = "Cinematic2BotGotoEvent";
		constexpr static rivet::rivet_type_id type_id = 0x84de1f0b;

		constexpr static std::string_view ArrivalWorldTime_type_name = "ArrivalWorldTime";
		constexpr static rivet::rivet_type_id ArrivalWorldTime_type_id = 0x1eb84093;
		constexpr static std::string_view Spline_type_name = "Spline";
		constexpr static rivet::rivet_type_id Spline_type_id = 0xb8e1b8e; 

		explicit Cinematic2BotGotoEvent() = default;
		explicit Cinematic2BotGotoEvent([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		float ArrivalWorldTime {};
		uint64_t Spline {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<Cinematic2BotGotoEvent>;
	};
} // namespace rivet::ddl::generated

// clang-format on
