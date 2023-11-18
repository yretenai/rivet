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
	struct RIVET_DDL_SHARED TagsTest : rivet::structures::rivet_ddl_base {
		constexpr static std::string_view type_name = "TagsTest";
		constexpr static rivet::rivet_type_id type_id = 0x687211f1;

		constexpr static std::string_view Single_type_name = "Single";
		constexpr static rivet::rivet_type_id Single_type_id = 0xf4df697e;
		constexpr static std::string_view Multi_type_name = "Multi";
		constexpr static rivet::rivet_type_id Multi_type_id = 0xdcc28fc4;
		constexpr static std::string_view SelectPlusA_type_name = "SelectPlusA";
		constexpr static rivet::rivet_type_id SelectPlusA_type_id = 0xa0f4a8c9;
		constexpr static std::string_view SelectPlusB_type_name = "SelectPlusB";
		constexpr static rivet::rivet_type_id SelectPlusB_type_id = 0x39fdf973;
		constexpr static std::string_view PropertyDisplayNone_type_name = "PropertyDisplayNone";
		constexpr static rivet::rivet_type_id PropertyDisplayNone_type_id = 0x8197bd9a;
		constexpr static std::string_view PropertyDisplayAssetOnly_type_name = "PropertyDisplayAssetOnly";
		constexpr static rivet::rivet_type_id PropertyDisplayAssetOnly_type_id = 0x3133bd4f;
		constexpr static std::string_view PropertyDisplayInstanceOnly_type_name = "PropertyDisplayInstanceOnly";
		constexpr static rivet::rivet_type_id PropertyDisplayInstanceOnly_type_id = 0xd62f0283; 

		explicit TagsTest() = default;
		explicit TagsTest([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		int32_t Single {};
		int32_t Multi {};
		int32_t SelectPlusA {};
		int32_t SelectPlusB {};
		int32_t PropertyDisplayNone {};
		int32_t PropertyDisplayAssetOnly {};
		int32_t PropertyDisplayInstanceOnly {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<TagsTest>;
	};
} // namespace rivet::ddl::generated

// clang-format on
