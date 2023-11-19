// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/AnimDriverOpConnection.hpp> 

#include <rivet/ddl/generated/AnimDriverOpBaseDef.hpp>

namespace rivet::ddl::generated {
	AnimDriverOpBaseDef::AnimDriverOpBaseDef([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		Name = serialized->get_string(Name_type_id);
		DisplayName = serialized->get_string(DisplayName_type_id);
		x = serialized->get_float(x_type_id);
		y = serialized->get_float(y_type_id);
		OpType = serialized->get_enum<rivet::ddl::generated::x9f234d85>(OpType_type_id, rivet::ddl::generated::x9f234d85_values);
		Value = serialized->get_float(Value_type_id);
		Connections = serialized->unwrap_into_many<rivet::ddl::generated::AnimDriverOpConnection>(Connections_type_id); 
	}

	[[nodiscard]] auto
	AnimDriverOpBaseDef::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	AnimDriverOpBaseDef::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<AnimDriverOpBaseDef> {
		if (incoming_type_id == AnimDriverOpBaseDef::type_id) {
			return std::make_shared<AnimDriverOpBaseDef>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated