// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/VisualEffectAngles.hpp> 

#include <rivet/ddl/generated/VisualEffectAccelerationKeyFrames.hpp>

namespace rivet::ddl::generated {
	VisualEffectAccelerationKeyFrames::VisualEffectAccelerationKeyFrames([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		EnableLooping = serialized->get_bool(EnableLooping_type_id);
		UseEmitterAge = serialized->get_bool(UseEmitterAge_type_id);
		LifeTimeOverride = serialized->get_float(LifeTimeOverride_type_id);
		Angles = serialized->unwrap_into<rivet::ddl::generated::VisualEffectAngles>(Angles_type_id);
		Space = serialized->get_enum<rivet::ddl::generated::xfe5100b1>(Space_type_id, rivet::ddl::generated::xfe5100b1_values);
		Value = serialized->get_float(Value_type_id); 
	}

	[[nodiscard]] auto
	VisualEffectAccelerationKeyFrames::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	VisualEffectAccelerationKeyFrames::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<VisualEffectAccelerationKeyFrames> {
		if (incoming_type_id == VisualEffectAccelerationKeyFrames::type_id) {
			return std::make_shared<VisualEffectAccelerationKeyFrames>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
