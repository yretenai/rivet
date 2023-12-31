// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/OutputPlugBoolean.hpp>
#include <rivet/ddl/generated/InputPlugBoolean.hpp>
#include <rivet/ddl/generated/AssetReferenceDef.hpp> 

#include <rivet/ddl/generated/MissionNodeGameDef_Tools.hpp>

namespace rivet::ddl::generated {
	MissionNodeGameDef_Tools::MissionNodeGameDef_Tools([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): NodeBaseDef(serialized) {
		MissionName = serialized->get_string(MissionName_type_id);
		ObjectiveGraph = serialized->unwrap_into<rivet::ddl::generated::AssetReferenceDef>(ObjectiveGraph_type_id);
		UnlockBehavior = serialized->get_enum<rivet::ddl::generated::xc1d164ee>(UnlockBehavior_type_id, rivet::ddl::generated::xc1d164ee_values);
		Inputs = serialized->unwrap_into_many<rivet::ddl::generated::InputPlugBoolean>(Inputs_type_id);
		Output = serialized->unwrap_into<rivet::ddl::generated::OutputPlugBoolean>(Output_type_id); 
	}

	[[nodiscard]] auto
	MissionNodeGameDef_Tools::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	MissionNodeGameDef_Tools::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<MissionNodeGameDef_Tools> {
		if (incoming_type_id == MissionNodeGameDef_Tools::type_id) {
			return std::make_shared<MissionNodeGameDef_Tools>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
