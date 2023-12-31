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
	struct RIVET_DDL_SHARED VisualFxKillEvent : EventBase {
		constexpr static std::string_view type_name = "VisualFxKillEvent";
		constexpr static rivet::rivet_type_id type_id = 0x67cf6a72;

		constexpr static std::string_view TrackedEventName_type_name = "TrackedEventName";
		constexpr static rivet::rivet_type_id TrackedEventName_type_id = 0xccd73193;
		constexpr static std::string_view KillImmediate_type_name = "KillImmediate";
		constexpr static rivet::rivet_type_id KillImmediate_type_id = 0x635c25be; 

		explicit VisualFxKillEvent() = default;
		explicit VisualFxKillEvent([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		std::string_view TrackedEventName {};
		bool KillImmediate {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<VisualFxKillEvent>;
	};
} // namespace rivet::ddl::generated

// clang-format on
