// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/AimModStrafeTargetPrius.hpp>
#include <rivet/ddl/generated/AimModFollowTargetFromOffsetPrius.hpp>
#include <rivet/ddl/generated/AimModAdvContractingSpreadPrius.hpp>
#include <rivet/ddl/generated/AimModLockWhenTargetDodgePrius.hpp>
#include <rivet/ddl/generated/AimModLockOnAimingAtCoverPrius.hpp>
#include <rivet/ddl/generated/AimModForwardPrius.hpp>
#include <rivet/ddl/generated/AimModWalkToTargetPrius.hpp>
#include <rivet/ddl/generated/AimModSweepPrius.hpp>
#include <rivet/ddl/generated/AimModLosTimeContractingSpreadPrius.hpp>
#include <rivet/ddl/generated/AimModGimpPrius.hpp>
#include <rivet/ddl/generated/AimModPredictTargetPrius.hpp>
#include <rivet/ddl/generated/AimModMissTargetGamePrius.hpp>
#include <rivet/ddl/generated/AimModRandomOffsetPrius.hpp>
#include <rivet/ddl/generated/AimModRCPS4GimpPrius.hpp>
#include <rivet/ddl/generated/AimModFixedOffsetPrius.hpp>
#include <rivet/ddl/generated/AimModAlignedOffsetPrius.hpp>
#include <rivet/ddl/generated/AimModOffCameraPrius.hpp>
#include <rivet/ddl/generated/AimModLeadTargetPrius.hpp>
#include <rivet/ddl/generated/AimModContractingSpreadPrius.hpp>
#include <rivet/ddl/generated/AimModLockAfterTimePrius.hpp>
#include <rivet/ddl/generated/AimModOverCollisionPrius.hpp>
#include <rivet/ddl/generated/AimModTargetBestGroundPosPrius.hpp>
#include <rivet/ddl/generated/AimModContractingSpreadOffScreenPrius.hpp> 

#include <rivet/ddl/generated/AimModifierPrius.hpp>

namespace rivet::ddl::generated {
	AimModifierPrius::AimModifierPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		AimModIndex = serialized->get_uint32(AimModIndex_type_id); 
	}

	[[nodiscard]] auto
	AimModifierPrius::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	AimModifierPrius::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<AimModifierPrius> {
		if (incoming_type_id == AimModifierPrius::type_id) {
			return std::make_shared<AimModifierPrius>(serialized);
		}

		auto AimModLockOnAimingAtCoverPrius_ptr = AimModLockOnAimingAtCoverPrius::from_substruct(incoming_type_id, serialized);
		if (AimModLockOnAimingAtCoverPrius_ptr != nullptr) {
			return AimModLockOnAimingAtCoverPrius_ptr;
		}

		auto AimModForwardPrius_ptr = AimModForwardPrius::from_substruct(incoming_type_id, serialized);
		if (AimModForwardPrius_ptr != nullptr) {
			return AimModForwardPrius_ptr;
		}

		auto AimModGimpPrius_ptr = AimModGimpPrius::from_substruct(incoming_type_id, serialized);
		if (AimModGimpPrius_ptr != nullptr) {
			return AimModGimpPrius_ptr;
		}

		auto AimModWalkToTargetPrius_ptr = AimModWalkToTargetPrius::from_substruct(incoming_type_id, serialized);
		if (AimModWalkToTargetPrius_ptr != nullptr) {
			return AimModWalkToTargetPrius_ptr;
		}

		auto AimModRCPS4GimpPrius_ptr = AimModRCPS4GimpPrius::from_substruct(incoming_type_id, serialized);
		if (AimModRCPS4GimpPrius_ptr != nullptr) {
			return AimModRCPS4GimpPrius_ptr;
		}

		auto AimModAlignedOffsetPrius_ptr = AimModAlignedOffsetPrius::from_substruct(incoming_type_id, serialized);
		if (AimModAlignedOffsetPrius_ptr != nullptr) {
			return AimModAlignedOffsetPrius_ptr;
		}

		auto AimModLockAfterTimePrius_ptr = AimModLockAfterTimePrius::from_substruct(incoming_type_id, serialized);
		if (AimModLockAfterTimePrius_ptr != nullptr) {
			return AimModLockAfterTimePrius_ptr;
		}

		auto AimModOffCameraPrius_ptr = AimModOffCameraPrius::from_substruct(incoming_type_id, serialized);
		if (AimModOffCameraPrius_ptr != nullptr) {
			return AimModOffCameraPrius_ptr;
		}

		auto AimModContractingSpreadPrius_ptr = AimModContractingSpreadPrius::from_substruct(incoming_type_id, serialized);
		if (AimModContractingSpreadPrius_ptr != nullptr) {
			return AimModContractingSpreadPrius_ptr;
		}

		auto AimModTargetBestGroundPosPrius_ptr = AimModTargetBestGroundPosPrius::from_substruct(incoming_type_id, serialized);
		if (AimModTargetBestGroundPosPrius_ptr != nullptr) {
			return AimModTargetBestGroundPosPrius_ptr;
		}

		auto AimModContractingSpreadOffScreenPrius_ptr = AimModContractingSpreadOffScreenPrius::from_substruct(incoming_type_id, serialized);
		if (AimModContractingSpreadOffScreenPrius_ptr != nullptr) {
			return AimModContractingSpreadOffScreenPrius_ptr;
		}

		auto AimModFixedOffsetPrius_ptr = AimModFixedOffsetPrius::from_substruct(incoming_type_id, serialized);
		if (AimModFixedOffsetPrius_ptr != nullptr) {
			return AimModFixedOffsetPrius_ptr;
		}

		auto AimModSweepPrius_ptr = AimModSweepPrius::from_substruct(incoming_type_id, serialized);
		if (AimModSweepPrius_ptr != nullptr) {
			return AimModSweepPrius_ptr;
		}

		auto AimModLeadTargetPrius_ptr = AimModLeadTargetPrius::from_substruct(incoming_type_id, serialized);
		if (AimModLeadTargetPrius_ptr != nullptr) {
			return AimModLeadTargetPrius_ptr;
		}

		auto AimModRandomOffsetPrius_ptr = AimModRandomOffsetPrius::from_substruct(incoming_type_id, serialized);
		if (AimModRandomOffsetPrius_ptr != nullptr) {
			return AimModRandomOffsetPrius_ptr;
		}

		auto AimModMissTargetGamePrius_ptr = AimModMissTargetGamePrius::from_substruct(incoming_type_id, serialized);
		if (AimModMissTargetGamePrius_ptr != nullptr) {
			return AimModMissTargetGamePrius_ptr;
		}

		auto AimModOverCollisionPrius_ptr = AimModOverCollisionPrius::from_substruct(incoming_type_id, serialized);
		if (AimModOverCollisionPrius_ptr != nullptr) {
			return AimModOverCollisionPrius_ptr;
		}

		auto AimModAdvContractingSpreadPrius_ptr = AimModAdvContractingSpreadPrius::from_substruct(incoming_type_id, serialized);
		if (AimModAdvContractingSpreadPrius_ptr != nullptr) {
			return AimModAdvContractingSpreadPrius_ptr;
		}

		auto AimModFollowTargetFromOffsetPrius_ptr = AimModFollowTargetFromOffsetPrius::from_substruct(incoming_type_id, serialized);
		if (AimModFollowTargetFromOffsetPrius_ptr != nullptr) {
			return AimModFollowTargetFromOffsetPrius_ptr;
		}

		auto AimModLosTimeContractingSpreadPrius_ptr = AimModLosTimeContractingSpreadPrius::from_substruct(incoming_type_id, serialized);
		if (AimModLosTimeContractingSpreadPrius_ptr != nullptr) {
			return AimModLosTimeContractingSpreadPrius_ptr;
		}

		auto AimModPredictTargetPrius_ptr = AimModPredictTargetPrius::from_substruct(incoming_type_id, serialized);
		if (AimModPredictTargetPrius_ptr != nullptr) {
			return AimModPredictTargetPrius_ptr;
		}

		auto AimModLockWhenTargetDodgePrius_ptr = AimModLockWhenTargetDodgePrius::from_substruct(incoming_type_id, serialized);
		if (AimModLockWhenTargetDodgePrius_ptr != nullptr) {
			return AimModLockWhenTargetDodgePrius_ptr;
		}

		auto AimModStrafeTargetPrius_ptr = AimModStrafeTargetPrius::from_substruct(incoming_type_id, serialized);
		if (AimModStrafeTargetPrius_ptr != nullptr) {
			return AimModStrafeTargetPrius_ptr;
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated