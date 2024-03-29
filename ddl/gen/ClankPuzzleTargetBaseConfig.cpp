// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/ClankPuzzleTargetConfig.hpp>
#include <rivet/ddl/generated/ClankPuzzleTargetColorData.hpp>
#include <rivet/ddl/generated/ClankPuzzleTimeData.hpp> 

#include <rivet/ddl/generated/ClankPuzzleTargetBaseConfig.hpp>

namespace rivet::ddl::generated {
	ClankPuzzleTargetBaseConfig::ClankPuzzleTargetBaseConfig([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): ConfigBase(serialized) {
		TargetType = serialized->get_bitset<rivet::ddl::generated::xf32dacf0>(TargetType_type_id, rivet::ddl::generated::xf32dacf0_values, 0u);
		CanAbsorb = serialized->get_bool(CanAbsorb_type_id, false);
		SpeedUpTime = serialized->unwrap_into<rivet::ddl::generated::ClankPuzzleTimeData>(SpeedUpTime_type_id);
		SlowDownTime = serialized->unwrap_into<rivet::ddl::generated::ClankPuzzleTimeData>(SlowDownTime_type_id);
		GravityTime = serialized->unwrap_into<rivet::ddl::generated::ClankPuzzleTimeData>(GravityTime_type_id);
		EnergyTime = serialized->unwrap_into<rivet::ddl::generated::ClankPuzzleTimeData>(EnergyTime_type_id);
		SpeedUpMaterial = serialized->get_string(SpeedUpMaterial_type_id, {});
		SlowDownMaterial = serialized->get_string(SlowDownMaterial_type_id, {});
		GravityMaterial = serialized->get_string(GravityMaterial_type_id, {});
		EnergyMaterial = serialized->get_string(EnergyMaterial_type_id, {});
		MaterialGraphColoring = serialized->unwrap_into<rivet::ddl::generated::ClankPuzzleTargetColorData>(MaterialGraphColoring_type_id); 
	}

	[[nodiscard]] auto
	ClankPuzzleTargetBaseConfig::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	ClankPuzzleTargetBaseConfig::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<ClankPuzzleTargetBaseConfig> {
		if (incoming_type_id == ClankPuzzleTargetBaseConfig::type_id) {
			return std::make_shared<ClankPuzzleTargetBaseConfig>(serialized);
		}

		auto ClankPuzzleTargetConfig_ptr = ClankPuzzleTargetConfig::from_substruct(incoming_type_id, serialized);
		if (ClankPuzzleTargetConfig_ptr != nullptr) {
			return ClankPuzzleTargetConfig_ptr;
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
