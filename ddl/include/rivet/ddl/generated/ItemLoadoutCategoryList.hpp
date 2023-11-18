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

#include <rivet/ddl/generated/enums/xc457a124.hpp> 

namespace rivet::ddl::generated {
	struct RIVET_DDL_SHARED ItemLoadoutCategoryList : rivet::structures::rivet_ddl_base {
		constexpr static std::string_view type_name = "ItemLoadoutCategoryList";
		constexpr static rivet::rivet_type_id type_id = 0x5ba74a3e;

		constexpr static std::string_view Category_type_name = "Category";
		constexpr static rivet::rivet_type_id Category_type_id = 0xfc4da4b1;
		constexpr static std::string_view ItemLoadoutConfigs_type_name = "ItemLoadoutConfigs";
		constexpr static rivet::rivet_type_id ItemLoadoutConfigs_type_id = 0x81444aa9; 

		explicit ItemLoadoutCategoryList() = default;
		explicit ItemLoadoutCategoryList([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		rivet::ddl::generated::xc457a124 Category {};
		std::vector<std::string_view> ItemLoadoutConfigs {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<ItemLoadoutCategoryList>;
	};
} // namespace rivet::ddl::generated

// clang-format on
