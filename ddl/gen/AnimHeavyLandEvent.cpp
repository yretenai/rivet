// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/AnimHeavyLandEvent.hpp>

namespace rivet::ddl::generated {
	AnimHeavyLandEvent::AnimHeavyLandEvent([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): AnimMediumLandEvent(serialized) {

	}

	[[nodiscard]] auto
	AnimHeavyLandEvent::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	AnimHeavyLandEvent::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<AnimHeavyLandEvent> {
		if (incoming_type_id == AnimHeavyLandEvent::type_id) {
			return std::make_shared<AnimHeavyLandEvent>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
