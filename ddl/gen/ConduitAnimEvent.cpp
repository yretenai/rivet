// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/ConduitAnimEvent.hpp>

namespace rivet::ddl::generated {
	ConduitAnimEvent::ConduitAnimEvent([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): EventBase(serialized) {
		Label = serialized->get_string(Label_type_id, {});
		Value = serialized->get_float(Value_type_id, 0.000000);
		TriggerLocator = serialized->get_string(TriggerLocator_type_id, {}); 
	}

	[[nodiscard]] auto
	ConduitAnimEvent::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	ConduitAnimEvent::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<ConduitAnimEvent> {
		if (incoming_type_id == ConduitAnimEvent::type_id) {
			return std::make_shared<ConduitAnimEvent>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
