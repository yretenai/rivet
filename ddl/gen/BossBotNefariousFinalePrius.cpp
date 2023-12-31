// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/HoverShuffleData.hpp> 

#include <rivet/ddl/generated/BossBotNefariousFinalePrius.hpp>

namespace rivet::ddl::generated {
	BossBotNefariousFinalePrius::BossBotNefariousFinalePrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): BotPrius(serialized) {
		HoverShuffleData = serialized->unwrap_into<rivet::ddl::generated::HoverShuffleData>(HoverShuffleData_type_id);
		EmpNefariousPilotAsset = serialized->get_string(EmpNefariousPilotAsset_type_id);
		DocNefariousPilotAsset = serialized->get_string(DocNefariousPilotAsset_type_id);
		DamageStates_Eye_LF = serialized->get_string(DamageStates_Eye_LF_type_id);
		DamageStates_Eye_RT = serialized->get_string(DamageStates_Eye_RT_type_id);
		DamageStates_Arm_LF = serialized->get_string(DamageStates_Arm_LF_type_id);
		DamageStates_Arm_RT = serialized->get_string(DamageStates_Arm_RT_type_id); 
	}

	[[nodiscard]] auto
	BossBotNefariousFinalePrius::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	BossBotNefariousFinalePrius::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<BossBotNefariousFinalePrius> {
		if (incoming_type_id == BossBotNefariousFinalePrius::type_id) {
			return std::make_shared<BossBotNefariousFinalePrius>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
