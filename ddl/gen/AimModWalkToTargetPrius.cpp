// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/AimModWalkToTargetGamePrius.hpp> 

#include <rivet/ddl/generated/AimModWalkToTargetPrius.hpp>

namespace rivet::ddl::generated {
	AimModWalkToTargetPrius::AimModWalkToTargetPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): AimModifierPrius(serialized) {
		WalkDurationMin = serialized->get_float(WalkDurationMin_type_id, 0.000000);
		WalkDurationMax = serialized->get_float(WalkDurationMax_type_id, 0.000000);
		WalkStartMinX = serialized->get_float(WalkStartMinX_type_id, -4.000000);
		WalkStartMaxX = serialized->get_float(WalkStartMaxX_type_id, 4.000000);
		WalkStartMinY = serialized->get_float(WalkStartMinY_type_id, -2.000000);
		WalkStartMaxY = serialized->get_float(WalkStartMaxY_type_id, -2.000000);
		WalkStartMinZ = serialized->get_float(WalkStartMinZ_type_id, 6.000000);
		WalkStartMaxZ = serialized->get_float(WalkStartMaxZ_type_id, 10.000000);
		CountShots = serialized->get_bool(CountShots_type_id, false);
		WalkPastTarget = serialized->get_bool(WalkPastTarget_type_id, false);
		AutoHitInRange = serialized->get_bool(AutoHitInRange_type_id, true); 
	}

	[[nodiscard]] auto
	AimModWalkToTargetPrius::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	AimModWalkToTargetPrius::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<AimModWalkToTargetPrius> {
		if (incoming_type_id == AimModWalkToTargetPrius::type_id) {
			return std::make_shared<AimModWalkToTargetPrius>(serialized);
		}

		auto AimModWalkToTargetGamePrius_ptr = AimModWalkToTargetGamePrius::from_substruct(incoming_type_id, serialized);
		if (AimModWalkToTargetGamePrius_ptr != nullptr) {
			return AimModWalkToTargetGamePrius_ptr;
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
