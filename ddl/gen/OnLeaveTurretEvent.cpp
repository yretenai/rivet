// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/OnLeaveTurretEvent.hpp>

namespace rivet::ddl::generated {
	OnLeaveTurretEvent::OnLeaveTurretEvent([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): EventBase(serialized) {

	}

	[[nodiscard]] auto
	OnLeaveTurretEvent::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	OnLeaveTurretEvent::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<OnLeaveTurretEvent> {
		if (incoming_type_id == OnLeaveTurretEvent::type_id) {
			return std::make_shared<OnLeaveTurretEvent>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
