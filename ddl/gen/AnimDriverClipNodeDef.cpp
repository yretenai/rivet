// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/AnimDriverClipNodeDef.hpp>

namespace rivet::ddl::generated {
	AnimDriverClipNodeDef::AnimDriverClipNodeDef([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		Name = serialized->get_string(Name_type_id);
		DisplayName = serialized->get_string(DisplayName_type_id);
		x = serialized->get_float(x_type_id);
		y = serialized->get_float(y_type_id);
		Flags = serialized->get_bitset<rivet::ddl::generated::x6d701b9>(Flags_type_id, rivet::ddl::generated::x6d701b9_values);
		ClipName = serialized->get_string(ClipName_type_id);
		Time = serialized->get_float(Time_type_id);
		Rate = serialized->get_float(Rate_type_id); 
	}

	[[nodiscard]] auto
	AnimDriverClipNodeDef::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	AnimDriverClipNodeDef::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<AnimDriverClipNodeDef> {
		if (incoming_type_id == AnimDriverClipNodeDef::type_id) {
			return std::make_shared<AnimDriverClipNodeDef>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
