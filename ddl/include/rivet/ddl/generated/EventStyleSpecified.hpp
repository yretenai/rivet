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

#include <rivet/ddl/generated/enums/xc67232c.hpp> 

namespace rivet::ddl::generated {
	struct EventBase; 

	struct RIVET_DDL_SHARED EventStyleSpecified : rivet::structures::rivet_ddl_base {
		constexpr static std::string_view type_name = "EventStyleSpecified";
		constexpr static rivet::rivet_type_id type_id = 0x17567b92;

		constexpr static std::string_view Event_type_name = "Event";
		constexpr static rivet::rivet_type_id Event_type_id = 0x22fdc666;
		constexpr static std::string_view HandlerStyle_type_name = "HandlerStyle";
		constexpr static rivet::rivet_type_id HandlerStyle_type_id = 0xe5805385; 

		explicit EventStyleSpecified() = default;
		explicit EventStyleSpecified([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		std::shared_ptr<rivet::ddl::generated::EventBase> Event {};
		rivet::ddl::generated::xc67232c HandlerStyle {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<EventStyleSpecified>;
	};
} // namespace rivet::ddl::generated

// clang-format on
