// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/AnimMaterialComponentMorphOverrideDef.hpp>

namespace rivet::ddl::generated {
	AnimMaterialComponentMorphOverrideDef::AnimMaterialComponentMorphOverrideDef([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		TargetName = serialized->get_string(TargetName_type_id, {});
		TargetWeight = serialized->get_float(TargetWeight_type_id, 0.000000); 
	}

	[[nodiscard]] auto
	AnimMaterialComponentMorphOverrideDef::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	AnimMaterialComponentMorphOverrideDef::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<AnimMaterialComponentMorphOverrideDef> {
		if (incoming_type_id == AnimMaterialComponentMorphOverrideDef::type_id) {
			return std::make_shared<AnimMaterialComponentMorphOverrideDef>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
