// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/FinaleNefMechDamageStage3Event.hpp>

namespace rivet::ddl::generated {
	FinaleNefMechDamageStage3Event::FinaleNefMechDamageStage3Event([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): EventBase(serialized) {

	}

	[[nodiscard]] auto
	FinaleNefMechDamageStage3Event::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	FinaleNefMechDamageStage3Event::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<FinaleNefMechDamageStage3Event> {
		if (incoming_type_id == FinaleNefMechDamageStage3Event::type_id) {
			return std::make_shared<FinaleNefMechDamageStage3Event>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
