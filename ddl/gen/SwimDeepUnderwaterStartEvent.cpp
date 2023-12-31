// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/SwimDeepUnderwaterStartEvent.hpp>

namespace rivet::ddl::generated {
	SwimDeepUnderwaterStartEvent::SwimDeepUnderwaterStartEvent([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): EventBase(serialized) {

	}

	[[nodiscard]] auto
	SwimDeepUnderwaterStartEvent::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	SwimDeepUnderwaterStartEvent::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<SwimDeepUnderwaterStartEvent> {
		if (incoming_type_id == SwimDeepUnderwaterStartEvent::type_id) {
			return std::make_shared<SwimDeepUnderwaterStartEvent>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
