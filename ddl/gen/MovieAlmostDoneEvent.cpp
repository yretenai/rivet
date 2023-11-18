// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/MovieAlmostDoneEvent.hpp>

namespace rivet::ddl::generated {
	MovieAlmostDoneEvent::MovieAlmostDoneEvent([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): EventBase(serialized) {
		MovieHandle = serialized->get_uint16(MovieHandle_type_id); 
	}

	[[nodiscard]] auto
	MovieAlmostDoneEvent::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	MovieAlmostDoneEvent::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<MovieAlmostDoneEvent> {
		if (incoming_type_id == MovieAlmostDoneEvent::type_id) {
			return std::make_shared<MovieAlmostDoneEvent>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
