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

#include <rivet/ddl/generated/enums/x59a8f068.hpp>
#include <rivet/ddl/generated/enums/x94fdc626.hpp>
#include <rivet/ddl/generated/enums/x94d69111.hpp>
#include <rivet/ddl/generated/GroundEvent.hpp> 

namespace rivet::ddl::generated {
	struct RIVET_DDL_SHARED FootstepEvent : GroundEvent {
		constexpr static std::string_view type_name = "FootstepEvent";
		constexpr static rivet::rivet_type_id type_id = 0xf786c9b6;

		constexpr static std::string_view Foot_type_name = "Foot";
		constexpr static rivet::rivet_type_id Foot_type_id = 0xf91ff923;
		constexpr static std::string_view FootIndex_type_name = "FootIndex";
		constexpr static rivet::rivet_type_id FootIndex_type_id = 0x289b0d58;
		constexpr static std::string_view Strength_type_name = "Strength";
		constexpr static rivet::rivet_type_id Strength_type_id = 0x2cb85ca8;
		constexpr static std::string_view Speed_type_name = "Speed";
		constexpr static rivet::rivet_type_id Speed_type_id = 0x16753237; 

		explicit FootstepEvent() = default;
		explicit FootstepEvent([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		rivet::ddl::generated::x94d69111 Foot {};
		int32_t FootIndex {};
		rivet::ddl::generated::x94fdc626 Strength {};
		rivet::ddl::generated::x59a8f068 Speed {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<FootstepEvent>;
	};
} // namespace rivet::ddl::generated

// clang-format on
