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

#include <rivet/ddl/generated/enums/x84bbe706.hpp>
#include <rivet/ddl/generated/UIAtlasBaseData.hpp> 

namespace rivet::ddl::generated {
	struct DDLVector3; 

	struct RIVET_DDL_SHARED DrawTextViewData : UIAtlasBaseData {
		constexpr static std::string_view type_name = "DrawTextViewData";
		constexpr static rivet::rivet_type_id type_id = 0xdc4ad097;

		constexpr static std::string_view Text_type_name = "Text";
		constexpr static rivet::rivet_type_id Text_type_id = 0xb1b6777;
		constexpr static std::string_view TextColor_type_name = "TextColor";
		constexpr static rivet::rivet_type_id TextColor_type_id = 0x7f31f6cf;
		constexpr static std::string_view BackgroundColor_type_name = "BackgroundColor";
		constexpr static rivet::rivet_type_id BackgroundColor_type_id = 0xcbda4a;
		constexpr static std::string_view SizeCSSClass_type_name = "SizeCSSClass";
		constexpr static rivet::rivet_type_id SizeCSSClass_type_id = 0xe2145917;
		constexpr static std::string_view Alignment_type_name = "Alignment";
		constexpr static rivet::rivet_type_id Alignment_type_id = 0xae338150;
		constexpr static std::string_view FontSize_type_name = "FontSize";
		constexpr static rivet::rivet_type_id FontSize_type_id = 0xbc438b44; 

		explicit DrawTextViewData() = default;
		explicit DrawTextViewData([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		std::string_view Text {};
		std::shared_ptr<rivet::ddl::generated::DDLVector3> TextColor {};
		std::shared_ptr<rivet::ddl::generated::DDLVector3> BackgroundColor {};
		std::string_view SizeCSSClass {};
		rivet::ddl::generated::x84bbe706 Alignment {};
		uint32_t FontSize {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<DrawTextViewData>;
	};
} // namespace rivet::ddl::generated

// clang-format on
