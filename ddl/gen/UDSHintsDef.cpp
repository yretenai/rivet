// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/UDSHintEntities.hpp> 

#include <rivet/ddl/generated/UDSHintsDef.hpp>

namespace rivet::ddl::generated {
	UDSHintsDef::UDSHintsDef([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		schemaVersion = serialized->get_string(schemaVersion_type_id);
		contextType = serialized->get_enum<rivet::ddl::generated::xe07d4302>(contextType_type_id, rivet::ddl::generated::xe07d4302_values);
		contextId = serialized->get_string(contextId_type_id);
		entities = serialized->unwrap_into<rivet::ddl::generated::UDSHintEntities>(entities_type_id); 
	}

	[[nodiscard]] auto
	UDSHintsDef::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	UDSHintsDef::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<UDSHintsDef> {
		if (incoming_type_id == UDSHintsDef::type_id) {
			return std::make_shared<UDSHintsDef>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated