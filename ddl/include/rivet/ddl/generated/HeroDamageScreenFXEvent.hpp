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
	struct RIVET_DDL_SHARED HeroDamageScreenFXEvent : EventBase {
		constexpr static std::string_view type_name = "HeroDamageScreenFXEvent";
		constexpr static rivet::rivet_type_id type_id = 0x71861b4;

		constexpr static std::string_view ScreenAngle_type_name = "ScreenAngle";
		constexpr static rivet::rivet_type_id ScreenAngle_type_id = 0x1107be42;
		constexpr static std::string_view ScreenSegment_type_name = "ScreenSegment";
		constexpr static rivet::rivet_type_id ScreenSegment_type_id = 0x60ba4b46; 

		explicit HeroDamageScreenFXEvent() = default;
		explicit HeroDamageScreenFXEvent([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		float ScreenAngle {};
		int32_t ScreenSegment {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<HeroDamageScreenFXEvent>;
	};
} // namespace rivet::ddl::generated

// clang-format on
