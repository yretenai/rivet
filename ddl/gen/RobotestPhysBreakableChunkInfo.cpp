// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/RobotestPhysBreakableChunkInfo.hpp>

namespace rivet::ddl::generated {
	RobotestPhysBreakableChunkInfo::RobotestPhysBreakableChunkInfo([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		ModelName = serialized->get_string(ModelName_type_id);
		ActorName = serialized->get_string(ActorName_type_id);
		ActorAssetId = serialized->get_uint64(ActorAssetId_type_id);
		ModelAssetId = serialized->get_uint64(ModelAssetId_type_id);
		IsDebris = serialized->get_bool(IsDebris_type_id);
		Radius = serialized->get_float(Radius_type_id);
		SpawnStatus = serialized->get_enum<rivet::ddl::generated::x8f1591df>(SpawnStatus_type_id, rivet::ddl::generated::x8f1591df_values); 
	}

	[[nodiscard]] auto
	RobotestPhysBreakableChunkInfo::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	RobotestPhysBreakableChunkInfo::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<RobotestPhysBreakableChunkInfo> {
		if (incoming_type_id == RobotestPhysBreakableChunkInfo::type_id) {
			return std::make_shared<RobotestPhysBreakableChunkInfo>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
