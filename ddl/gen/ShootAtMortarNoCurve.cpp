// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/AimModWrapper.hpp> 

#include <rivet/ddl/generated/ShootAtMortarNoCurve.hpp>

namespace rivet::ddl::generated {
	ShootAtMortarNoCurve::ShootAtMortarNoCurve([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): ShootAtMortarFiringStyle(serialized) {
		UseAimingComponent = serialized->get_bool(UseAimingComponent_type_id);
		StartAimModOnStateStart = serialized->get_bool(StartAimModOnStateStart_type_id);
		EndAimModsOnShootEnd = serialized->get_bool(EndAimModsOnShootEnd_type_id);
		MimicShotRate = serialized->get_float(MimicShotRate_type_id);
		AimMods = serialized->unwrap_into_many<rivet::ddl::generated::AimModWrapper>(AimMods_type_id); 
	}

	[[nodiscard]] auto
	ShootAtMortarNoCurve::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	ShootAtMortarNoCurve::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<ShootAtMortarNoCurve> {
		if (incoming_type_id == ShootAtMortarNoCurve::type_id) {
			return std::make_shared<ShootAtMortarNoCurve>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
