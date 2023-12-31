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
	struct RIVET_DDL_SHARED UIOptionListOptionData : rivet::structures::rivet_ddl_base {
		constexpr static std::string_view type_name = "UIOptionListOptionData";
		constexpr static rivet::rivet_type_id type_id = 0x31b707d1;

		constexpr static std::string_view Label_type_name = "Label";
		constexpr static rivet::rivet_type_id Label_type_id = 0x17f49c29;
		constexpr static std::string_view Description_type_name = "Description";
		constexpr static rivet::rivet_type_id Description_type_id = 0xe03811fd;
		constexpr static std::string_view DescriptionAlt_type_name = "DescriptionAlt";
		constexpr static rivet::rivet_type_id DescriptionAlt_type_id = 0x29bf0d94;
		constexpr static std::string_view AccessibilityIcon_type_name = "AccessibilityIcon";
		constexpr static rivet::rivet_type_id AccessibilityIcon_type_id = 0x7c679f8e;
		constexpr static std::string_view PreviewImage_type_name = "PreviewImage";
		constexpr static rivet::rivet_type_id PreviewImage_type_id = 0x4cfbd8af;
		constexpr static std::string_view EnumValue_type_name = "EnumValue";
		constexpr static rivet::rivet_type_id EnumValue_type_id = 0xa7cf9ee5; 

		explicit UIOptionListOptionData() = default;
		explicit UIOptionListOptionData([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		std::string_view Label {};
		std::string_view Description {};
		std::string_view DescriptionAlt {};
		std::string_view AccessibilityIcon {};
		std::string_view PreviewImage {};
		std::string_view EnumValue {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<UIOptionListOptionData>;
	};
} // namespace rivet::ddl::generated

// clang-format on
