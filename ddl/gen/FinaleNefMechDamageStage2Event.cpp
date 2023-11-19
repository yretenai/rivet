// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/FinaleNefMechDamageStage2Event.hpp>

namespace rivet::ddl::generated {
	FinaleNefMechDamageStage2Event::FinaleNefMechDamageStage2Event([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): EventBase(serialized) {

	}

	[[nodiscard]] auto
	FinaleNefMechDamageStage2Event::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	FinaleNefMechDamageStage2Event::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<FinaleNefMechDamageStage2Event> {
		if (incoming_type_id == FinaleNefMechDamageStage2Event::type_id) {
			return std::make_shared<FinaleNefMechDamageStage2Event>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated