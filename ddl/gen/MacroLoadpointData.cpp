// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/GameMacroLoadpointData.hpp>
#include <rivet/ddl/generated/AssetReferenceDef.hpp> 

#include <rivet/ddl/generated/MacroLoadpointData.hpp>

namespace rivet::ddl::generated {
	MacroLoadpointData::MacroLoadpointData([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		MissionGraph = serialized->unwrap_into<rivet::ddl::generated::AssetReferenceDef>(MissionGraph_type_id);
		MissionName = serialized->get_string(MissionName_type_id);
		ObjectiveName = serialized->get_string(ObjectiveName_type_id);
		LoadpointNameLocTag = serialized->get_string(LoadpointNameLocTag_type_id);
		CheckpointName = serialized->get_string(CheckpointName_type_id); 
	}

	[[nodiscard]] auto
	MacroLoadpointData::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	MacroLoadpointData::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<MacroLoadpointData> {
		if (incoming_type_id == MacroLoadpointData::type_id) {
			return std::make_shared<MacroLoadpointData>(serialized);
		}

		auto GameMacroLoadpointData_ptr = GameMacroLoadpointData::from_substruct(incoming_type_id, serialized);
		if (GameMacroLoadpointData_ptr != nullptr) {
			return GameMacroLoadpointData_ptr;
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
