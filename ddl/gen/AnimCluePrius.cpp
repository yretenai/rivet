// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/SyncedAnimCluePrius.hpp>
#include <rivet/ddl/generated/AnimSetMapping.hpp> 

#include <rivet/ddl/generated/AnimCluePrius.hpp>

namespace rivet::ddl::generated {
	AnimCluePrius::AnimCluePrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): IntroDataPrius(serialized) {
		MovingAnim = serialized->get_bool(MovingAnim_type_id, false);
		Idle = serialized->get_bool(Idle_type_id, false);
		Search = serialized->get_bool(Search_type_id, false);
		Alert = serialized->get_bool(Alert_type_id, false);
		CheckFacing = serialized->get_bool(CheckFacing_type_id, false);
		Ambush = serialized->get_bool(Ambush_type_id, false);
		Hide = serialized->get_bool(Hide_type_id, false);
		UseMayaAnimOffset = serialized->get_bool(UseMayaAnimOffset_type_id, true);
		QuitOnEngaged = serialized->get_bool(QuitOnEngaged_type_id, false);
		EngagedIntroAbortTime = serialized->get_float(EngagedIntroAbortTime_type_id, -1.000000);
		EngagedOutroDelay = serialized->get_float(EngagedOutroDelay_type_id, 0.000000);
		SetInvincible = serialized->get_bool(SetInvincible_type_id, false);
		InterruptibleBy = serialized->get_enum<rivet::ddl::generated::x1879f53b>(InterruptibleBy_type_id, rivet::ddl::generated::x1879f53b_values, rivet::ddl::generated::x1879f53b::Anything);
		OnScreenIntro = serialized->get_bool(OnScreenIntro_type_id, false);
		OnScreenLooped = serialized->get_bool(OnScreenLooped_type_id, false);
		ForceFinishAnim = serialized->get_bool(ForceFinishAnim_type_id, false);
		PlayAtCurrentPos = serialized->get_bool(PlayAtCurrentPos_type_id, false);
		JumpIntro = serialized->get_bool(JumpIntro_type_id, false);
		StartIntroMaterialFX = serialized->get_bool(StartIntroMaterialFX_type_id, false);
		AllowProximitySpawns = serialized->get_bool(AllowProximitySpawns_type_id, false);
		SnapToGround = serialized->get_bool(SnapToGround_type_id, false);
		PlayObjWhenOwnerDone = serialized->get_bool(PlayObjWhenOwnerDone_type_id, false);
		DeleteUserOnComplete = serialized->get_bool(DeleteUserOnComplete_type_id, false);
		MoveIntro = serialized->get_string(MoveIntro_type_id, {});
		IntroAnim = serialized->get_string(IntroAnim_type_id, {});
		UseAnim = serialized->get_string(UseAnim_type_id, {});
		OutroAnim = serialized->get_string(OutroAnim_type_id, {});
		FastOutroAnim = serialized->get_string(FastOutroAnim_type_id, {});
		MoveOutro = serialized->get_string(MoveOutro_type_id, {});
		ObjectIntroAnim = serialized->get_string(ObjectIntroAnim_type_id, {});
		ObjectUseAnim = serialized->get_string(ObjectUseAnim_type_id, {});
		ObjectOutroAnim = serialized->get_string(ObjectOutroAnim_type_id, {});
		ObjectIdleAnim = serialized->get_string(ObjectIdleAnim_type_id, "Idle");
		LoopCount = serialized->get_int32(LoopCount_type_id, -1);
		MinTimeAtClue = serialized->get_float(MinTimeAtClue_type_id, 0.000000);
		CanReset = serialized->get_bool(CanReset_type_id, false);
		AllowMultiUse = serialized->get_bool(AllowMultiUse_type_id, false);
		MaxAnimIndex = serialized->get_enum<rivet::ddl::generated::xa3886454>(MaxAnimIndex_type_id, rivet::ddl::generated::xa3886454_values, rivet::ddl::generated::xa3886454::None);
		ObjectActor = serialized->get_uint64(ObjectActor_type_id, 0);
		AnimSetMapping = serialized->unwrap_into_many<rivet::ddl::generated::AnimSetMapping>(AnimSetMapping_type_id); 
	}

	[[nodiscard]] auto
	AnimCluePrius::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	AnimCluePrius::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<AnimCluePrius> {
		if (incoming_type_id == AnimCluePrius::type_id) {
			return std::make_shared<AnimCluePrius>(serialized);
		}

		auto SyncedAnimCluePrius_ptr = SyncedAnimCluePrius::from_substruct(incoming_type_id, serialized);
		if (SyncedAnimCluePrius_ptr != nullptr) {
			return SyncedAnimCluePrius_ptr;
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
