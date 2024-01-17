// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/VisualEffectFloatKeyFrames.hpp>

namespace rivet::ddl::generated {
	VisualEffectFloatKeyFrames::VisualEffectFloatKeyFrames([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		EnableLooping = serialized->get_bool(EnableLooping_type_id, true);
		UseEmitterAge = serialized->get_bool(UseEmitterAge_type_id, false);
		LifeTimeOverride = serialized->get_float(LifeTimeOverride_type_id, 0.000000);
		Value = serialized->get_float(Value_type_id, 1.000000); 
	}

	[[nodiscard]] auto
	VisualEffectFloatKeyFrames::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	VisualEffectFloatKeyFrames::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<VisualEffectFloatKeyFrames> {
		if (incoming_type_id == VisualEffectFloatKeyFrames::type_id) {
			return std::make_shared<VisualEffectFloatKeyFrames>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
