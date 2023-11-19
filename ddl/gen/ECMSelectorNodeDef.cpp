// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/ECMNodeConnection.hpp> 

#include <rivet/ddl/generated/ECMSelectorNodeDef.hpp>

namespace rivet::ddl::generated {
	ECMSelectorNodeDef::ECMSelectorNodeDef([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		NodeId = serialized->get_uint64(NodeId_type_id);
		XPos = serialized->get_int32(XPos_type_id);
		YPos = serialized->get_int32(YPos_type_id);
		Collapsed = serialized->get_bool(Collapsed_type_id);
		Type = serialized->get_enum<rivet::ddl::generated::xec77cf54>(Type_type_id, rivet::ddl::generated::xec77cf54_values);
		Connections = serialized->unwrap_into_many<rivet::ddl::generated::ECMNodeConnection>(Connections_type_id); 
	}

	[[nodiscard]] auto
	ECMSelectorNodeDef::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	ECMSelectorNodeDef::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<ECMSelectorNodeDef> {
		if (incoming_type_id == ECMSelectorNodeDef::type_id) {
			return std::make_shared<ECMSelectorNodeDef>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated