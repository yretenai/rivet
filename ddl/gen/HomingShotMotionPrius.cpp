// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/HexapodShotMotionPrius.hpp>
#include <rivet/ddl/generated/DispersingShotMotionPrius.hpp>
#include <rivet/ddl/generated/CorkscrewHomingShotMotionPrius.hpp>
#include <rivet/ddl/generated/FlyerFireballShotMotionPrius.hpp>
#include <rivet/ddl/generated/ShotMotionPredatorLauncherPrius.hpp>
#include <rivet/ddl/generated/WarmongerShotMotionPrius.hpp>
#include <rivet/ddl/generated/GroundImpactHomingShotMotionPrius.hpp> 

#include <rivet/ddl/generated/HomingShotMotionPrius.hpp>

namespace rivet::ddl::generated {
	HomingShotMotionPrius::HomingShotMotionPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): VariableSpeedShotMotionPrius(serialized) {
		DefaultJoint = serialized->get_string(DefaultJoint_type_id, "igLoc_spine");
		NearbyCameraShake = serialized->get_string(NearbyCameraShake_type_id, {}); 
	}

	[[nodiscard]] auto
	HomingShotMotionPrius::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	HomingShotMotionPrius::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<HomingShotMotionPrius> {
		if (incoming_type_id == HomingShotMotionPrius::type_id) {
			return std::make_shared<HomingShotMotionPrius>(serialized);
		}

		auto GroundImpactHomingShotMotionPrius_ptr = GroundImpactHomingShotMotionPrius::from_substruct(incoming_type_id, serialized);
		if (GroundImpactHomingShotMotionPrius_ptr != nullptr) {
			return GroundImpactHomingShotMotionPrius_ptr;
		}

		auto WarmongerShotMotionPrius_ptr = WarmongerShotMotionPrius::from_substruct(incoming_type_id, serialized);
		if (WarmongerShotMotionPrius_ptr != nullptr) {
			return WarmongerShotMotionPrius_ptr;
		}

		auto FlyerFireballShotMotionPrius_ptr = FlyerFireballShotMotionPrius::from_substruct(incoming_type_id, serialized);
		if (FlyerFireballShotMotionPrius_ptr != nullptr) {
			return FlyerFireballShotMotionPrius_ptr;
		}

		auto ShotMotionPredatorLauncherPrius_ptr = ShotMotionPredatorLauncherPrius::from_substruct(incoming_type_id, serialized);
		if (ShotMotionPredatorLauncherPrius_ptr != nullptr) {
			return ShotMotionPredatorLauncherPrius_ptr;
		}

		auto CorkscrewHomingShotMotionPrius_ptr = CorkscrewHomingShotMotionPrius::from_substruct(incoming_type_id, serialized);
		if (CorkscrewHomingShotMotionPrius_ptr != nullptr) {
			return CorkscrewHomingShotMotionPrius_ptr;
		}

		auto DispersingShotMotionPrius_ptr = DispersingShotMotionPrius::from_substruct(incoming_type_id, serialized);
		if (DispersingShotMotionPrius_ptr != nullptr) {
			return DispersingShotMotionPrius_ptr;
		}

		auto HexapodShotMotionPrius_ptr = HexapodShotMotionPrius::from_substruct(incoming_type_id, serialized);
		if (HexapodShotMotionPrius_ptr != nullptr) {
			return HexapodShotMotionPrius_ptr;
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
