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

	struct RIVET_DDL_SHARED AnimSetCommentDef : rivet::structures::rivet_ddl_base {
		constexpr static std::string_view type_name = "AnimSetCommentDef";
		constexpr static rivet::rivet_type_id type_id = 0x2e1f8b36;

		constexpr static std::string_view Text_type_name = "Text";
		constexpr static rivet::rivet_type_id Text_type_id = 0xb1b6777;
		constexpr static std::string_view Color_type_name = "Color";
		constexpr static rivet::rivet_type_id Color_type_id = 0x7f058428;
		constexpr static std::string_view Alpha_type_name = "Alpha";
		constexpr static rivet::rivet_type_id Alpha_type_id = 0xc9b3f5ab;
		constexpr static std::string_view Height_type_name = "Height";
		constexpr static rivet::rivet_type_id Height_type_id = 0xcb35ab68;
		constexpr static std::string_view Width_type_name = "Width";
		constexpr static rivet::rivet_type_id Width_type_id = 0x954989ee;
		constexpr static std::string_view X_type_name = "X";
		constexpr static rivet::rivet_type_id X_type_id = 0x5e33418d;
		constexpr static std::string_view Y_type_name = "Y";
		constexpr static rivet::rivet_type_id Y_type_id = 0x2934711b; 

		explicit AnimSetCommentDef() = default;
		explicit AnimSetCommentDef([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		std::string_view Text {};
		std::shared_ptr<rivet::ddl::generated::DDLVector3> Color {};
		float Alpha {};
		float Height {};
		float Width {};
		float X {};
		float Y {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<AnimSetCommentDef>;
	};
} // namespace rivet::ddl::generated

// clang-format on
