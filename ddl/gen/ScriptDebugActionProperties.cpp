// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/ScriptDebugActionProperty.hpp> 

#include <rivet/ddl/generated/ScriptDebugActionProperties.hpp>

namespace rivet::ddl::generated {
	ScriptDebugActionProperties::ScriptDebugActionProperties([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		ActionTuid = serialized->get_uint64(ActionTuid_type_id);
		ZoneId = serialized->get_uint64(ZoneId_type_id);
		Properties = serialized->unwrap_into_many<rivet::ddl::generated::ScriptDebugActionProperty>(Properties_type_id); 
	}

	[[nodiscard]] auto
	ScriptDebugActionProperties::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	ScriptDebugActionProperties::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<ScriptDebugActionProperties> {
		if (incoming_type_id == ScriptDebugActionProperties::type_id) {
			return std::make_shared<ScriptDebugActionProperties>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated