// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/ScriptedShotConditionalBasePrius.hpp> 

#include <rivet/ddl/generated/XorScriptedShotConditionalPrius.hpp>

namespace rivet::ddl::generated {
	XorScriptedShotConditionalPrius::XorScriptedShotConditionalPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): ScriptedShotConditionalBasePrius(serialized) {
		Cond1 = serialized->unwrap_into<rivet::ddl::generated::ScriptedShotConditionalBasePrius>(Cond1_type_id);
		Cond2 = serialized->unwrap_into<rivet::ddl::generated::ScriptedShotConditionalBasePrius>(Cond2_type_id); 
	}

	auto
	XorScriptedShotConditionalPrius::get_type_id() const noexcept -> rivet::rivet_type_id {
		return type_id;
	}

	[[nodiscard]] auto
	XorScriptedShotConditionalPrius::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	XorScriptedShotConditionalPrius::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<XorScriptedShotConditionalPrius> {
		if (incoming_type_id == XorScriptedShotConditionalPrius::type_id) {
			return std::make_shared<XorScriptedShotConditionalPrius>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
