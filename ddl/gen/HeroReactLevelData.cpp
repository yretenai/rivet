// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/CameraShakingData.hpp> 

#include <rivet/ddl/generated/HeroReactLevelData.hpp>

namespace rivet::ddl::generated {
	HeroReactLevelData::HeroReactLevelData([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		DistanceScale = serialized->get_float(DistanceScale_type_id, 1.000000);
		AnimRateScale = serialized->get_float(AnimRateScale_type_id, 1.000000);
		ReReactCooldown = serialized->get_float(ReReactCooldown_type_id, 5.000000);
		CameraShake = serialized->unwrap_into<rivet::ddl::generated::CameraShakingData>(CameraShake_type_id); 
	}

	[[nodiscard]] auto
	HeroReactLevelData::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	HeroReactLevelData::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<HeroReactLevelData> {
		if (incoming_type_id == HeroReactLevelData::type_id) {
			return std::make_shared<HeroReactLevelData>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
