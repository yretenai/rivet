// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/PhysicsMotionPropertiesParam.hpp>

namespace rivet::ddl::generated {
	PhysicsMotionPropertiesParam::PhysicsMotionPropertiesParam([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		UseAggressiveRagdollSettling = serialized->get_bool(UseAggressiveRagdollSettling_type_id);
		GravityFactor = serialized->get_float(GravityFactor_type_id);
		MaxLinearSpeed = serialized->get_float(MaxLinearSpeed_type_id);
		MaxAngularSpeed = serialized->get_float(MaxAngularSpeed_type_id);
		LinearDamping = serialized->get_float(LinearDamping_type_id);
		AngularDamping = serialized->get_float(AngularDamping_type_id); 
	}

	auto
	PhysicsMotionPropertiesParam::get_type_id() const noexcept -> rivet::rivet_type_id {
		return type_id;
	}

	[[nodiscard]] auto
	PhysicsMotionPropertiesParam::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	PhysicsMotionPropertiesParam::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<PhysicsMotionPropertiesParam> {
		if (incoming_type_id == PhysicsMotionPropertiesParam::type_id) {
			return std::make_shared<PhysicsMotionPropertiesParam>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
