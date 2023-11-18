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
	struct RIVET_DDL_SHARED ActivityHint : rivet::structures::rivet_ddl_base {
		constexpr static std::string_view type_name = "ActivityHint";
		constexpr static rivet::rivet_type_id type_id = 0x68281395;

		constexpr static std::string_view NameTag_type_name = "NameTag";
		constexpr static rivet::rivet_type_id NameTag_type_id = 0x2d78cbbd;
		constexpr static std::string_view DescTag_type_name = "DescTag";
		constexpr static rivet::rivet_type_id DescTag_type_id = 0xe822a0da;
		constexpr static std::string_view MediaFile_type_name = "MediaFile";
		constexpr static rivet::rivet_type_id MediaFile_type_id = 0xa86a6d25; 

		explicit ActivityHint() = default;
		explicit ActivityHint([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		std::string_view NameTag {};
		std::string_view DescTag {};
		std::string_view MediaFile {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<ActivityHint>;
	};
} // namespace rivet::ddl::generated

// clang-format on
