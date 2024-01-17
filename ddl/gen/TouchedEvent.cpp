// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/TouchedEvent.hpp>

namespace rivet::ddl::generated {
	TouchedEvent::TouchedEvent([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): EventBase(serialized) {
		TouchType = serialized->get_enum<rivet::ddl::generated::TouchType>(TouchType_type_id, rivet::ddl::generated::TouchType_values, rivet::ddl::generated::TouchType::Touched);
		TouchingCount = serialized->get_int32(TouchingCount_type_id, 0);
		AllInside = serialized->get_bool(AllInside_type_id, false); 
	}

	[[nodiscard]] auto
	TouchedEvent::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	TouchedEvent::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<TouchedEvent> {
		if (incoming_type_id == TouchedEvent::type_id) {
			return std::make_shared<TouchedEvent>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
