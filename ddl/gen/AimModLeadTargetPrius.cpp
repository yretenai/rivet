// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/AimModLeadTargetTraversalPrius.hpp>
#include <rivet/ddl/generated/AimModLeadTargetGamePrius.hpp>
#include <rivet/ddl/generated/AimModLeadTargetPriusModDef.hpp> 

#include <rivet/ddl/generated/AimModLeadTargetPrius.hpp>

namespace rivet::ddl::generated {
	AimModLeadTargetPrius::AimModLeadTargetPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): AimModifierPrius(serialized) {
		MaxPredictiveSpeed = serialized->get_float(MaxPredictiveSpeed_type_id);
		LockOnShotCount = serialized->get_int32(LockOnShotCount_type_id);
		AdditionalLeadTime = serialized->get_float(AdditionalLeadTime_type_id);
		MaxLeadTime = serialized->get_float(MaxLeadTime_type_id);
		ConfigModDefs = serialized->unwrap_into_many<rivet::ddl::generated::AimModLeadTargetPriusModDef>(ConfigModDefs_type_id); 
	}

	[[nodiscard]] auto
	AimModLeadTargetPrius::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	AimModLeadTargetPrius::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<AimModLeadTargetPrius> {
		if (incoming_type_id == AimModLeadTargetPrius::type_id) {
			return std::make_shared<AimModLeadTargetPrius>(serialized);
		}

		auto AimModLeadTargetTraversalPrius_ptr = AimModLeadTargetTraversalPrius::from_substruct(incoming_type_id, serialized);
		if (AimModLeadTargetTraversalPrius_ptr != nullptr) {
			return AimModLeadTargetTraversalPrius_ptr;
		}

		auto AimModLeadTargetGamePrius_ptr = AimModLeadTargetGamePrius::from_substruct(incoming_type_id, serialized);
		if (AimModLeadTargetGamePrius_ptr != nullptr) {
			return AimModLeadTargetGamePrius_ptr;
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
