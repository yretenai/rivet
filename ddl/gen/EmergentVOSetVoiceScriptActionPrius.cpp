// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/EmergentVOSetVoiceScriptActionPrius.hpp>

namespace rivet::ddl::generated {
	EmergentVOSetVoiceScriptActionPrius::EmergentVOSetVoiceScriptActionPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		ActionType = serialized->get_enum<rivet::ddl::generated::x10228b34>(ActionType_type_id, rivet::ddl::generated::x10228b34_values, rivet::ddl::generated::x10228b34::Sound);
		Voice = serialized->get_enum<rivet::ddl::generated::Voice>(Voice_type_id, rivet::ddl::generated::Voice_values, rivet::ddl::generated::Voice::unused); 
	}

	[[nodiscard]] auto
	EmergentVOSetVoiceScriptActionPrius::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	EmergentVOSetVoiceScriptActionPrius::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<EmergentVOSetVoiceScriptActionPrius> {
		if (incoming_type_id == EmergentVOSetVoiceScriptActionPrius::type_id) {
			return std::make_shared<EmergentVOSetVoiceScriptActionPrius>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
