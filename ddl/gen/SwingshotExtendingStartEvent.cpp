// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/SwingshotExtendingStartEvent.hpp>

namespace rivet::ddl::generated {
	SwingshotExtendingStartEvent::SwingshotExtendingStartEvent([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): EventBase(serialized) {

	}

	[[nodiscard]] auto
	SwingshotExtendingStartEvent::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	SwingshotExtendingStartEvent::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<SwingshotExtendingStartEvent> {
		if (incoming_type_id == SwingshotExtendingStartEvent::type_id) {
			return std::make_shared<SwingshotExtendingStartEvent>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated