// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/BurstPistolProjectileFlyingStartEvent.hpp>

namespace rivet::ddl::generated {
	BurstPistolProjectileFlyingStartEvent::BurstPistolProjectileFlyingStartEvent([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): ProjectileFlyingStartEvent(serialized) {

	}

	[[nodiscard]] auto
	BurstPistolProjectileFlyingStartEvent::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	BurstPistolProjectileFlyingStartEvent::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<BurstPistolProjectileFlyingStartEvent> {
		if (incoming_type_id == BurstPistolProjectileFlyingStartEvent::type_id) {
			return std::make_shared<BurstPistolProjectileFlyingStartEvent>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
