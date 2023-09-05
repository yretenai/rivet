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
	struct RIVET_DDL_SHARED ActivityHintWithId : rivet::structures::rivet_ddl_base {
		constexpr const static std::string_view type_name = "ActivityHintWithId";
		constexpr const static rivet::rivet_type_id type_id = 0x5fda6c6;

		constexpr const static std::string_view NameTag_type_name = "NameTag";
		constexpr const static rivet::rivet_type_id NameTag_type_id = 0x2d78cbbd;
		constexpr const static std::string_view DescTag_type_name = "DescTag";
		constexpr const static rivet::rivet_type_id DescTag_type_id = 0xe822a0da;
		constexpr const static std::string_view MediaFile_type_name = "MediaFile";
		constexpr const static rivet::rivet_type_id MediaFile_type_id = 0xa86a6d25;
		constexpr const static std::string_view HintId_type_name = "HintId";
		constexpr const static rivet::rivet_type_id HintId_type_id = 0x1c5a667e; 

		explicit ActivityHintWithId() = default;
		explicit ActivityHintWithId([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		std::string_view NameTag {};
		std::string_view DescTag {};
		std::string_view MediaFile {};
		std::string_view HintId {}; 

		auto
		get_type_id() const noexcept -> rivet::rivet_type_id override;

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<ActivityHintWithId>;
	};
} // namespace rivet::ddl::generated

// clang-format on
