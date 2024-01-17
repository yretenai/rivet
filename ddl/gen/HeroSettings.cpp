// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/HeroWallRunSettings.hpp>
#include <rivet/ddl/generated/HeroHoverbootSettings.hpp>
#include <rivet/ddl/generated/HeroRecoveryLedgeSettings.hpp>
#include <rivet/ddl/generated/HeroSprintSettings.hpp>
#include <rivet/ddl/generated/HeroRunSpeedSettings.hpp>
#include <rivet/ddl/generated/HeroAltControlSettings.hpp> 

#include <rivet/ddl/generated/HeroSettings.hpp>

namespace rivet::ddl::generated {
	HeroSettings::HeroSettings([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		OverrideDefaultItemLoadout = serialized->get_string(OverrideDefaultItemLoadout_type_id, {});
		DebugSwapHeroType = serialized->get_enum<rivet::ddl::generated::HeroTypes>(DebugSwapHeroType_type_id, rivet::ddl::generated::HeroTypes_values, rivet::ddl::generated::HeroTypes::None);
		DebugSpawnHeroType = serialized->get_enum<rivet::ddl::generated::HeroTypes>(DebugSpawnHeroType_type_id, rivet::ddl::generated::HeroTypes_values, rivet::ddl::generated::HeroTypes::None);
		AltControlSettings = serialized->unwrap_into<rivet::ddl::generated::HeroAltControlSettings>(AltControlSettings_type_id);
		RunSpeedSettings = serialized->unwrap_into<rivet::ddl::generated::HeroRunSpeedSettings>(RunSpeedSettings_type_id);
		SprintSettings = serialized->unwrap_into<rivet::ddl::generated::HeroSprintSettings>(SprintSettings_type_id);
		RecoveryLedgeSettings = serialized->unwrap_into<rivet::ddl::generated::HeroRecoveryLedgeSettings>(RecoveryLedgeSettings_type_id);
		HoverbootSettings = serialized->unwrap_into<rivet::ddl::generated::HeroHoverbootSettings>(HoverbootSettings_type_id);
		WallRunSettings = serialized->unwrap_into<rivet::ddl::generated::HeroWallRunSettings>(WallRunSettings_type_id);
		XpGainMultiplier = serialized->get_float(XpGainMultiplier_type_id, 1.000000);
		EnablePlatformingShadowDecal = serialized->get_bool(EnablePlatformingShadowDecal_type_id, true);
		EnablePhaseDash = serialized->get_bool(EnablePhaseDash_type_id, true); 
	}

	[[nodiscard]] auto
	HeroSettings::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	HeroSettings::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<HeroSettings> {
		if (incoming_type_id == HeroSettings::type_id) {
			return std::make_shared<HeroSettings>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
