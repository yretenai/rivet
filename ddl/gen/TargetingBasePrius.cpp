// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/TieredAggroTargetingPrius.hpp>
#include <rivet/ddl/generated/DistanceTargetingPrius.hpp>
#include <rivet/ddl/generated/HeuristicTargetingPrius.hpp>
#include <rivet/ddl/generated/NullTargetingPrius.hpp>
#include <rivet/ddl/generated/ClosestTargetingPrius.hpp> 

#include <rivet/ddl/generated/TargetingBasePrius.hpp>

namespace rivet::ddl::generated {
	TargetingBasePrius::TargetingBasePrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		AutoReselectTargets = serialized->get_bool(AutoReselectTargets_type_id);
		TimeBetweenReselects = serialized->get_float(TimeBetweenReselects_type_id);
		AggroMax = serialized->get_float(AggroMax_type_id);
		StartWarningDistance = serialized->get_float(StartWarningDistance_type_id);
		StopWarningDistance = serialized->get_float(StopWarningDistance_type_id);
		WarningTime = serialized->get_float(WarningTime_type_id);
		AttackJobPool = serialized->get_enum<rivet::ddl::generated::xee596018>(AttackJobPool_type_id, rivet::ddl::generated::xee596018_values); 
	}

	[[nodiscard]] auto
	TargetingBasePrius::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	TargetingBasePrius::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<TargetingBasePrius> {
		if (incoming_type_id == TargetingBasePrius::type_id) {
			return std::make_shared<TargetingBasePrius>(serialized);
		}

		auto ClosestTargetingPrius_ptr = ClosestTargetingPrius::from_substruct(incoming_type_id, serialized);
		if (ClosestTargetingPrius_ptr != nullptr) {
			return ClosestTargetingPrius_ptr;
		}

		auto NullTargetingPrius_ptr = NullTargetingPrius::from_substruct(incoming_type_id, serialized);
		if (NullTargetingPrius_ptr != nullptr) {
			return NullTargetingPrius_ptr;
		}

		auto HeuristicTargetingPrius_ptr = HeuristicTargetingPrius::from_substruct(incoming_type_id, serialized);
		if (HeuristicTargetingPrius_ptr != nullptr) {
			return HeuristicTargetingPrius_ptr;
		}

		auto DistanceTargetingPrius_ptr = DistanceTargetingPrius::from_substruct(incoming_type_id, serialized);
		if (DistanceTargetingPrius_ptr != nullptr) {
			return DistanceTargetingPrius_ptr;
		}

		auto TieredAggroTargetingPrius_ptr = TieredAggroTargetingPrius::from_substruct(incoming_type_id, serialized);
		if (TieredAggroTargetingPrius_ptr != nullptr) {
			return TieredAggroTargetingPrius_ptr;
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
