// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/TriggerResponderBasePrius.hpp> 

#include <rivet/ddl/generated/TriggerSwitchResponseEntry.hpp>

namespace rivet::ddl::generated {
	TriggerSwitchResponseEntry::TriggerSwitchResponseEntry([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		Response = serialized->unwrap_into<rivet::ddl::generated::TriggerResponderBasePrius>(Response_type_id);
		Delay = serialized->get_float(Delay_type_id, 0.000000f); 
	}

	[[nodiscard]] auto
	TriggerSwitchResponseEntry::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	TriggerSwitchResponseEntry::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<TriggerSwitchResponseEntry> {
		if (incoming_type_id == TriggerSwitchResponseEntry::type_id) {
			return std::make_shared<TriggerSwitchResponseEntry>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
