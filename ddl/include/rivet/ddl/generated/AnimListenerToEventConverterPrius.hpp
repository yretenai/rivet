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

#include <rivet/ddl/generated/bitsets/x481aa65a.hpp> 

namespace rivet::ddl::generated {
	struct RIVET_DDL_SHARED AnimListenerToEventConverterPrius : rivet::structures::rivet_ddl_base {
		constexpr static std::string_view type_name = "AnimListenerToEventConverterPrius";
		constexpr static rivet::rivet_type_id type_id = 0x3f06f094;

		constexpr static std::string_view EnabledEvents_type_name = "EnabledEvents";
		constexpr static rivet::rivet_type_id EnabledEvents_type_id = 0x1eb6a8bf; 

		explicit AnimListenerToEventConverterPrius() = default;
		explicit AnimListenerToEventConverterPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		rivet::ddl::generated::x481aa65a EnabledEvents {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<AnimListenerToEventConverterPrius>;
	};
} // namespace rivet::ddl::generated

// clang-format on
