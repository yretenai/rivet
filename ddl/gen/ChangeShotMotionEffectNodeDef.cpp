// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/ShotMotionBasePrius.hpp> 

#include <rivet/ddl/generated/ChangeShotMotionEffectNodeDef.hpp>

namespace rivet::ddl::generated {
	ChangeShotMotionEffectNodeDef::ChangeShotMotionEffectNodeDef([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): NodalShotEffectNodeBaseDef(serialized) {
		Motion = serialized->unwrap_into<rivet::ddl::generated::ShotMotionBasePrius>(Motion_type_id); 
	}

	[[nodiscard]] auto
	ChangeShotMotionEffectNodeDef::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	ChangeShotMotionEffectNodeDef::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<ChangeShotMotionEffectNodeDef> {
		if (incoming_type_id == ChangeShotMotionEffectNodeDef::type_id) {
			return std::make_shared<ChangeShotMotionEffectNodeDef>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
