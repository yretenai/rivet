// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/BotComboConditionHaveArcFinderPrius.hpp>

namespace rivet::ddl::generated {
	BotComboConditionHaveArcFinderPrius::BotComboConditionHaveArcFinderPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): BotComboConditionBasePrius(serialized) {
		EmitLocatorName = serialized->get_string(EmitLocatorName_type_id);
		DesiredFlightTime = serialized->get_float(DesiredFlightTime_type_id);
		MinSpeed = serialized->get_float(MinSpeed_type_id);
		MaxSpeed = serialized->get_float(MaxSpeed_type_id);
		ArcHeight0 = serialized->get_float(ArcHeight0_type_id);
		ArcHeight1 = serialized->get_float(ArcHeight1_type_id);
		ArcHeight2 = serialized->get_float(ArcHeight2_type_id);
		UseLastNavPosition = serialized->get_bool(UseLastNavPosition_type_id); 
	}

	auto
	BotComboConditionHaveArcFinderPrius::get_type_id() const noexcept -> rivet::rivet_type_id {
		return type_id;
	}

	[[nodiscard]] auto
	BotComboConditionHaveArcFinderPrius::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	BotComboConditionHaveArcFinderPrius::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<BotComboConditionHaveArcFinderPrius> {
		if (incoming_type_id == BotComboConditionHaveArcFinderPrius::type_id) {
			return std::make_shared<BotComboConditionHaveArcFinderPrius>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
