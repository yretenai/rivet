// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/TargetedBounceShotEffectPrius.hpp> 

#include <rivet/ddl/generated/BounceShotEffectPrius.hpp>

namespace rivet::ddl::generated {
	BounceShotEffectPrius::BounceShotEffectPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): ScriptedShotEffectBasePrius(serialized) {
		RollBounceScale = serialized->get_float(RollBounceScale_type_id);
		FlatHitBounceScale = serialized->get_float(FlatHitBounceScale_type_id);
		ActorRollBounceScale = serialized->get_float(ActorRollBounceScale_type_id);
		ActorFlatHitBounceScale = serialized->get_float(ActorFlatHitBounceScale_type_id);
		ActorBounceGravity = serialized->get_float(ActorBounceGravity_type_id);
		MinVelocity = serialized->get_float(MinVelocity_type_id); 
	}

	[[nodiscard]] auto
	BounceShotEffectPrius::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	BounceShotEffectPrius::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<BounceShotEffectPrius> {
		if (incoming_type_id == BounceShotEffectPrius::type_id) {
			return std::make_shared<BounceShotEffectPrius>(serialized);
		}

		auto TargetedBounceShotEffectPrius_ptr = TargetedBounceShotEffectPrius::from_substruct(incoming_type_id, serialized);
		if (TargetedBounceShotEffectPrius_ptr != nullptr) {
			return TargetedBounceShotEffectPrius_ptr;
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
