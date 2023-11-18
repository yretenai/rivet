// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/VaultMetaData.hpp>

namespace rivet::ddl::generated {
	VaultMetaData::VaultMetaData([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		Hash = serialized->get_uint32(Hash_type_id);
		CreatedBy = serialized->get_string(CreatedBy_type_id);
		LastModifiedBy = serialized->get_string(LastModifiedBy_type_id);
		Tags = serialized->get_string(Tags_type_id);
		ForceUpdate = serialized->get_bool(ForceUpdate_type_id);
		SourceDataFile = serialized->get_string(SourceDataFile_type_id); 
	}

	[[nodiscard]] auto
	VaultMetaData::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	VaultMetaData::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<VaultMetaData> {
		if (incoming_type_id == VaultMetaData::type_id) {
			return std::make_shared<VaultMetaData>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
