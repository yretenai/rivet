// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/ScriptActionTypeProperties.hpp>

namespace rivet::ddl::generated {
	ScriptActionTypeProperties::ScriptActionTypeProperties([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		Type = serialized->get_enum<rivet::ddl::generated::x10228b34>(Type_type_id, rivet::ddl::generated::x10228b34_values, rivet::ddl::generated::x10228b34::Unsorted);
		Color = serialized->get_uint32(Color_type_id, 0); 
	}

	[[nodiscard]] auto
	ScriptActionTypeProperties::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	ScriptActionTypeProperties::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<ScriptActionTypeProperties> {
		if (incoming_type_id == ScriptActionTypeProperties::type_id) {
			return std::make_shared<ScriptActionTypeProperties>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
