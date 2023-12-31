// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/CritterLocationWeights.hpp>
#include <rivet/ddl/generated/CritterTypeData.hpp> 

#include <rivet/ddl/generated/AutoPlaceCritterSystemConfig.hpp>

namespace rivet::ddl::generated {
	AutoPlaceCritterSystemConfig::AutoPlaceCritterSystemConfig([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): ConfigBase(serialized) {
		CritterTypes = serialized->unwrap_into_many<rivet::ddl::generated::CritterTypeData>(CritterTypes_type_id);
		MinSpawnDistance = serialized->get_float(MinSpawnDistance_type_id);
		IdealSpawnDistance = serialized->get_float(IdealSpawnDistance_type_id);
		MaxActiveDistance = serialized->get_float(MaxActiveDistance_type_id);
		PanicRadius = serialized->get_float(PanicRadius_type_id);
		CombatPanicRadius = serialized->get_float(CombatPanicRadius_type_id);
		RefreshPeriod = serialized->get_float(RefreshPeriod_type_id);
		LocationSelectionHeuristic = serialized->unwrap_into<rivet::ddl::generated::CritterLocationWeights>(LocationSelectionHeuristic_type_id); 
	}

	[[nodiscard]] auto
	AutoPlaceCritterSystemConfig::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	AutoPlaceCritterSystemConfig::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<AutoPlaceCritterSystemConfig> {
		if (incoming_type_id == AutoPlaceCritterSystemConfig::type_id) {
			return std::make_shared<AutoPlaceCritterSystemConfig>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
