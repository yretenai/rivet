// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/ScriptVarUpdateFloat.hpp>

namespace rivet::ddl::generated {
	ScriptVarUpdateFloat::ScriptVarUpdateFloat([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		Value = serialized->get_float(Value_type_id); 
	}

	[[nodiscard]] auto
	ScriptVarUpdateFloat::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	ScriptVarUpdateFloat::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<ScriptVarUpdateFloat> {
		if (incoming_type_id == ScriptVarUpdateFloat::type_id) {
			return std::make_shared<ScriptVarUpdateFloat>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
