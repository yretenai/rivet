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

namespace rivet::ddl::generated {
	struct DDLVector3; 

	struct RIVET_DDL_SHARED AccessibilityColorData : rivet::structures::rivet_ddl_base {
		constexpr const static std::string_view type_name = "AccessibilityColorData";
		constexpr const static rivet::rivet_type_id type_id = 0xb2457259;

		constexpr const static std::string_view ColorName_type_name = "ColorName";
		constexpr const static rivet::rivet_type_id ColorName_type_id = 0xe122a241;
		constexpr const static std::string_view ColorValue_type_name = "ColorValue";
		constexpr const static rivet::rivet_type_id ColorValue_type_id = 0x27726256; 

		explicit AccessibilityColorData() = default;
		explicit AccessibilityColorData([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		std::string_view ColorName {};
		std::shared_ptr<rivet::ddl::generated::DDLVector3> ColorValue {}; 

		auto
		get_type_id() const noexcept -> rivet::rivet_type_id override;

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<AccessibilityColorData>;
	};
} // namespace rivet::ddl::generated

// clang-format on
