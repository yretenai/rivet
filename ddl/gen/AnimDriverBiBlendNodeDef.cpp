// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/AnimDriverConnectionDef.hpp> 

#include <rivet/ddl/generated/AnimDriverBiBlendNodeDef.hpp>

namespace rivet::ddl::generated {
	AnimDriverBiBlendNodeDef::AnimDriverBiBlendNodeDef([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		Name = serialized->get_string(Name_type_id);
		DisplayName = serialized->get_string(DisplayName_type_id);
		x = serialized->get_float(x_type_id);
		y = serialized->get_float(y_type_id);
		Type = serialized->get_enum<rivet::ddl::generated::x7286b9e9>(Type_type_id, rivet::ddl::generated::x7286b9e9_values);
		DurationType = serialized->get_enum<rivet::ddl::generated::x60fa38f8>(DurationType_type_id, rivet::ddl::generated::x60fa38f8_values);
		EventsType = serialized->get_enum<rivet::ddl::generated::x7ecb91d5>(EventsType_type_id, rivet::ddl::generated::x7ecb91d5_values);
		CustomTracksType = serialized->get_enum<rivet::ddl::generated::x7ecb91d5>(CustomTracksType_type_id, rivet::ddl::generated::x7ecb91d5_values);
		MorphType = serialized->get_enum<rivet::ddl::generated::x7ecb91d5>(MorphType_type_id, rivet::ddl::generated::x7ecb91d5_values);
		Rate = serialized->get_float(Rate_type_id);
		Factor = serialized->get_float(Factor_type_id);
		ConnectionA = serialized->unwrap_into<rivet::ddl::generated::AnimDriverConnectionDef>(ConnectionA_type_id);
		ConnectionB = serialized->unwrap_into<rivet::ddl::generated::AnimDriverConnectionDef>(ConnectionB_type_id); 
	}

	[[nodiscard]] auto
	AnimDriverBiBlendNodeDef::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	AnimDriverBiBlendNodeDef::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<AnimDriverBiBlendNodeDef> {
		if (incoming_type_id == AnimDriverBiBlendNodeDef::type_id) {
			return std::make_shared<AnimDriverBiBlendNodeDef>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
