// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/AmmoPickupSpawnControllerPrius.hpp> 

#include <rivet/ddl/generated/PickupSpawnControllerPrius.hpp>

namespace rivet::ddl::generated {
	PickupSpawnControllerPrius::PickupSpawnControllerPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		SpawnLocationGroup = serialized->get_uint64(SpawnLocationGroup_type_id, 0ull);
		PickupActor = serialized->get_string(PickupActor_type_id, {});
		StartActive = serialized->get_int32(StartActive_type_id, -1);
		FillMax = serialized->get_int32(FillMax_type_id, -1);
		MinHeroDistance = serialized->get_float(MinHeroDistance_type_id, 0.000000f);
		MinSpawnDelay = serialized->get_float(MinSpawnDelay_type_id, 3.000000f);
		MaxSpawnDelay = serialized->get_float(MaxSpawnDelay_type_id, 6.000000f); 
	}

	[[nodiscard]] auto
	PickupSpawnControllerPrius::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	PickupSpawnControllerPrius::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<PickupSpawnControllerPrius> {
		if (incoming_type_id == PickupSpawnControllerPrius::type_id) {
			return std::make_shared<PickupSpawnControllerPrius>(serialized);
		}

		auto AmmoPickupSpawnControllerPrius_ptr = AmmoPickupSpawnControllerPrius::from_substruct(incoming_type_id, serialized);
		if (AmmoPickupSpawnControllerPrius_ptr != nullptr) {
			return AmmoPickupSpawnControllerPrius_ptr;
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
