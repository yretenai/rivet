// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/FinaleNefMechDamageStage1Event.hpp>

namespace rivet::ddl::generated {
	FinaleNefMechDamageStage1Event::FinaleNefMechDamageStage1Event([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): EventBase(serialized) {

	}

	[[nodiscard]] auto
	FinaleNefMechDamageStage1Event::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	FinaleNefMechDamageStage1Event::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<FinaleNefMechDamageStage1Event> {
		if (incoming_type_id == FinaleNefMechDamageStage1Event::type_id) {
			return std::make_shared<FinaleNefMechDamageStage1Event>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
