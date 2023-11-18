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
	struct DDLVector3; 

	struct RIVET_DDL_SHARED RaycastStateChangedEvent : EventBase {
		constexpr static std::string_view type_name = "RaycastStateChangedEvent";
		constexpr static rivet::rivet_type_id type_id = 0x1d5d9a11;

		constexpr static std::string_view Blocked_type_name = "Blocked";
		constexpr static rivet::rivet_type_id Blocked_type_id = 0xdbbf88b8;
		constexpr static std::string_view HitPos_type_name = "HitPos";
		constexpr static rivet::rivet_type_id HitPos_type_id = 0x5cb7395a; 

		explicit RaycastStateChangedEvent() = default;
		explicit RaycastStateChangedEvent([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		bool Blocked {};
		std::shared_ptr<rivet::ddl::generated::DDLVector3> HitPos {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<RaycastStateChangedEvent>;
	};
} // namespace rivet::ddl::generated

// clang-format on
