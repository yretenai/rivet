// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/MannableTurretRocketPrius.hpp>

namespace rivet::ddl::generated {
	MannableTurretRocketPrius::MannableTurretRocketPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		FreeYaw = serialized->get_bool(FreeYaw_type_id);
		YawLimitMin = serialized->get_float(YawLimitMin_type_id);
		YawLimitMax = serialized->get_float(YawLimitMax_type_id);
		PitchLimitMin = serialized->get_float(PitchLimitMin_type_id);
		PitchLimitMax = serialized->get_float(PitchLimitMax_type_id);
		OnlyHeroes = serialized->get_bool(OnlyHeroes_type_id);
		MaxYawSpeed = serialized->get_float(MaxYawSpeed_type_id);
		MaxPitchSpeed = serialized->get_float(MaxPitchSpeed_type_id); 
	}

	[[nodiscard]] auto
	MannableTurretRocketPrius::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	MannableTurretRocketPrius::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<MannableTurretRocketPrius> {
		if (incoming_type_id == MannableTurretRocketPrius::type_id) {
			return std::make_shared<MannableTurretRocketPrius>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
