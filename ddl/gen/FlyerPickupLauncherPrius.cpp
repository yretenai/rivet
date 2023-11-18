// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/FlyerPickupLauncherPrius.hpp>

namespace rivet::ddl::generated {
	FlyerPickupLauncherPrius::FlyerPickupLauncherPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		CapsuleHeight = serialized->get_float(CapsuleHeight_type_id);
		CapsuleRadius = serialized->get_float(CapsuleRadius_type_id);
		CapsuleUpOffset = serialized->get_float(CapsuleUpOffset_type_id);
		DrawDebugDetection = serialized->get_bool(DrawDebugDetection_type_id);
		PickupActor = serialized->get_string(PickupActor_type_id);
		ShotConfig = serialized->get_string(ShotConfig_type_id); 
	}

	[[nodiscard]] auto
	FlyerPickupLauncherPrius::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	FlyerPickupLauncherPrius::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<FlyerPickupLauncherPrius> {
		if (incoming_type_id == FlyerPickupLauncherPrius::type_id) {
			return std::make_shared<FlyerPickupLauncherPrius>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
