// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/FlyerHomingMinePrius.hpp>

namespace rivet::ddl::generated {
	FlyerHomingMinePrius::FlyerHomingMinePrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		DamageRadius = serialized->get_float(DamageRadius_type_id, 10.000000);
		DamageAmount = serialized->get_float(DamageAmount_type_id, 100.000000);
		TriggerRadius = serialized->get_float(TriggerRadius_type_id, 8.000000);
		HomingActivationRadius = serialized->get_float(HomingActivationRadius_type_id, 50.000000);
		HomingDeactivationRadius = serialized->get_float(HomingDeactivationRadius_type_id, -1.000000);
		HomingSpeed = serialized->get_float(HomingSpeed_type_id, 10.000000);
		HomingAcceleration = serialized->get_float(HomingAcceleration_type_id, 40.000000);
		HomingDeceleration = serialized->get_float(HomingDeceleration_type_id, 40.000000);
		AutoDestructTime = serialized->get_float(AutoDestructTime_type_id, -1.000000);
		CutOffMinDistance = serialized->get_float(CutOffMinDistance_type_id, 10.000000);
		CutOffMaxDistance = serialized->get_float(CutOffMaxDistance_type_id, 50.000000);
		MustBeInViewToActivate = serialized->get_bool(MustBeInViewToActivate_type_id, true);
		DeactivateWhenOutOfView = serialized->get_bool(DeactivateWhenOutOfView_type_id, true); 
	}

	[[nodiscard]] auto
	FlyerHomingMinePrius::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	FlyerHomingMinePrius::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<FlyerHomingMinePrius> {
		if (incoming_type_id == FlyerHomingMinePrius::type_id) {
			return std::make_shared<FlyerHomingMinePrius>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
