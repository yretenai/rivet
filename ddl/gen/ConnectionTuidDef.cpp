// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/ConnectionPinDef.hpp> 

#include <rivet/ddl/generated/ConnectionTuidDef.hpp>

namespace rivet::ddl::generated {
	ConnectionTuidDef::ConnectionTuidDef([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): NodeGraphItemDef(serialized) {
		Pins = serialized->unwrap_into_many<rivet::ddl::generated::ConnectionPinDef>(Pins_type_id); 
	}

	[[nodiscard]] auto
	ConnectionTuidDef::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	ConnectionTuidDef::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<ConnectionTuidDef> {
		if (incoming_type_id == ConnectionTuidDef::type_id) {
			return std::make_shared<ConnectionTuidDef>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
