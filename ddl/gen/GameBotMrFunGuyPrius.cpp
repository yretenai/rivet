// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/GameBotMrFunGuyPrius.hpp>

namespace rivet::ddl::generated {
	GameBotMrFunGuyPrius::GameBotMrFunGuyPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): GameBotMeleeBasePrius(serialized) {
		GasElementActor = serialized->get_string(GasElementActor_type_id, {});
		TurretShotConfig = serialized->get_string(TurretShotConfig_type_id, {});
		IntroAnim = serialized->get_string(IntroAnim_type_id, {});
		LeftHandThrowAnim = serialized->get_string(LeftHandThrowAnim_type_id, {});
		RightHandThrowAnim = serialized->get_string(RightHandThrowAnim_type_id, {});
		ThrowingLoopAnim = serialized->get_string(ThrowingLoopAnim_type_id, {});
		DeathAnim = serialized->get_string(DeathAnim_type_id, {});
		IdleAnimHash = serialized->get_string(IdleAnimHash_type_id, {});
		DanceAnimHash = serialized->get_string(DanceAnimHash_type_id, {});
		LeftEmitLocator = serialized->get_string(LeftEmitLocator_type_id, {});
		RightEmitLocator = serialized->get_string(RightEmitLocator_type_id, {});
		MaxLifetime = serialized->get_float(MaxLifetime_type_id, 8.000000);
		GasLifetime = serialized->get_float(GasLifetime_type_id, 5.000000);
		HoverHeight = serialized->get_float(HoverHeight_type_id, 0.850000);
		ModelScale = serialized->get_float(ModelScale_type_id, 1.000000);
		GasTargetingRadius = serialized->get_float(GasTargetingRadius_type_id, 10.000000); 
	}

	[[nodiscard]] auto
	GameBotMrFunGuyPrius::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	GameBotMrFunGuyPrius::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<GameBotMrFunGuyPrius> {
		if (incoming_type_id == GameBotMrFunGuyPrius::type_id) {
			return std::make_shared<GameBotMrFunGuyPrius>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
