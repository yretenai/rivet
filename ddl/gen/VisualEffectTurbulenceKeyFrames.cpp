// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/DDLVector3.hpp> 

#include <rivet/ddl/generated/VisualEffectTurbulenceKeyFrames.hpp>

namespace rivet::ddl::generated {
	VisualEffectTurbulenceKeyFrames::VisualEffectTurbulenceKeyFrames([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		EnableLooping = serialized->get_bool(EnableLooping_type_id);
		UseEmitterAge = serialized->get_bool(UseEmitterAge_type_id);
		LifeTimeOverride = serialized->get_float(LifeTimeOverride_type_id);
		Value = serialized->unwrap_into<rivet::ddl::generated::DDLVector3>(Value_type_id);
		Frequency = serialized->get_float(Frequency_type_id); 
	}

	[[nodiscard]] auto
	VisualEffectTurbulenceKeyFrames::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	VisualEffectTurbulenceKeyFrames::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<VisualEffectTurbulenceKeyFrames> {
		if (incoming_type_id == VisualEffectTurbulenceKeyFrames::type_id) {
			return std::make_shared<VisualEffectTurbulenceKeyFrames>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
