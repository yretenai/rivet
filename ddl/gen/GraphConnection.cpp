// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/DDLVector2.hpp> 

#include <rivet/ddl/generated/GraphConnection.hpp>

namespace rivet::ddl::generated {
	GraphConnection::GraphConnection([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		Id = serialized->get_uint64(Id_type_id);
		Disabled = serialized->get_bool(Disabled_type_id);
		SourceId = serialized->get_uint64(SourceId_type_id);
		SourceCon = serialized->get_string(SourceCon_type_id);
		TargetId = serialized->get_uint64(TargetId_type_id);
		TargetCon = serialized->get_string(TargetCon_type_id);
		Pins = serialized->unwrap_into_many<rivet::ddl::generated::DDLVector2>(Pins_type_id); 
	}

	[[nodiscard]] auto
	GraphConnection::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	GraphConnection::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<GraphConnection> {
		if (incoming_type_id == GraphConnection::type_id) {
			return std::make_shared<GraphConnection>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated