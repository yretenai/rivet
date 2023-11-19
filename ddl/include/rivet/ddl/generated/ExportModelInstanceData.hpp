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
	struct DDLTransform; 

	struct RIVET_DDL_SHARED ExportModelInstanceData : rivet::structures::rivet_ddl_base {
		constexpr static std::string_view type_name = "ExportModelInstanceData";
		constexpr static rivet::rivet_type_id type_id = 0xb355e71a;

		constexpr static std::string_view DaeFilename_type_name = "DaeFilename";
		constexpr static rivet::rivet_type_id DaeFilename_type_id = 0x8ed8fa72;
		constexpr static std::string_view WorldTransform_type_name = "WorldTransform";
		constexpr static rivet::rivet_type_id WorldTransform_type_id = 0x7c3b36b3; 

		explicit ExportModelInstanceData() = default;
		explicit ExportModelInstanceData([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		std::string_view DaeFilename {};
		std::shared_ptr<rivet::ddl::generated::DDLTransform> WorldTransform {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<ExportModelInstanceData>;
	};
} // namespace rivet::ddl::generated

// clang-format on