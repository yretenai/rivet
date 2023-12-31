// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/WeaponWarpRifleSpinDownFinishedEvent.hpp>

namespace rivet::ddl::generated {
	WeaponWarpRifleSpinDownFinishedEvent::WeaponWarpRifleSpinDownFinishedEvent([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): EventBase(serialized) {

	}

	[[nodiscard]] auto
	WeaponWarpRifleSpinDownFinishedEvent::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	WeaponWarpRifleSpinDownFinishedEvent::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<WeaponWarpRifleSpinDownFinishedEvent> {
		if (incoming_type_id == WeaponWarpRifleSpinDownFinishedEvent::type_id) {
			return std::make_shared<WeaponWarpRifleSpinDownFinishedEvent>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
