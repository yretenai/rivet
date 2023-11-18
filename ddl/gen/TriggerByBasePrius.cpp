// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/TriggerByOthersPrius.hpp>
#include <rivet/ddl/generated/TriggerByEventPrius.hpp>
#include <rivet/ddl/generated/TriggerByUpdateParentPrius.hpp>
#include <rivet/ddl/generated/TriggerByDistancePrius.hpp>
#include <rivet/ddl/generated/TriggerByAttackPrius.hpp>
#include <rivet/ddl/generated/TriggerConditionAlwaysPrius.hpp> 

#include <rivet/ddl/generated/TriggerByBasePrius.hpp>

namespace rivet::ddl::generated {
	TriggerByBasePrius::TriggerByBasePrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		StartEnabled = serialized->get_bool(StartEnabled_type_id);
		DoUntrigger = serialized->get_bool(DoUntrigger_type_id);
		GroupName = serialized->get_string(GroupName_type_id);
		Condition = serialized->unwrap_into<rivet::ddl::generated::TriggerConditionAlwaysPrius>(Condition_type_id); 
	}

	[[nodiscard]] auto
	TriggerByBasePrius::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	TriggerByBasePrius::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<TriggerByBasePrius> {
		if (incoming_type_id == TriggerByBasePrius::type_id) {
			return std::make_shared<TriggerByBasePrius>(serialized);
		}

		auto TriggerByAttackPrius_ptr = TriggerByAttackPrius::from_substruct(incoming_type_id, serialized);
		if (TriggerByAttackPrius_ptr != nullptr) {
			return TriggerByAttackPrius_ptr;
		}

		auto TriggerByDistancePrius_ptr = TriggerByDistancePrius::from_substruct(incoming_type_id, serialized);
		if (TriggerByDistancePrius_ptr != nullptr) {
			return TriggerByDistancePrius_ptr;
		}

		auto TriggerByUpdateParentPrius_ptr = TriggerByUpdateParentPrius::from_substruct(incoming_type_id, serialized);
		if (TriggerByUpdateParentPrius_ptr != nullptr) {
			return TriggerByUpdateParentPrius_ptr;
		}

		auto TriggerByEventPrius_ptr = TriggerByEventPrius::from_substruct(incoming_type_id, serialized);
		if (TriggerByEventPrius_ptr != nullptr) {
			return TriggerByEventPrius_ptr;
		}

		auto TriggerByOthersPrius_ptr = TriggerByOthersPrius::from_substruct(incoming_type_id, serialized);
		if (TriggerByOthersPrius_ptr != nullptr) {
			return TriggerByOthersPrius_ptr;
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
