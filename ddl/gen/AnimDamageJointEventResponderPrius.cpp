// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/AnimDamageJointEventResponderElement.hpp> 

#include <rivet/ddl/generated/AnimDamageJointEventResponderPrius.hpp>

namespace rivet::ddl::generated {
	AnimDamageJointEventResponderPrius::AnimDamageJointEventResponderPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		DamageMaps = serialized->unwrap_into_many<rivet::ddl::generated::AnimDamageJointEventResponderElement>(DamageMaps_type_id);
		EventLayer = serialized->get_uint32(EventLayer_type_id);
		IgnoreSelfDamage = serialized->get_bool(IgnoreSelfDamage_type_id); 
	}

	[[nodiscard]] auto
	AnimDamageJointEventResponderPrius::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	AnimDamageJointEventResponderPrius::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<AnimDamageJointEventResponderPrius> {
		if (incoming_type_id == AnimDamageJointEventResponderPrius::type_id) {
			return std::make_shared<AnimDamageJointEventResponderPrius>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
