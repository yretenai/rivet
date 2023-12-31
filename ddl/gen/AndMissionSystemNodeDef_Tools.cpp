// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/OutputPlugBoolean.hpp>
#include <rivet/ddl/generated/InputPlugBoolean.hpp> 

#include <rivet/ddl/generated/AndMissionSystemNodeDef_Tools.hpp>

namespace rivet::ddl::generated {
	AndMissionSystemNodeDef_Tools::AndMissionSystemNodeDef_Tools([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): NodeBaseDef(serialized) {
		Inputs = serialized->unwrap_into_many<rivet::ddl::generated::InputPlugBoolean>(Inputs_type_id);
		Output = serialized->unwrap_into<rivet::ddl::generated::OutputPlugBoolean>(Output_type_id); 
	}

	[[nodiscard]] auto
	AndMissionSystemNodeDef_Tools::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	AndMissionSystemNodeDef_Tools::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<AndMissionSystemNodeDef_Tools> {
		if (incoming_type_id == AndMissionSystemNodeDef_Tools::type_id) {
			return std::make_shared<AndMissionSystemNodeDef_Tools>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
