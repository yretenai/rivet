// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/GroundResponseOffEvent.hpp>

namespace rivet::ddl::generated {
	GroundResponseOffEvent::GroundResponseOffEvent([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): EventBase(serialized) {

	}

	[[nodiscard]] auto
	GroundResponseOffEvent::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	GroundResponseOffEvent::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<GroundResponseOffEvent> {
		if (incoming_type_id == GroundResponseOffEvent::type_id) {
			return std::make_shared<GroundResponseOffEvent>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
