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

	struct RIVET_DDL_SHARED RegionFolderNode : rivet::structures::rivet_ddl_base {
		constexpr static std::string_view type_name = "RegionFolderNode";
		constexpr static rivet::rivet_type_id type_id = 0x8b3f372e;

		constexpr static std::string_view Id_type_name = "Id";
		constexpr static rivet::rivet_type_id Id_type_id = 0x8a514a8d;
		constexpr static std::string_view ParentId_type_name = "ParentId";
		constexpr static rivet::rivet_type_id ParentId_type_id = 0xeaeff19e;
		constexpr static std::string_view Name_type_name = "Name";
		constexpr static rivet::rivet_type_id Name_type_id = 0x6eb3beb6;
		constexpr static std::string_view Color_type_name = "Color";
		constexpr static rivet::rivet_type_id Color_type_id = 0x7f058428;
		constexpr static std::string_view ChildIds_type_name = "ChildIds";
		constexpr static rivet::rivet_type_id ChildIds_type_id = 0x9b55b23; 

		explicit RegionFolderNode() = default;
		explicit RegionFolderNode([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		uint64_t Id {};
		uint64_t ParentId {};
		std::string_view Name {};
		std::shared_ptr<rivet::ddl::generated::DDLVector3> Color {};
		std::vector<uint64_t> ChildIds {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<RegionFolderNode>;
	};
} // namespace rivet::ddl::generated

// clang-format on
