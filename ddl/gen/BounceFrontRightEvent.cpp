// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/BounceFrontRightEvent.hpp>

namespace rivet::ddl::generated {
	BounceFrontRightEvent::BounceFrontRightEvent([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): BounceEvent(serialized) {

	}

	[[nodiscard]] auto
	BounceFrontRightEvent::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	BounceFrontRightEvent::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<BounceFrontRightEvent> {
		if (incoming_type_id == BounceFrontRightEvent::type_id) {
			return std::make_shared<BounceFrontRightEvent>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
