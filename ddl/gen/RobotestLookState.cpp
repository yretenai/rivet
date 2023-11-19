// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/RobotestLookLOD.hpp>
#include <rivet/ddl/generated/RobotestLookId.hpp> 

#include <rivet/ddl/generated/RobotestLookState.hpp>

namespace rivet::ddl::generated {
	RobotestLookState::RobotestLookState([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		LookIds = serialized->unwrap_into_many<rivet::ddl::generated::RobotestLookId>(LookIds_type_id);
		EnabledLooks = serialized->get_uint16s(EnabledLooks_type_id);
		DisabledLooks = serialized->get_uint16s(DisabledLooks_type_id);
		LookGroups = serialized->unwrap_into_many<rivet::ddl::generated::RobotestLookId>(LookGroups_type_id);
		EnabledLookGroups = serialized->get_uint16s(EnabledLookGroups_type_id);
		LODs = serialized->unwrap_into_many<rivet::ddl::generated::RobotestLookLOD>(LODs_type_id);
		ActiveJointBspheresRemap = serialized->get_uint16s(ActiveJointBspheresRemap_type_id);
		ActiveRigidBodyRemap = serialized->get_uint16s(ActiveRigidBodyRemap_type_id);
		ActiveClothRemap = serialized->get_uint16s(ActiveClothRemap_type_id);
		ActiveClothJointsRemap = serialized->get_uint16s(ActiveClothJointsRemap_type_id); 
	}

	[[nodiscard]] auto
	RobotestLookState::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	RobotestLookState::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<RobotestLookState> {
		if (incoming_type_id == RobotestLookState::type_id) {
			return std::make_shared<RobotestLookState>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated