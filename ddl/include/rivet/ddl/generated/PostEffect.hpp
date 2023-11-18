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

#include <rivet/ddl/generated/enums/xfa78766f.hpp> 

namespace rivet::ddl::generated {
	struct RIVET_DDL_SHARED PostEffect : rivet::structures::rivet_ddl_base {
		constexpr static std::string_view type_name = "PostEffect";
		constexpr static rivet::rivet_type_id type_id = 0x77d9aa8e;

		constexpr static std::string_view SortOffset_type_name = "SortOffset";
		constexpr static rivet::rivet_type_id SortOffset_type_id = 0xbf2e4a31;
		constexpr static std::string_view Style_type_name = "Style";
		constexpr static rivet::rivet_type_id Style_type_id = 0x2aee74ab;
		constexpr static std::string_view Accessibility_type_name = "Accessibility";
		constexpr static rivet::rivet_type_id Accessibility_type_id = 0x32e1307f;
		constexpr static std::string_view LinkToFov_type_name = "LinkToFov";
		constexpr static rivet::rivet_type_id LinkToFov_type_id = 0x297f56ee;
		constexpr static std::string_view Fade_type_name = "Fade";
		constexpr static rivet::rivet_type_id Fade_type_id = 0x7ac52d10; 

		explicit PostEffect() = default;
		explicit PostEffect([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		int8_t SortOffset {};
		rivet::ddl::generated::xfa78766f Style {};
		bool Accessibility {};
		bool LinkToFov {};
		bool Fade {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<PostEffect>;
	};
} // namespace rivet::ddl::generated

// clang-format on
