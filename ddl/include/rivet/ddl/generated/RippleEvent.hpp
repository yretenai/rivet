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
	struct RIVET_DDL_SHARED RippleEvent : EventBase {
		constexpr static std::string_view type_name = "RippleEvent";
		constexpr static rivet::rivet_type_id type_id = 0x19761c3c;

		constexpr static std::string_view Strength_type_name = "Strength";
		constexpr static rivet::rivet_type_id Strength_type_id = 0x2cb85ca8; 

		explicit RippleEvent() = default;
		explicit RippleEvent([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		float Strength {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<RippleEvent>;
	};
} // namespace rivet::ddl::generated

// clang-format on