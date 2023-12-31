// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/FlyerHomingMinePrius.hpp>

namespace rivet::ddl::generated {
	FlyerHomingMinePrius::FlyerHomingMinePrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		DamageRadius = serialized->get_float(DamageRadius_type_id);
		DamageAmount = serialized->get_float(DamageAmount_type_id);
		TriggerRadius = serialized->get_float(TriggerRadius_type_id);
		HomingActivationRadius = serialized->get_float(HomingActivationRadius_type_id);
		HomingDeactivationRadius = serialized->get_float(HomingDeactivationRadius_type_id);
		HomingSpeed = serialized->get_float(HomingSpeed_type_id);
		HomingAcceleration = serialized->get_float(HomingAcceleration_type_id);
		HomingDeceleration = serialized->get_float(HomingDeceleration_type_id);
		AutoDestructTime = serialized->get_float(AutoDestructTime_type_id);
		CutOffMinDistance = serialized->get_float(CutOffMinDistance_type_id);
		CutOffMaxDistance = serialized->get_float(CutOffMaxDistance_type_id);
		MustBeInViewToActivate = serialized->get_bool(MustBeInViewToActivate_type_id);
		DeactivateWhenOutOfView = serialized->get_bool(DeactivateWhenOutOfView_type_id); 
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
