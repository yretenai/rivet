// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/AboutToLandLongFallEvent.hpp>

namespace rivet::ddl::generated {
	AboutToLandLongFallEvent::AboutToLandLongFallEvent([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): EventBase(serialized) {

	}

	[[nodiscard]] auto
	AboutToLandLongFallEvent::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	AboutToLandLongFallEvent::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<AboutToLandLongFallEvent> {
		if (incoming_type_id == AboutToLandLongFallEvent::type_id) {
			return std::make_shared<AboutToLandLongFallEvent>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
