// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/RobotestCineActorDriverInfo.hpp>
#include <rivet/ddl/generated/DDLTransform.hpp> 

#include <rivet/ddl/generated/RobotestCineFrameActorInfo.hpp>

namespace rivet::ddl::generated {
	RobotestCineFrameActorInfo::RobotestCineFrameActorInfo([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		Tuid = serialized->get_uint64(Tuid_type_id);
		ActorName = serialized->get_string(ActorName_type_id);
		ActorStatus = serialized->get_string(ActorStatus_type_id);
		Transform = serialized->unwrap_into<rivet::ddl::generated::DDLTransform>(Transform_type_id);
		Drivers = serialized->unwrap_into_many<rivet::ddl::generated::RobotestCineActorDriverInfo>(Drivers_type_id); 
	}

	[[nodiscard]] auto
	RobotestCineFrameActorInfo::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	RobotestCineFrameActorInfo::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<RobotestCineFrameActorInfo> {
		if (incoming_type_id == RobotestCineFrameActorInfo::type_id) {
			return std::make_shared<RobotestCineFrameActorInfo>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
