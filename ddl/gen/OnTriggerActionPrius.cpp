// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/OnTriggerActionPrius.hpp>

namespace rivet::ddl::generated {
	OnTriggerActionPrius::OnTriggerActionPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		ActionType = serialized->get_enum<rivet::ddl::generated::x10228b34>(ActionType_type_id, rivet::ddl::generated::x10228b34_values, rivet::ddl::generated::x10228b34::Events);
		GroupName = serialized->get_string(GroupName_type_id, "");
		InitListening = serialized->get_bool(InitListening_type_id, true);
		SignalMax = serialized->get_int32(SignalMax_type_id, 1);
		ListenForTrigger = serialized->get_bool(ListenForTrigger_type_id, true);
		ListenForUntrigger = serialized->get_bool(ListenForUntrigger_type_id, true); 
	}

	[[nodiscard]] auto
	OnTriggerActionPrius::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	OnTriggerActionPrius::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<OnTriggerActionPrius> {
		if (incoming_type_id == OnTriggerActionPrius::type_id) {
			return std::make_shared<OnTriggerActionPrius>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
