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
	struct PythonDdlDocumentation; 

	struct RIVET_DDL_SHARED PythonSelectDocumentation : rivet::structures::rivet_ddl_base {
		constexpr static std::string_view type_name = "PythonSelectDocumentation";
		constexpr static rivet::rivet_type_id type_id = 0x95728f8f;

		constexpr static std::string_view Description_type_name = "Description";
		constexpr static rivet::rivet_type_id Description_type_id = 0xe03811fd;
		constexpr static std::string_view Label_type_name = "Label";
		constexpr static rivet::rivet_type_id Label_type_id = 0x17f49c29;
		constexpr static std::string_view Name_type_name = "Name";
		constexpr static rivet::rivet_type_id Name_type_id = 0x6eb3beb6;
		constexpr static std::string_view Type_type_name = "Type";
		constexpr static rivet::rivet_type_id Type_type_id = 0xbc4e9799;
		constexpr static std::string_view Items_type_name = "Items";
		constexpr static rivet::rivet_type_id Items_type_id = 0xf84d258c; 

		explicit PythonSelectDocumentation() = default;
		explicit PythonSelectDocumentation([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		std::string_view Description {};
		std::string_view Label {};
		std::string_view Name {};
		std::string_view Type {};
		std::vector<std::shared_ptr<rivet::ddl::generated::PythonDdlDocumentation>> Items {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<PythonSelectDocumentation>;
	};
} // namespace rivet::ddl::generated

// clang-format on
