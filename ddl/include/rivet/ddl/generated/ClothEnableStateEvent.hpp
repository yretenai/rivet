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
	struct RIVET_DDL_SHARED ClothEnableStateEvent : EventBase {
		constexpr static std::string_view type_name = "ClothEnableStateEvent";
		constexpr static rivet::rivet_type_id type_id = 0x54b4cf1c;

		constexpr static std::string_view StateName_type_name = "StateName";
		constexpr static rivet::rivet_type_id StateName_type_id = 0xb6351547;
		constexpr static std::string_view EnableBlending_type_name = "EnableBlending";
		constexpr static rivet::rivet_type_id EnableBlending_type_id = 0x9b9706af; 

		explicit ClothEnableStateEvent() = default;
		explicit ClothEnableStateEvent([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		std::string_view StateName {};
		bool EnableBlending {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<ClothEnableStateEvent>;
	};
} // namespace rivet::ddl::generated

// clang-format on
