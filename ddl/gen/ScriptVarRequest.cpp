// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/ScriptVarRequest.hpp>

namespace rivet::ddl::generated {
	ScriptVarRequest::ScriptVarRequest([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		VarTuid = serialized->get_uint64(VarTuid_type_id);
		PropertyId = serialized->get_uint32(PropertyId_type_id); 
	}

	[[nodiscard]] auto
	ScriptVarRequest::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	ScriptVarRequest::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<ScriptVarRequest> {
		if (incoming_type_id == ScriptVarRequest::type_id) {
			return std::make_shared<ScriptVarRequest>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
