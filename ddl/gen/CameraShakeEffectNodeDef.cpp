// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/CameraShakingWithFallOffData.hpp> 

#include <rivet/ddl/generated/CameraShakeEffectNodeDef.hpp>

namespace rivet::ddl::generated {
	CameraShakeEffectNodeDef::CameraShakeEffectNodeDef([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): NodalShotEffectNodeBaseDef(serialized) {
		ShakeData = serialized->unwrap_into<rivet::ddl::generated::CameraShakingWithFallOffData>(ShakeData_type_id); 
	}

	[[nodiscard]] auto
	CameraShakeEffectNodeDef::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	CameraShakeEffectNodeDef::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<CameraShakeEffectNodeDef> {
		if (incoming_type_id == CameraShakeEffectNodeDef::type_id) {
			return std::make_shared<CameraShakeEffectNodeDef>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
