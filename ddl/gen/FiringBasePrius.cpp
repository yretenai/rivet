// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/FiringPrius.hpp>
#include <rivet/ddl/generated/AimModWrapper.hpp>
#include <rivet/ddl/generated/AimingBasePrius.hpp>
#include <rivet/ddl/generated/BurstSequence.hpp> 

#include <rivet/ddl/generated/FiringBasePrius.hpp>

namespace rivet::ddl::generated {
	FiringBasePrius::FiringBasePrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		BurstSequence = serialized->unwrap_into<rivet::ddl::generated::BurstSequence>(BurstSequence_type_id);
		TriggerIndex = serialized->get_uint32(TriggerIndex_type_id);
		MinFiringDot = serialized->get_float(MinFiringDot_type_id);
		ShortRange = serialized->get_float(ShortRange_type_id);
		IdealRange = serialized->get_float(IdealRange_type_id);
		LongRange = serialized->get_float(LongRange_type_id);
		MaxRange = serialized->get_float(MaxRange_type_id);
		NeedsLos = serialized->get_bool(NeedsLos_type_id);
		NeedsJob = serialized->get_bool(NeedsJob_type_id);
		RankTargetLocs = serialized->get_bool(RankTargetLocs_type_id);
		AimType = serialized->get_enum<rivet::ddl::generated::x4f5e74b9>(AimType_type_id, rivet::ddl::generated::x4f5e74b9_values);
		HoldFireForVictimStates = serialized->get_bool(HoldFireForVictimStates_type_id);
		AvoidShootingFriends = serialized->get_bool(AvoidShootingFriends_type_id);
		FireAtUnseenTargetsTime = serialized->get_float(FireAtUnseenTargetsTime_type_id);
		TargetLocation = serialized->get_enum<rivet::ddl::generated::x457f748b>(TargetLocation_type_id, rivet::ddl::generated::x457f748b_values);
		TargetLocationName = serialized->get_string(TargetLocationName_type_id);
		Aiming = serialized->unwrap_into<rivet::ddl::generated::AimingBasePrius>(Aiming_type_id);
		AimMods = serialized->unwrap_into_many<rivet::ddl::generated::AimModWrapper>(AimMods_type_id);
		BotConfigAiming = serialized->get_string(BotConfigAiming_type_id); 
	}

	[[nodiscard]] auto
	FiringBasePrius::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	FiringBasePrius::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<FiringBasePrius> {
		if (incoming_type_id == FiringBasePrius::type_id) {
			return std::make_shared<FiringBasePrius>(serialized);
		}

		auto FiringPrius_ptr = FiringPrius::from_substruct(incoming_type_id, serialized);
		if (FiringPrius_ptr != nullptr) {
			return FiringPrius_ptr;
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
