// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/DDLVector3.hpp> 

#include <rivet/ddl/generated/VisualEffectRotationKeyFrames.hpp>

namespace rivet::ddl::generated {
	VisualEffectRotationKeyFrames::VisualEffectRotationKeyFrames([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		EnableLooping = serialized->get_bool(EnableLooping_type_id);
		UseEmitterAge = serialized->get_bool(UseEmitterAge_type_id);
		LifeTimeOverride = serialized->get_float(LifeTimeOverride_type_id);
		Direction = serialized->get_enum<rivet::ddl::generated::x831fe0ea>(Direction_type_id, rivet::ddl::generated::x831fe0ea_values);
		Type = serialized->get_enum<rivet::ddl::generated::xe380f68b>(Type_type_id, rivet::ddl::generated::xe380f68b_values);
		SpawnAnglesMin = serialized->unwrap_into<rivet::ddl::generated::DDLVector3>(SpawnAnglesMin_type_id);
		SpawnAnglesMax = serialized->unwrap_into<rivet::ddl::generated::DDLVector3>(SpawnAnglesMax_type_id);
		Value = serialized->unwrap_into<rivet::ddl::generated::DDLVector3>(Value_type_id); 
	}

	[[nodiscard]] auto
	VisualEffectRotationKeyFrames::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	VisualEffectRotationKeyFrames::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<VisualEffectRotationKeyFrames> {
		if (incoming_type_id == VisualEffectRotationKeyFrames::type_id) {
			return std::make_shared<VisualEffectRotationKeyFrames>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated