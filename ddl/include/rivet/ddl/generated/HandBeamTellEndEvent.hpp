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
	struct RIVET_DDL_SHARED HandBeamTellEndEvent : EventBase {
		constexpr static std::string_view type_name = "HandBeamTellEndEvent";
		constexpr static rivet::rivet_type_id type_id = 0x22310e71;

		constexpr static std::string_view Is_Right_Hand_type_name = "Is_Right_Hand";
		constexpr static rivet::rivet_type_id Is_Right_Hand_type_id = 0xa24be18d; 

		explicit HandBeamTellEndEvent() = default;
		explicit HandBeamTellEndEvent([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		bool Is_Right_Hand {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<HandBeamTellEndEvent>;
	};
} // namespace rivet::ddl::generated

// clang-format on
