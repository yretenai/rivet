// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/UDSBulkEntities.hpp> 

#include <rivet/ddl/generated/UDSBulkImportDef.hpp>

namespace rivet::ddl::generated {
	UDSBulkImportDef::UDSBulkImportDef([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		schemaVersion = serialized->get_string(schemaVersion_type_id);
		contextType = serialized->get_string(contextType_type_id);
		contextId = serialized->get_string(contextId_type_id);
		entities = serialized->unwrap_into<rivet::ddl::generated::UDSBulkEntities>(entities_type_id); 
	}

	[[nodiscard]] auto
	UDSBulkImportDef::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	UDSBulkImportDef::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<UDSBulkImportDef> {
		if (incoming_type_id == UDSBulkImportDef::type_id) {
			return std::make_shared<UDSBulkImportDef>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
