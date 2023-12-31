// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/HeroAltControlSettings.hpp>

namespace rivet::ddl::generated {
	HeroAltControlSettings::HeroAltControlSettings([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		JumpToAirDash = serialized->get_bool(JumpToAirDash_type_id);
		RiftTetherCombatTargeting = serialized->get_bool(RiftTetherCombatTargeting_type_id);
		HoverbootInputMode = serialized->get_enum<rivet::ddl::generated::x47a6f45d>(HoverbootInputMode_type_id, rivet::ddl::generated::x47a6f45d_values);
		HoverbootNoKickInputGracePeriod = serialized->get_float(HoverbootNoKickInputGracePeriod_type_id);
		FlyerCameraResponsivenessOption = serialized->get_enum<rivet::ddl::generated::x8b42b541>(FlyerCameraResponsivenessOption_type_id, rivet::ddl::generated::x8b42b541_values); 
	}

	[[nodiscard]] auto
	HeroAltControlSettings::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	HeroAltControlSettings::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<HeroAltControlSettings> {
		if (incoming_type_id == HeroAltControlSettings::type_id) {
			return std::make_shared<HeroAltControlSettings>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
