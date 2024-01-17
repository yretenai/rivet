// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/DDLVector3.hpp> 

#include <rivet/ddl/generated/BotMeleeAttackData.hpp>

namespace rivet::ddl::generated {
	BotMeleeAttackData::BotMeleeAttackData([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		AnimDriver = serialized->get_string(AnimDriver_type_id, "Melee_Attack");
		WindUpDuration = serialized->get_float(WindUpDuration_type_id, -1.000000);
		ActiveDuration = serialized->get_float(ActiveDuration_type_id, -1.000000);
		RecoveryDuration = serialized->get_float(RecoveryDuration_type_id, -1.000000);
		IdealDistance = serialized->get_float(IdealDistance_type_id, 0.300000);
		SuckDistance = serialized->get_float(SuckDistance_type_id, 2.000000);
		PushbackDistance = serialized->get_float(PushbackDistance_type_id, 0.100000);
		MaxTranslationScale = serialized->unwrap_into<rivet::ddl::generated::DDLVector3>(MaxTranslationScale_type_id);
		MaxTranslationRate = serialized->unwrap_into<rivet::ddl::generated::DDLVector3>(MaxTranslationRate_type_id);
		MaxTurnScale = serialized->get_float(MaxTurnScale_type_id, -1.000000);
		MaxTurnRate = serialized->get_float(MaxTurnRate_type_id, -1.000000);
		MaxTurnAdjust = serialized->get_float(MaxTurnAdjust_type_id, 180.000000);
		DisableFriendlyCVC = serialized->get_bool(DisableFriendlyCVC_type_id, false);
		EnableGravity = serialized->get_bool(EnableGravity_type_id, true);
		YAdjustType = serialized->get_enum<rivet::ddl::generated::x9e94da32>(YAdjustType_type_id, rivet::ddl::generated::x9e94da32_values, rivet::ddl::generated::x9e94da32::Default); 
	}

	[[nodiscard]] auto
	BotMeleeAttackData::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	BotMeleeAttackData::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<BotMeleeAttackData> {
		if (incoming_type_id == BotMeleeAttackData::type_id) {
			return std::make_shared<BotMeleeAttackData>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
