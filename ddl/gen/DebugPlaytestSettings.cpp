// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/DebugPlaytestSettings.hpp>

namespace rivet::ddl::generated {
	DebugPlaytestSettings::DebugPlaytestSettings([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		Enabled = serialized->get_bool(Enabled_type_id);
		PlaytestName = serialized->get_string(PlaytestName_type_id);
		ForceEnableSurveyScreens = serialized->get_bool(ForceEnableSurveyScreens_type_id); 
	}

	[[nodiscard]] auto
	DebugPlaytestSettings::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	DebugPlaytestSettings::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<DebugPlaytestSettings> {
		if (incoming_type_id == DebugPlaytestSettings::type_id) {
			return std::make_shared<DebugPlaytestSettings>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
