// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/DDLVector2.hpp> 

#include <rivet/ddl/generated/ConnectionPinDef.hpp>

namespace rivet::ddl::generated {
	ConnectionPinDef::ConnectionPinDef([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): NodeGraphItemDef(serialized) {
		Point = serialized->unwrap_into<rivet::ddl::generated::DDLVector2>(Point_type_id); 
	}

	[[nodiscard]] auto
	ConnectionPinDef::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	ConnectionPinDef::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<ConnectionPinDef> {
		if (incoming_type_id == ConnectionPinDef::type_id) {
			return std::make_shared<ConnectionPinDef>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
