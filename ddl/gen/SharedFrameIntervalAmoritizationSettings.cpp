// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/SharedFrameIntervalAmoritizationSettings.hpp>

namespace rivet::ddl::generated {
	SharedFrameIntervalAmoritizationSettings::SharedFrameIntervalAmoritizationSettings([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		PerchHunterUpdateInterval = serialized->get_uint32(PerchHunterUpdateInterval_type_id);
		AwarenessBaseUpdateInterval = serialized->get_uint32(AwarenessBaseUpdateInterval_type_id);
		OmniAwarenessUpdateInterval = serialized->get_uint32(OmniAwarenessUpdateInterval_type_id);
		FlightAreaFirepointHunterUpdateInterval = serialized->get_uint32(FlightAreaFirepointHunterUpdateInterval_type_id);
		MultiHeuristicTargetingUpdateInterval = serialized->get_uint32(MultiHeuristicTargetingUpdateInterval_type_id);
		TargetingBaseUpdateInterval = serialized->get_uint32(TargetingBaseUpdateInterval_type_id);
		TieredAggroTargetingUpdateInterval = serialized->get_uint32(TieredAggroTargetingUpdateInterval_type_id);
		BreakableBusterUpdateInterval = serialized->get_uint32(BreakableBusterUpdateInterval_type_id);
		LosBlockerHunterUpdateInterval = serialized->get_uint32(LosBlockerHunterUpdateInterval_type_id);
		NavMeshObstructionUpdateInterval = serialized->get_uint32(NavMeshObstructionUpdateInterval_type_id);
		TriggerByDistanceUpdateInterval = serialized->get_uint32(TriggerByDistanceUpdateInterval_type_id);
		FirepointHunterUpdateInterval = serialized->get_uint32(FirepointHunterUpdateInterval_type_id); 
	}

	[[nodiscard]] auto
	SharedFrameIntervalAmoritizationSettings::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	SharedFrameIntervalAmoritizationSettings::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<SharedFrameIntervalAmoritizationSettings> {
		if (incoming_type_id == SharedFrameIntervalAmoritizationSettings::type_id) {
			return std::make_shared<SharedFrameIntervalAmoritizationSettings>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated