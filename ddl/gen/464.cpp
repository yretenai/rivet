// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/HealEffectPrius.hpp>
#include <rivet/ddl/generated/ScriptedShotConditionalBasePrius.hpp>
#include <rivet/ddl/generated/AttachToActorEffectPrius.hpp>
#include <rivet/ddl/generated/CreatePersistantAOEPrius.hpp>
#include <rivet/ddl/generated/AttachToHitSurfaceEffectPrius.hpp>
#include <rivet/ddl/generated/CameraShakeShotEffectPrius.hpp>
#include <rivet/ddl/generated/ForwardingShotEffectPrius.hpp>
#include <rivet/ddl/generated/ContinueShotMotionEffectPrius.hpp>
#include <rivet/ddl/generated/ToggleLightsEffectPrius.hpp>
#include <rivet/ddl/generated/SpawnSyncedActorEffectPrius.hpp>
#include <rivet/ddl/generated/PlayAnimEffectPrius.hpp>
#include <rivet/ddl/generated/SpawnShotEffectPrius.hpp>
#include <rivet/ddl/generated/ExplodeShotEffectPrius.hpp>
#include <rivet/ddl/generated/SpawnSyncedActorForHitEffectPrius.hpp>
#include <rivet/ddl/generated/DealDamageEffectPrius.hpp>
#include <rivet/ddl/generated/CreateAOEPrius.hpp>
#include <rivet/ddl/generated/DontDestroyShotAfterCollisionEffectPrius.hpp>
#include <rivet/ddl/generated/AddStatModifierEffectPrius.hpp>
#include <rivet/ddl/generated/AddStatusEffectShotEffectPrius.hpp>
#include <rivet/ddl/generated/BounceShotEffectPrius.hpp>
#include <rivet/ddl/generated/TriggerConduitEventEffectPrius.hpp>
#include <rivet/ddl/generated/DestroyShotEffectPrius.hpp>
#include <rivet/ddl/generated/EnterRagdollStatePrius.hpp> 

#include <rivet/ddl/generated/ScriptedShotEffectBasePrius.hpp>

namespace rivet::ddl::generated {
	ScriptedShotEffectBasePrius::ScriptedShotEffectBasePrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		EffectName = serialized->get_string(EffectName_type_id);
		Condition = serialized->unwrap_into<rivet::ddl::generated::ScriptedShotConditionalBasePrius>(Condition_type_id); 
	}

	auto
	ScriptedShotEffectBasePrius::get_type_id() const noexcept -> rivet::rivet_type_id {
		return type_id;
	}

	[[nodiscard]] auto
	ScriptedShotEffectBasePrius::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	ScriptedShotEffectBasePrius::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<ScriptedShotEffectBasePrius> {
		if (incoming_type_id == ScriptedShotEffectBasePrius::type_id) {
			return std::make_shared<ScriptedShotEffectBasePrius>(serialized);
		}

		auto CreatePersistantAOEPrius_ptr = CreatePersistantAOEPrius::from_substruct(incoming_type_id, serialized);
		if (CreatePersistantAOEPrius_ptr != nullptr) {
			return CreatePersistantAOEPrius_ptr;
		}

		auto AttachToActorEffectPrius_ptr = AttachToActorEffectPrius::from_substruct(incoming_type_id, serialized);
		if (AttachToActorEffectPrius_ptr != nullptr) {
			return AttachToActorEffectPrius_ptr;
		}

		auto AttachToHitSurfaceEffectPrius_ptr = AttachToHitSurfaceEffectPrius::from_substruct(incoming_type_id, serialized);
		if (AttachToHitSurfaceEffectPrius_ptr != nullptr) {
			return AttachToHitSurfaceEffectPrius_ptr;
		}

		auto ContinueShotMotionEffectPrius_ptr = ContinueShotMotionEffectPrius::from_substruct(incoming_type_id, serialized);
		if (ContinueShotMotionEffectPrius_ptr != nullptr) {
			return ContinueShotMotionEffectPrius_ptr;
		}

		auto CameraShakeShotEffectPrius_ptr = CameraShakeShotEffectPrius::from_substruct(incoming_type_id, serialized);
		if (CameraShakeShotEffectPrius_ptr != nullptr) {
			return CameraShakeShotEffectPrius_ptr;
		}

		auto ToggleLightsEffectPrius_ptr = ToggleLightsEffectPrius::from_substruct(incoming_type_id, serialized);
		if (ToggleLightsEffectPrius_ptr != nullptr) {
			return ToggleLightsEffectPrius_ptr;
		}

		auto SpawnSyncedActorEffectPrius_ptr = SpawnSyncedActorEffectPrius::from_substruct(incoming_type_id, serialized);
		if (SpawnSyncedActorEffectPrius_ptr != nullptr) {
			return SpawnSyncedActorEffectPrius_ptr;
		}

		auto PlayAnimEffectPrius_ptr = PlayAnimEffectPrius::from_substruct(incoming_type_id, serialized);
		if (PlayAnimEffectPrius_ptr != nullptr) {
			return PlayAnimEffectPrius_ptr;
		}

		auto HealEffectPrius_ptr = HealEffectPrius::from_substruct(incoming_type_id, serialized);
		if (HealEffectPrius_ptr != nullptr) {
			return HealEffectPrius_ptr;
		}

		auto SpawnShotEffectPrius_ptr = SpawnShotEffectPrius::from_substruct(incoming_type_id, serialized);
		if (SpawnShotEffectPrius_ptr != nullptr) {
			return SpawnShotEffectPrius_ptr;
		}

		auto ExplodeShotEffectPrius_ptr = ExplodeShotEffectPrius::from_substruct(incoming_type_id, serialized);
		if (ExplodeShotEffectPrius_ptr != nullptr) {
			return ExplodeShotEffectPrius_ptr;
		}

		auto SpawnSyncedActorForHitEffectPrius_ptr = SpawnSyncedActorForHitEffectPrius::from_substruct(incoming_type_id, serialized);
		if (SpawnSyncedActorForHitEffectPrius_ptr != nullptr) {
			return SpawnSyncedActorForHitEffectPrius_ptr;
		}

		auto DealDamageEffectPrius_ptr = DealDamageEffectPrius::from_substruct(incoming_type_id, serialized);
		if (DealDamageEffectPrius_ptr != nullptr) {
			return DealDamageEffectPrius_ptr;
		}

		auto CreateAOEPrius_ptr = CreateAOEPrius::from_substruct(incoming_type_id, serialized);
		if (CreateAOEPrius_ptr != nullptr) {
			return CreateAOEPrius_ptr;
		}

		auto DontDestroyShotAfterCollisionEffectPrius_ptr = DontDestroyShotAfterCollisionEffectPrius::from_substruct(incoming_type_id, serialized);
		if (DontDestroyShotAfterCollisionEffectPrius_ptr != nullptr) {
			return DontDestroyShotAfterCollisionEffectPrius_ptr;
		}

		auto AddStatusEffectShotEffectPrius_ptr = AddStatusEffectShotEffectPrius::from_substruct(incoming_type_id, serialized);
		if (AddStatusEffectShotEffectPrius_ptr != nullptr) {
			return AddStatusEffectShotEffectPrius_ptr;
		}

		auto BounceShotEffectPrius_ptr = BounceShotEffectPrius::from_substruct(incoming_type_id, serialized);
		if (BounceShotEffectPrius_ptr != nullptr) {
			return BounceShotEffectPrius_ptr;
		}

		auto TriggerConduitEventEffectPrius_ptr = TriggerConduitEventEffectPrius::from_substruct(incoming_type_id, serialized);
		if (TriggerConduitEventEffectPrius_ptr != nullptr) {
			return TriggerConduitEventEffectPrius_ptr;
		}

		auto AddStatModifierEffectPrius_ptr = AddStatModifierEffectPrius::from_substruct(incoming_type_id, serialized);
		if (AddStatModifierEffectPrius_ptr != nullptr) {
			return AddStatModifierEffectPrius_ptr;
		}

		auto DestroyShotEffectPrius_ptr = DestroyShotEffectPrius::from_substruct(incoming_type_id, serialized);
		if (DestroyShotEffectPrius_ptr != nullptr) {
			return DestroyShotEffectPrius_ptr;
		}

		auto ForwardingShotEffectPrius_ptr = ForwardingShotEffectPrius::from_substruct(incoming_type_id, serialized);
		if (ForwardingShotEffectPrius_ptr != nullptr) {
			return ForwardingShotEffectPrius_ptr;
		}

		auto EnterRagdollStatePrius_ptr = EnterRagdollStatePrius::from_substruct(incoming_type_id, serialized);
		if (EnterRagdollStatePrius_ptr != nullptr) {
			return EnterRagdollStatePrius_ptr;
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
