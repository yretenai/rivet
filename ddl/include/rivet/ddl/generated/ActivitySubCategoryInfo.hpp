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

#include <rivet/ddl/generated/enums/xbd8d5c4d.hpp> 

namespace rivet::ddl::generated {
	struct RIVET_DDL_SHARED ActivitySubCategoryInfo : rivet::structures::rivet_ddl_base {
		constexpr static std::string_view type_name = "ActivitySubCategoryInfo";
		constexpr static rivet::rivet_type_id type_id = 0x552f5c96;

		constexpr static std::string_view SubCategory_type_name = "SubCategory";
		constexpr static rivet::rivet_type_id SubCategory_type_id = 0x797697c5;
		constexpr static std::string_view NameTag_type_name = "NameTag";
		constexpr static rivet::rivet_type_id NameTag_type_id = 0x2d78cbbd; 

		explicit ActivitySubCategoryInfo() = default;
		explicit ActivitySubCategoryInfo([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		rivet::ddl::generated::xbd8d5c4d SubCategory {};
		std::string_view NameTag {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<ActivitySubCategoryInfo>;
	};
} // namespace rivet::ddl::generated

// clang-format on
