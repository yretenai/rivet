// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/AnimDriverConnectionDef.hpp> 

#include <rivet/ddl/generated/AnimDriverSelectNodeDef.hpp>

namespace rivet::ddl::generated {
	AnimDriverSelectNodeDef::AnimDriverSelectNodeDef([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		Name = serialized->get_string(Name_type_id);
		DisplayName = serialized->get_string(DisplayName_type_id);
		x = serialized->get_float(x_type_id);
		y = serialized->get_float(y_type_id);
		Rate = serialized->get_float(Rate_type_id);
		CurrentNodeIndex = serialized->get_uint32(CurrentNodeIndex_type_id);
		Connections = serialized->unwrap_into_many<rivet::ddl::generated::AnimDriverConnectionDef>(Connections_type_id); 
	}

	[[nodiscard]] auto
	AnimDriverSelectNodeDef::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	AnimDriverSelectNodeDef::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<AnimDriverSelectNodeDef> {
		if (incoming_type_id == AnimDriverSelectNodeDef::type_id) {
			return std::make_shared<AnimDriverSelectNodeDef>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
