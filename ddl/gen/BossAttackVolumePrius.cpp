// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/BotComboMoveBase.hpp> 

#include <rivet/ddl/generated/BossAttackVolumePrius.hpp>

namespace rivet::ddl::generated {
	BossAttackVolumePrius::BossAttackVolumePrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		CooldownMin = serialized->get_float(CooldownMin_type_id, 0.000000);
		CooldownMax = serialized->get_float(CooldownMax_type_id, 0.000000);
		ApplyCooldownToTheseVolumes = serialized->get_uint64s(ApplyCooldownToTheseVolumes_type_id);
		GlobalCooldownMin = serialized->get_float(GlobalCooldownMin_type_id, 0.000000);
		GlobalCooldownMax = serialized->get_float(GlobalCooldownMax_type_id, 0.000000);
		InitialCooldownMin = serialized->get_float(InitialCooldownMin_type_id, 0.000000);
		InitialCooldownMax = serialized->get_float(InitialCooldownMax_type_id, 0.000000);
		OtherCooldownMin = serialized->get_float(OtherCooldownMin_type_id, 0.000000);
		OtherCooldownMax = serialized->get_float(OtherCooldownMax_type_id, 0.000000);
		ApplyOtherCooldownToTheseVolumes = serialized->get_uint64s(ApplyOtherCooldownToTheseVolumes_type_id);
		RandomWeighting = serialized->get_float(RandomWeighting_type_id, 1.000000);
		ForceIfInside = serialized->get_bool(ForceIfInside_type_id, false);
		ForceIfInsideOnce = serialized->get_bool(ForceIfInsideOnce_type_id, false);
		UseBossPosition = serialized->get_bool(UseBossPosition_type_id, false);
		AttachToBoss = serialized->get_bool(AttachToBoss_type_id, false);
		AttachToBossLoc = serialized->get_string(AttachToBossLoc_type_id, {});
		MaxConsecutiveUses = serialized->get_uint32(MaxConsecutiveUses_type_id, 1);
		StartAsEnabled = serialized->get_bool(StartAsEnabled_type_id, true);
		ImmuneFromGlobalCooldown = serialized->get_bool(ImmuneFromGlobalCooldown_type_id, false);
		GotoAttackPosActor = serialized->get_uint64(GotoAttackPosActor_type_id, 0);
		UseGotoPosActorFacing = serialized->get_bool(UseGotoPosActorFacing_type_id, false);
		RepositionToFPPostAttack = serialized->get_bool(RepositionToFPPostAttack_type_id, false);
		AttackMove = serialized->unwrap_into<rivet::ddl::generated::BotComboMoveBase>(AttackMove_type_id); 
	}

	[[nodiscard]] auto
	BossAttackVolumePrius::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	BossAttackVolumePrius::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<BossAttackVolumePrius> {
		if (incoming_type_id == BossAttackVolumePrius::type_id) {
			return std::make_shared<BossAttackVolumePrius>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
