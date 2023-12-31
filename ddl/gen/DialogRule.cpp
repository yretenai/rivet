// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/DialogRuleGame.hpp>
#include <rivet/ddl/generated/Line.hpp>
#include <rivet/ddl/generated/DEVOFlexibleCriterion.hpp> 

#include <rivet/ddl/generated/DialogRule.hpp>

namespace rivet::ddl::generated {
	DialogRule::DialogRule([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		TriggerEvent = serialized->get_enum<rivet::ddl::generated::x6be956dd>(TriggerEvent_type_id, rivet::ddl::generated::x6be956dd_values);
		DialogTag = serialized->get_string(DialogTag_type_id);
		Cooldown = serialized->get_float(Cooldown_type_id);
		CooldownGroup = serialized->get_string(CooldownGroup_type_id);
		GroupCooldownTime = serialized->get_float(GroupCooldownTime_type_id);
		AnswerTagStart = serialized->get_string(AnswerTagStart_type_id);
		AnswerTagEnd = serialized->get_string(AnswerTagEnd_type_id);
		ObservedTriggerEvent = serialized->get_enum<rivet::ddl::generated::x6be956dd>(ObservedTriggerEvent_type_id, rivet::ddl::generated::x6be956dd_values);
		TargetType = serialized->get_string(TargetType_type_id);
		HeroInRegion = serialized->get_string(HeroInRegion_type_id);
		DelayTime = serialized->get_float(DelayTime_type_id);
		NoRepeatsUntilAllPlayed = serialized->get_bool(NoRepeatsUntilAllPlayed_type_id);
		OtherCriteria = serialized->unwrap_into_many<rivet::ddl::generated::DEVOFlexibleCriterion>(OtherCriteria_type_id);
		Lines = serialized->unwrap_into<rivet::ddl::generated::Line>(Lines_type_id); 
	}

	[[nodiscard]] auto
	DialogRule::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	DialogRule::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<DialogRule> {
		if (incoming_type_id == DialogRule::type_id) {
			return std::make_shared<DialogRule>(serialized);
		}

		auto DialogRuleGame_ptr = DialogRuleGame::from_substruct(incoming_type_id, serialized);
		if (DialogRuleGame_ptr != nullptr) {
			return DialogRuleGame_ptr;
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
