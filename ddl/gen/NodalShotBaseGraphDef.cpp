// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/NodalShotGraphDef.hpp>
#include <rivet/ddl/generated/StringHashOutNodeDef.hpp>
#include <rivet/ddl/generated/Vec3OutNodeDef.hpp>
#include <rivet/ddl/generated/StringOutNodeDef.hpp>
#include <rivet/ddl/generated/SignalOutputNodeDef.hpp>
#include <rivet/ddl/generated/SignalInputNodeDef.hpp>
#include <rivet/ddl/generated/TriggerConduitEventEffectNodeDef.hpp>
#include <rivet/ddl/generated/EventInitializationOutputNodeDef.hpp>
#include <rivet/ddl/generated/ToggleLightsEffectNodeDef.hpp>
#include <rivet/ddl/generated/TargetedBounceEffectNodeDef.hpp>
#include <rivet/ddl/generated/SpawnSyncedActorEffectNodeDef.hpp>
#include <rivet/ddl/generated/AddStatModifierEffectNodeDef.hpp>
#include <rivet/ddl/generated/SpawnShotEffectNodeDef.hpp>
#include <rivet/ddl/generated/OnPostInitNodeDef.hpp>
#include <rivet/ddl/generated/OnHitNonFriendlyNodeDef.hpp>
#include <rivet/ddl/generated/SpawnSyncedActorForHitEffectNodeDef.hpp>
#include <rivet/ddl/generated/ContinueShotMotionEffectNodeDef.hpp>
#include <rivet/ddl/generated/DealDamageEffectNodeDef.hpp>
#include <rivet/ddl/generated/DontDestroyShotAfterCollisionEffectNodeDef.hpp>
#include <rivet/ddl/generated/IntOutNodeDef.hpp>
#include <rivet/ddl/generated/OnHitEnemyNodeDef.hpp>
#include <rivet/ddl/generated/UIntOutNodeDef.hpp>
#include <rivet/ddl/generated/NodalShotTransitionStateNodeDef.hpp>
#include <rivet/ddl/generated/NodalShotInitNewStateNodeDef.hpp>
#include <rivet/ddl/generated/BooleanOutNodeDef.hpp>
#include <rivet/ddl/generated/OnHitFriendlyNodeDef.hpp>
#include <rivet/ddl/generated/NodalShotInitFirstStateNodeDef.hpp>
#include <rivet/ddl/generated/FloatOutNodeDef.hpp>
#include <rivet/ddl/generated/AttachToActorEffectNodeDef.hpp>
#include <rivet/ddl/generated/OnHitEnvironmentNodeDef.hpp>
#include <rivet/ddl/generated/OnHitAnythingNodeDef.hpp>
#include <rivet/ddl/generated/NodalShotUIntVariableNodeDef.hpp>
#include <rivet/ddl/generated/GiveItemEffectNodeDef.hpp>
#include <rivet/ddl/generated/OnPassMaxRangeNodeDef.hpp>
#include <rivet/ddl/generated/OnUpdateIntervalNodeDef.hpp>
#include <rivet/ddl/generated/AttachToHitSurfaceEffectNodeDef.hpp>
#include <rivet/ddl/generated/EnterRagdollStateEffectNodeDef.hpp>
#include <rivet/ddl/generated/EventInitializationInputNodeDef.hpp>
#include <rivet/ddl/generated/OnLifetimeExpiredNodeDef.hpp>
#include <rivet/ddl/generated/AddStatusEffectNodeDef.hpp>
#include <rivet/ddl/generated/DestroyShotEffectNodeDef.hpp>
#include <rivet/ddl/generated/BounceEffectNodeDef.hpp>
#include <rivet/ddl/generated/ChangeShotMotionEffectNodeDef.hpp>
#include <rivet/ddl/generated/CameraShakeEffectNodeDef.hpp>
#include <rivet/ddl/generated/PlayAnimEffectNodeDef.hpp>
#include <rivet/ddl/generated/ExplodeEffectNodeDef.hpp>
#include <rivet/ddl/generated/HealEffectNodeDef.hpp> 

#include <rivet/ddl/generated/NodalShotBaseGraphDef.hpp>

namespace rivet::ddl::generated {
	NodalShotBaseGraphDef::NodalShotBaseGraphDef([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): GameplayNodeGraphBaseDef(serialized) {
		NodalShotInitFirstStateNodes = serialized->unwrap_into_many<rivet::ddl::generated::NodalShotInitFirstStateNodeDef>(NodalShotInitFirstStateNodes_type_id);
		NodalShotInitNewStateNodes = serialized->unwrap_into_many<rivet::ddl::generated::NodalShotInitNewStateNodeDef>(NodalShotInitNewStateNodes_type_id);
		NodalShotTransitionStateNodes = serialized->unwrap_into_many<rivet::ddl::generated::NodalShotTransitionStateNodeDef>(NodalShotTransitionStateNodes_type_id);
		OnHitAnythingNodes = serialized->unwrap_into_many<rivet::ddl::generated::OnHitAnythingNodeDef>(OnHitAnythingNodes_type_id);
		OnHitEnemyNodes = serialized->unwrap_into_many<rivet::ddl::generated::OnHitEnemyNodeDef>(OnHitEnemyNodes_type_id);
		OnHitEnvironmentNodes = serialized->unwrap_into_many<rivet::ddl::generated::OnHitEnvironmentNodeDef>(OnHitEnvironmentNodes_type_id);
		OnHitFriendlyNodes = serialized->unwrap_into_many<rivet::ddl::generated::OnHitFriendlyNodeDef>(OnHitFriendlyNodes_type_id);
		OnHitNonFriendlyNodes = serialized->unwrap_into_many<rivet::ddl::generated::OnHitNonFriendlyNodeDef>(OnHitNonFriendlyNodes_type_id);
		OnLifetimeExpiredNodes = serialized->unwrap_into_many<rivet::ddl::generated::OnLifetimeExpiredNodeDef>(OnLifetimeExpiredNodes_type_id);
		OnUpdateIntervalNodes = serialized->unwrap_into_many<rivet::ddl::generated::OnUpdateIntervalNodeDef>(OnUpdateIntervalNodes_type_id);
		OnPassMaxRangeNodes = serialized->unwrap_into_many<rivet::ddl::generated::OnPassMaxRangeNodeDef>(OnPassMaxRangeNodes_type_id);
		OnPostInitNodes = serialized->unwrap_into_many<rivet::ddl::generated::OnPostInitNodeDef>(OnPostInitNodes_type_id);
		AddStatModifierEffectNodes = serialized->unwrap_into_many<rivet::ddl::generated::AddStatModifierEffectNodeDef>(AddStatModifierEffectNodes_type_id);
		AddStatusEffectNodes = serialized->unwrap_into_many<rivet::ddl::generated::AddStatusEffectNodeDef>(AddStatusEffectNodes_type_id);
		AttachToActorEffectNodes = serialized->unwrap_into_many<rivet::ddl::generated::AttachToActorEffectNodeDef>(AttachToActorEffectNodes_type_id);
		AttachToHitSurfaceEffectNodes = serialized->unwrap_into_many<rivet::ddl::generated::AttachToHitSurfaceEffectNodeDef>(AttachToHitSurfaceEffectNodes_type_id);
		BounceEffectNodes = serialized->unwrap_into_many<rivet::ddl::generated::BounceEffectNodeDef>(BounceEffectNodes_type_id);
		CameraShakeEffectNodes = serialized->unwrap_into_many<rivet::ddl::generated::CameraShakeEffectNodeDef>(CameraShakeEffectNodes_type_id);
		ChangeShotMotionEffectNodes = serialized->unwrap_into_many<rivet::ddl::generated::ChangeShotMotionEffectNodeDef>(ChangeShotMotionEffectNodes_type_id);
		ContinueShotMotionEffectNodes = serialized->unwrap_into_many<rivet::ddl::generated::ContinueShotMotionEffectNodeDef>(ContinueShotMotionEffectNodes_type_id);
		DealDamageEffectNodes = serialized->unwrap_into_many<rivet::ddl::generated::DealDamageEffectNodeDef>(DealDamageEffectNodes_type_id);
		DestroyShotEffectNodes = serialized->unwrap_into_many<rivet::ddl::generated::DestroyShotEffectNodeDef>(DestroyShotEffectNodes_type_id);
		DontDestroyShotAfterCollisionEffectNodes = serialized->unwrap_into_many<rivet::ddl::generated::DontDestroyShotAfterCollisionEffectNodeDef>(DontDestroyShotAfterCollisionEffectNodes_type_id);
		EnterRagdollStateEffectNodes = serialized->unwrap_into_many<rivet::ddl::generated::EnterRagdollStateEffectNodeDef>(EnterRagdollStateEffectNodes_type_id);
		ExplodeEffectNodes = serialized->unwrap_into_many<rivet::ddl::generated::ExplodeEffectNodeDef>(ExplodeEffectNodes_type_id);
		GiveItemEffectNodes = serialized->unwrap_into_many<rivet::ddl::generated::GiveItemEffectNodeDef>(GiveItemEffectNodes_type_id);
		HealEffectNodes = serialized->unwrap_into_many<rivet::ddl::generated::HealEffectNodeDef>(HealEffectNodes_type_id);
		PlayAnimEffectNodes = serialized->unwrap_into_many<rivet::ddl::generated::PlayAnimEffectNodeDef>(PlayAnimEffectNodes_type_id);
		SpawnShotEffectNodes = serialized->unwrap_into_many<rivet::ddl::generated::SpawnShotEffectNodeDef>(SpawnShotEffectNodes_type_id);
		SpawnSyncedActorEffectNodes = serialized->unwrap_into_many<rivet::ddl::generated::SpawnSyncedActorEffectNodeDef>(SpawnSyncedActorEffectNodes_type_id);
		SpawnSyncedActorForHitEffectNodes = serialized->unwrap_into_many<rivet::ddl::generated::SpawnSyncedActorForHitEffectNodeDef>(SpawnSyncedActorForHitEffectNodes_type_id);
		TargetedBounceEffectNodes = serialized->unwrap_into_many<rivet::ddl::generated::TargetedBounceEffectNodeDef>(TargetedBounceEffectNodes_type_id);
		ToggleLightsEffectNodes = serialized->unwrap_into_many<rivet::ddl::generated::ToggleLightsEffectNodeDef>(ToggleLightsEffectNodes_type_id);
		TriggerConduitEventEffectNodes = serialized->unwrap_into_many<rivet::ddl::generated::TriggerConduitEventEffectNodeDef>(TriggerConduitEventEffectNodes_type_id);
		NodalShotUIntVariableNodes = serialized->unwrap_into_many<rivet::ddl::generated::NodalShotUIntVariableNodeDef>(NodalShotUIntVariableNodes_type_id);
		SignalInputNodes = serialized->unwrap_into_many<rivet::ddl::generated::SignalInputNodeDef>(SignalInputNodes_type_id);
		SignalOutputNodes = serialized->unwrap_into_many<rivet::ddl::generated::SignalOutputNodeDef>(SignalOutputNodes_type_id);
		EventInitializationInputNodes = serialized->unwrap_into_many<rivet::ddl::generated::EventInitializationInputNodeDef>(EventInitializationInputNodes_type_id);
		EventInitializationOutputNodes = serialized->unwrap_into_many<rivet::ddl::generated::EventInitializationOutputNodeDef>(EventInitializationOutputNodes_type_id);
		BooleanOutNodes = serialized->unwrap_into_many<rivet::ddl::generated::BooleanOutNodeDef>(BooleanOutNodes_type_id);
		FloatOutNodes = serialized->unwrap_into_many<rivet::ddl::generated::FloatOutNodeDef>(FloatOutNodes_type_id);
		StringOutNodes = serialized->unwrap_into_many<rivet::ddl::generated::StringOutNodeDef>(StringOutNodes_type_id);
		Vec3OutNodes = serialized->unwrap_into_many<rivet::ddl::generated::Vec3OutNodeDef>(Vec3OutNodes_type_id);
		StringHashOutNodes = serialized->unwrap_into_many<rivet::ddl::generated::StringHashOutNodeDef>(StringHashOutNodes_type_id);
		IntOutNodes = serialized->unwrap_into_many<rivet::ddl::generated::IntOutNodeDef>(IntOutNodes_type_id);
		UIntOutNodes = serialized->unwrap_into_many<rivet::ddl::generated::UIntOutNodeDef>(UIntOutNodes_type_id); 
	}

	[[nodiscard]] auto
	NodalShotBaseGraphDef::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	NodalShotBaseGraphDef::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<NodalShotBaseGraphDef> {
		if (incoming_type_id == NodalShotBaseGraphDef::type_id) {
			return std::make_shared<NodalShotBaseGraphDef>(serialized);
		}

		auto NodalShotGraphDef_ptr = NodalShotGraphDef::from_substruct(incoming_type_id, serialized);
		if (NodalShotGraphDef_ptr != nullptr) {
			return NodalShotGraphDef_ptr;
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated