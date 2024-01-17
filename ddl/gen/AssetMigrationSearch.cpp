// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/AssetMigrationSearch.hpp>

namespace rivet::ddl::generated {
	AssetMigrationSearch::AssetMigrationSearch([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		FileCriteria = serialized->get_string(FileCriteria_type_id, {});
		CreatedBy = serialized->get_string(CreatedBy_type_id, {});
		Suffixes = serialized->get_strings(Suffixes_type_id);
		Branches = serialized->get_strings(Branches_type_id);
		UsePath = serialized->get_bool(UsePath_type_id, false);
		Limit = serialized->get_int32(Limit_type_id, 1000); 
	}

	[[nodiscard]] auto
	AssetMigrationSearch::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	AssetMigrationSearch::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<AssetMigrationSearch> {
		if (incoming_type_id == AssetMigrationSearch::type_id) {
			return std::make_shared<AssetMigrationSearch>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
