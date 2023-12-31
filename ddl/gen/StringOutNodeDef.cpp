// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/OutputPlugString.hpp> 

#include <rivet/ddl/generated/StringOutNodeDef.hpp>

namespace rivet::ddl::generated {
	StringOutNodeDef::StringOutNodeDef([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): NodeBaseDef(serialized) {
		Out = serialized->unwrap_into<rivet::ddl::generated::OutputPlugString>(Out_type_id); 
	}

	[[nodiscard]] auto
	StringOutNodeDef::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	StringOutNodeDef::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<StringOutNodeDef> {
		if (incoming_type_id == StringOutNodeDef::type_id) {
			return std::make_shared<StringOutNodeDef>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
