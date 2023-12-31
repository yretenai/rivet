// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/RecoilCameraShakeProcedural.hpp>

namespace rivet::ddl::generated {
	RecoilCameraShakeProcedural::RecoilCameraShakeProcedural([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): RecoilCameraShake(serialized) {
		CamShakeAttackTime = serialized->get_float(CamShakeAttackTime_type_id);
		CamShakeSustainTime = serialized->get_float(CamShakeSustainTime_type_id);
		CamShakeDecayTime = serialized->get_float(CamShakeDecayTime_type_id);
		CamShakeStrength = serialized->get_float(CamShakeStrength_type_id);
		CamShakeFrequency = serialized->get_float(CamShakeFrequency_type_id);
		CameraShakeData = serialized->get_string(CameraShakeData_type_id); 
	}

	[[nodiscard]] auto
	RecoilCameraShakeProcedural::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	RecoilCameraShakeProcedural::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<RecoilCameraShakeProcedural> {
		if (incoming_type_id == RecoilCameraShakeProcedural::type_id) {
			return std::make_shared<RecoilCameraShakeProcedural>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
