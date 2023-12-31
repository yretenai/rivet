// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/ShotMotionSchrodingerDisappearPrius.hpp>
#include <rivet/ddl/generated/ShotMotionSchrodingerOrbitPrius.hpp>
#include <rivet/ddl/generated/ShotDamageData.hpp> 

#include <rivet/ddl/generated/ShotSchrodingerPrius.hpp>

namespace rivet::ddl::generated {
	ShotSchrodingerPrius::ShotSchrodingerPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): ShotBasePrius(serialized) {
		ImpactDamage = serialized->unwrap_into<rivet::ddl::generated::ShotDamageData>(ImpactDamage_type_id);
		AttachedDamage = serialized->unwrap_into<rivet::ddl::generated::ShotDamageData>(AttachedDamage_type_id);
		AttachedData = serialized->unwrap_into<rivet::ddl::generated::ShotMotionSchrodingerOrbitPrius>(AttachedData_type_id);
		DisappearData = serialized->unwrap_into<rivet::ddl::generated::ShotMotionSchrodingerDisappearPrius>(DisappearData_type_id); 
	}

	[[nodiscard]] auto
	ShotSchrodingerPrius::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	ShotSchrodingerPrius::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<ShotSchrodingerPrius> {
		if (incoming_type_id == ShotSchrodingerPrius::type_id) {
			return std::make_shared<ShotSchrodingerPrius>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
