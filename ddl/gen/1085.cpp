// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/RecoilCameraShakeItem.hpp> 

#include <rivet/ddl/generated/BasicRecoilPrius.hpp>

namespace rivet::ddl::generated {
	BasicRecoilPrius::BasicRecoilPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): WeaponRecoilBasePrius(serialized) {
		ShotsToMin = serialized->get_float(ShotsToMin_type_id);
		ShotsToMax = serialized->get_float(ShotsToMax_type_id);
		BumpRamp = serialized->get_float(BumpRamp_type_id);
		BumpAngleMin = serialized->get_float(BumpAngleMin_type_id);
		BumpAngleMax = serialized->get_float(BumpAngleMax_type_id);
		BumpOffsetMin = serialized->get_float(BumpOffsetMin_type_id);
		BumpOffsetMax = serialized->get_float(BumpOffsetMax_type_id);
		BumpSpeedMin = serialized->get_float(BumpSpeedMin_type_id);
		BumpSpeedMax = serialized->get_float(BumpSpeedMax_type_id);
		CooldownStart = serialized->get_float(CooldownStart_type_id);
		CooldownComplete = serialized->get_float(CooldownComplete_type_id);
		SettleDelay = serialized->get_float(SettleDelay_type_id);
		SettleGain = serialized->get_float(SettleGain_type_id);
		SettleDamp = serialized->get_float(SettleDamp_type_id);
		SettlePercent = serialized->get_float(SettlePercent_type_id);
		CameraShake = serialized->unwrap_into<rivet::ddl::generated::RecoilCameraShakeItem>(CameraShake_type_id); 
	}

	auto
	BasicRecoilPrius::get_type_id() const noexcept -> rivet::rivet_type_id {
		return type_id;
	}

	[[nodiscard]] auto
	BasicRecoilPrius::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	BasicRecoilPrius::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<BasicRecoilPrius> {
		if (incoming_type_id == BasicRecoilPrius::type_id) {
			return std::make_shared<BasicRecoilPrius>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
