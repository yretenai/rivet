// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/AnimDriverBaseDef.hpp>

namespace rivet::ddl::generated {
	AnimDriverBaseDef::AnimDriverBaseDef([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		Name = serialized->get_string(Name_type_id, {});
		DisplayName = serialized->get_string(DisplayName_type_id, "");
		x = serialized->get_float(x_type_id, 0.000000);
		y = serialized->get_float(y_type_id, 0.000000); 
	}

	[[nodiscard]] auto
	AnimDriverBaseDef::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	AnimDriverBaseDef::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<AnimDriverBaseDef> {
		if (incoming_type_id == AnimDriverBaseDef::type_id) {
			return std::make_shared<AnimDriverBaseDef>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
