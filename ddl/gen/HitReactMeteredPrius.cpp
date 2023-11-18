// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/KnockbackReactionModifier.hpp>
#include <rivet/ddl/generated/HitReactMeters.hpp> 

#include <rivet/ddl/generated/HitReactMeteredPrius.hpp>

namespace rivet::ddl::generated {
	HitReactMeteredPrius::HitReactMeteredPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): HitReactPrius(serialized) {
		MeterData = serialized->unwrap_into<rivet::ddl::generated::HitReactMeters>(MeterData_type_id);
		FullbodyCooldown = serialized->get_float(FullbodyCooldown_type_id);
		PartialReactDriver = serialized->get_string(PartialReactDriver_type_id);
		PartialReactCooldown = serialized->get_float(PartialReactCooldown_type_id);
		BodypartToFilterConfig = serialized->get_string(BodypartToFilterConfig_type_id);
		OverrideKnockbackLength = serialized->get_float(OverrideKnockbackLength_type_id);
		OverrideKnockdownLength = serialized->get_float(OverrideKnockdownLength_type_id);
		ContinousPartialTime = serialized->get_float(ContinousPartialTime_type_id);
		KineticResistance = serialized->get_float(KineticResistance_type_id);
		ReactionMods = serialized->unwrap_into_many<rivet::ddl::generated::KnockbackReactionModifier>(ReactionMods_type_id); 
	}

	[[nodiscard]] auto
	HitReactMeteredPrius::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	HitReactMeteredPrius::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<HitReactMeteredPrius> {
		if (incoming_type_id == HitReactMeteredPrius::type_id) {
			return std::make_shared<HitReactMeteredPrius>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
