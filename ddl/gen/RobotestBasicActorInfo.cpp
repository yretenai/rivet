// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/RobotestBasicActorInfo.hpp>

namespace rivet::ddl::generated {
	RobotestBasicActorInfo::RobotestBasicActorInfo([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		ActorTuid = serialized->get_uint64(ActorTuid_type_id);
		ActorName = serialized->get_string(ActorName_type_id);
		ModelName = serialized->get_string(ModelName_type_id); 
	}

	[[nodiscard]] auto
	RobotestBasicActorInfo::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	RobotestBasicActorInfo::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<RobotestBasicActorInfo> {
		if (incoming_type_id == RobotestBasicActorInfo::type_id) {
			return std::make_shared<RobotestBasicActorInfo>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
