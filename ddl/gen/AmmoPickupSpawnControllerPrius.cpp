// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/AmmoPickupSpawnControllerPrius.hpp>

namespace rivet::ddl::generated {
	AmmoPickupSpawnControllerPrius::AmmoPickupSpawnControllerPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): PickupSpawnControllerPrius(serialized) {
		ValidateAmmoNeed = serialized->get_bool(ValidateAmmoNeed_type_id, true); 
	}

	[[nodiscard]] auto
	AmmoPickupSpawnControllerPrius::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	AmmoPickupSpawnControllerPrius::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<AmmoPickupSpawnControllerPrius> {
		if (incoming_type_id == AmmoPickupSpawnControllerPrius::type_id) {
			return std::make_shared<AmmoPickupSpawnControllerPrius>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
