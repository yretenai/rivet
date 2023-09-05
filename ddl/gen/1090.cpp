// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/RecoilCameraShakeAnimated.hpp>

namespace rivet::ddl::generated {
	RecoilCameraShakeAnimated::RecoilCameraShakeAnimated([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): RecoilCameraShake(serialized) {
		AnimDriverName = serialized->get_string(AnimDriverName_type_id);
		AnimLoopTime = serialized->get_float(AnimLoopTime_type_id);
		AnimMotionScaleX = serialized->get_float(AnimMotionScaleX_type_id);
		AnimMotionScaleY = serialized->get_float(AnimMotionScaleY_type_id);
		AnimMotionScaleZ = serialized->get_float(AnimMotionScaleZ_type_id);
		AnimRotationScale = serialized->get_float(AnimRotationScale_type_id);
		AnimTimeScale = serialized->get_float(AnimTimeScale_type_id); 
	}

	auto
	RecoilCameraShakeAnimated::get_type_id() const noexcept -> rivet::rivet_type_id {
		return type_id;
	}

	[[nodiscard]] auto
	RecoilCameraShakeAnimated::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	RecoilCameraShakeAnimated::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<RecoilCameraShakeAnimated> {
		if (incoming_type_id == RecoilCameraShakeAnimated::type_id) {
			return std::make_shared<RecoilCameraShakeAnimated>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
