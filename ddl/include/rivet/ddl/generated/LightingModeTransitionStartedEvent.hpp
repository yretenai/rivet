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

#include <rivet/ddl/generated/enums/LightingMode.hpp>
#include <rivet/ddl/generated/EventBase.hpp> 

namespace rivet::ddl::generated {
	struct RIVET_DDL_SHARED LightingModeTransitionStartedEvent : EventBase {
		constexpr static std::string_view type_name = "LightingModeTransitionStartedEvent";
		constexpr static rivet::rivet_type_id type_id = 0x4d116e75;

		constexpr static std::string_view CurrMode_type_name = "CurrMode";
		constexpr static rivet::rivet_type_id CurrMode_type_id = 0xac531221;
		constexpr static std::string_view NewMode_type_name = "NewMode";
		constexpr static rivet::rivet_type_id NewMode_type_id = 0x42781e41;
		constexpr static std::string_view IsSaved_type_name = "IsSaved";
		constexpr static rivet::rivet_type_id IsSaved_type_id = 0xf11ec123; 

		explicit LightingModeTransitionStartedEvent() = default;
		explicit LightingModeTransitionStartedEvent([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		rivet::ddl::generated::LightingMode CurrMode {};
		rivet::ddl::generated::LightingMode NewMode {};
		bool IsSaved {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<LightingModeTransitionStartedEvent>;
	};
} // namespace rivet::ddl::generated

// clang-format on