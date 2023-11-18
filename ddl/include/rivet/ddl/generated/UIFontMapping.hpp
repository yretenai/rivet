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

#include <rivet/ddl/generated/enums/x572515d.hpp> 

namespace rivet::ddl::generated {
	struct RIVET_DDL_SHARED UIFontMapping : rivet::structures::rivet_ddl_base {
		constexpr static std::string_view type_name = "UIFontMapping";
		constexpr static rivet::rivet_type_id type_id = 0x83816584;

		constexpr static std::string_view Language_type_name = "Language";
		constexpr static rivet::rivet_type_id Language_type_id = 0x2edaccc5;
		constexpr static std::string_view Font_type_name = "Font";
		constexpr static rivet::rivet_type_id Font_type_id = 0xe004c862;
		constexpr static std::string_view FontsToReplace_type_name = "FontsToReplace";
		constexpr static rivet::rivet_type_id FontsToReplace_type_id = 0x34a083a1; 

		explicit UIFontMapping() = default;
		explicit UIFontMapping([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		rivet::ddl::generated::x572515d Language {};
		std::string_view Font {};
		std::vector<std::string_view> FontsToReplace {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<UIFontMapping>;
	};
} // namespace rivet::ddl::generated

// clang-format on
