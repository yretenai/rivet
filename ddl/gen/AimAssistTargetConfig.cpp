// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/AimAssistAutoTargetLocationListItem.hpp>
#include <rivet/ddl/generated/AimAssistSnapLocationListItem.hpp>
#include <rivet/ddl/generated/AimAssistTargetZoneListItem.hpp> 

#include <rivet/ddl/generated/AimAssistTargetConfig.hpp>

namespace rivet::ddl::generated {
	AimAssistTargetConfig::AimAssistTargetConfig([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): ConfigBase(serialized) {
		AssistZones = serialized->unwrap_into_many<rivet::ddl::generated::AimAssistTargetZoneListItem>(AssistZones_type_id);
		SnapLocations = serialized->unwrap_into_many<rivet::ddl::generated::AimAssistSnapLocationListItem>(SnapLocations_type_id);
		AutoTargetLocations = serialized->unwrap_into_many<rivet::ddl::generated::AimAssistAutoTargetLocationListItem>(AutoTargetLocations_type_id);
		TargetPriority = serialized->get_float(TargetPriority_type_id);
		StrafeCenteringScale = serialized->get_float(StrafeCenteringScale_type_id);
		Enabled = serialized->get_bool(Enabled_type_id);
		BSphereInclusion = serialized->get_bool(BSphereInclusion_type_id); 
	}

	[[nodiscard]] auto
	AimAssistTargetConfig::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	AimAssistTargetConfig::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<AimAssistTargetConfig> {
		if (incoming_type_id == AimAssistTargetConfig::type_id) {
			return std::make_shared<AimAssistTargetConfig>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
