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
	struct UDSBulkEntities; 

	struct RIVET_DDL_SHARED UDSBulkImportDef : rivet::structures::rivet_ddl_base {
		constexpr static std::string_view type_name = "UDSBulkImportDef";
		constexpr static rivet::rivet_type_id type_id = 0x810290db;

		constexpr static std::string_view schemaVersion_type_name = "schemaVersion";
		constexpr static rivet::rivet_type_id schemaVersion_type_id = 0x5af80aee;
		constexpr static std::string_view contextType_type_name = "contextType";
		constexpr static rivet::rivet_type_id contextType_type_id = 0xaa38892;
		constexpr static std::string_view contextId_type_name = "contextId";
		constexpr static rivet::rivet_type_id contextId_type_id = 0x6df9fd7;
		constexpr static std::string_view entities_type_name = "entities";
		constexpr static rivet::rivet_type_id entities_type_id = 0x539bbbc3; 

		explicit UDSBulkImportDef() = default;
		explicit UDSBulkImportDef([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		std::string_view schemaVersion {};
		std::string_view contextType {};
		std::string_view contextId {};
		std::shared_ptr<rivet::ddl::generated::UDSBulkEntities> entities {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<UDSBulkImportDef>;
	};
} // namespace rivet::ddl::generated

// clang-format on
