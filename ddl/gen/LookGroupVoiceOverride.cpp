// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/LookGroupVoiceOverride.hpp>

namespace rivet::ddl::generated {
	LookGroupVoiceOverride::LookGroupVoiceOverride([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		LookGroups = serialized->get_strings(LookGroups_type_id);
		OverrideVoiceMin = serialized->get_enum<rivet::ddl::generated::Voice>(OverrideVoiceMin_type_id, rivet::ddl::generated::Voice_values);
		OverrideVoiceMax = serialized->get_enum<rivet::ddl::generated::Voice>(OverrideVoiceMax_type_id, rivet::ddl::generated::Voice_values); 
	}

	[[nodiscard]] auto
	LookGroupVoiceOverride::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	LookGroupVoiceOverride::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<LookGroupVoiceOverride> {
		if (incoming_type_id == LookGroupVoiceOverride::type_id) {
			return std::make_shared<LookGroupVoiceOverride>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated