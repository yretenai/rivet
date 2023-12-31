// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#pragma once

// clang-format off

#include <cstdint>
#include <string_view>
#include <array>

#include <rivet/hash/type_id.hpp>
#include <rivet/rivet_keywords.hpp>

namespace rivet::ddl::generated {
	constexpr static std::string_view x1c87ac4a_type_name = "x1c87ac4a";
	constexpr static rivet::rivet_type_id x1c87ac4a_type_id = 0x1c87ac4a;

	constexpr static std::array<std::string_view, 80> x1c87ac4a_values = {
		"kNone",
		"kDamage",
		"kAltDamage",
		"kAltDamageOuter",
		"kAOE",
		"kAOEOuter",
		"kRateOfFire",
		"kRange",
		"kKnockbackAmount",
		"kKnockbackLevel",
		"kAutoAim",
		"kAmmo",
		"kPickupAmmo",
		"kAmmoCost",
		"kSpawnCount",
		"kSpawnChance",
		"kDuration",
		"kBolts",
		"kAgentAttacks",
		"kAgentSpeed",
		"kAnnoyance",
		"kAutoHitCone",
		"kBlastWidth",
		"kBonusDamage",
		"kCaughtShots",
		"kChargeStatus",
		"kChargeTime",
		"kChiDuration",
		"kCloudDuration",
		"kCooldownRate",
		"kDamageMultiplier",
		"kEffectsDuration",
		"kExplosionDamage",
		"kExplosionRadius",
		"kFastPitch",
		"kFreezeDuration",
		"kFullFireRate",
		"kHeatCapacity",
		"kHomingRange",
		"kLockOnSpeed",
		"kMovementSpread",
		"kReturningFire",
		"kShotCount",
		"kSpread",
		"kStunDuration",
		"kTimingWindow",
		"kAOEFullDamage",
		"kBlastAmmoConsumption",
		"kBlockingAmmoConsumption",
		"kBounceCount",
		"kBounceRange",
		"kCooldownPerKill",
		"kCreateWeakpoints",
		"kDeathCloud",
		"kDestroyIncomingShots",
		"kDropAmmo",
		"kDropHealth",
		"kEnemiesExplode",
		"kExplosionChance",
		"kExtraHits",
		"kFastFireAccuracy",
		"kFuseTimer",
		"kHeadShotDamage",
		"kHoming",
		"kKnockbackDistanceBonus",
		"kLifetime",
		"kLoadingSpeed",
		"kMaxArcCount",
		"kMaxDeployable",
		"kMiniPortals",
		"kMovementSpeed",
		"kSecondaryDetonation",
		"kShotDamageTime",
		"kShotReturn",
		"kShotsPierceGeo",
		"kSlowAmount",
		"kSlowDuration",
		"kSpeedUp",
		"kSpinUpFaster",
		"kUnlockObjects", 
	};

	constexpr static std::array<std::string_view, 80> x1c87ac4a_labels = {
		"NONE",
		"NONE",
		"NONE",
		"NONE",
		"NONE",
		"NONE",
		"NONE",
		"NONE",
		"NONE",
		"NONE",
		"NONE",
		"NONE",
		"NONE",
		"NONE",
		"NONE",
		"NONE",
		"NONE",
		"NONE",
		"NONE",
		"NONE",
		"NONE",
		"NONE",
		"NONE",
		"NONE",
		"NONE",
		"NONE",
		"NONE",
		"NONE",
		"NONE",
		"NONE",
		"NONE",
		"NONE",
		"NONE",
		"NONE",
		"NONE",
		"NONE",
		"NONE",
		"NONE",
		"NONE",
		"NONE",
		"NONE",
		"NONE",
		"NONE",
		"NONE",
		"NONE",
		"NONE",
		"NONE",
		"NONE",
		"NONE",
		"NONE",
		"NONE",
		"NONE",
		"NONE",
		"NONE",
		"NONE",
		"NONE",
		"NONE",
		"NONE",
		"NONE",
		"NONE",
		"NONE",
		"NONE",
		"NONE",
		"NONE",
		"NONE",
		"NONE",
		"NONE",
		"NONE",
		"NONE",
		"NONE",
		"NONE",
		"NONE",
		"NONE",
		"NONE",
		"NONE",
		"NONE",
		"NONE",
		"NONE",
		"NONE",
		"NONE", 
	};

	enum class x1c87ac4a : uint64_t {
		None,
		Damage,
		AltDamage,
		AltDamageOuter,
		AOE,
		AOEOuter,
		RateOfFire,
		Range,
		KnockbackAmount,
		KnockbackLevel,
		AutoAim,
		Ammo,
		PickupAmmo,
		AmmoCost,
		SpawnCount,
		SpawnChance,
		Duration,
		Bolts,
		AgentAttacks,
		AgentSpeed,
		Annoyance,
		AutoHitCone,
		BlastWidth,
		BonusDamage,
		CaughtShots,
		ChargeStatus,
		ChargeTime,
		ChiDuration,
		CloudDuration,
		CooldownRate,
		DamageMultiplier,
		EffectsDuration,
		ExplosionDamage,
		ExplosionRadius,
		FastPitch,
		FreezeDuration,
		FullFireRate,
		HeatCapacity,
		HomingRange,
		LockOnSpeed,
		MovementSpread,
		ReturningFire,
		ShotCount,
		Spread,
		StunDuration,
		TimingWindow,
		AOEFullDamage,
		BlastAmmoConsumption,
		BlockingAmmoConsumption,
		BounceCount,
		BounceRange,
		CooldownPerKill,
		CreateWeakpoints,
		DeathCloud,
		DestroyIncomingShots,
		DropAmmo,
		DropHealth,
		EnemiesExplode,
		ExplosionChance,
		ExtraHits,
		FastFireAccuracy,
		FuseTimer,
		HeadShotDamage,
		Homing,
		KnockbackDistanceBonus,
		Lifetime,
		LoadingSpeed,
		MaxArcCount,
		MaxDeployable,
		MiniPortals,
		MovementSpeed,
		SecondaryDetonation,
		ShotDamageTime,
		ShotReturn,
		ShotsPierceGeo,
		SlowAmount,
		SlowDuration,
		SpeedUp,
		SpinUpFaster,
		UnlockObjects, 
	};
} // namespace rivet::ddl::generated

// clang-format on
