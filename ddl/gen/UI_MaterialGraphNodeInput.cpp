// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/MaterialNodeUserInput.hpp>
#include <rivet/ddl/generated/MaterialNodePortUI.hpp>
#include <rivet/ddl/generated/MaterialNodeInputPort.hpp> 

#include <rivet/ddl/generated/UI_MaterialGraphNodeInput.hpp>

namespace rivet::ddl::generated {
	UI_MaterialGraphNodeInput::UI_MaterialGraphNodeInput([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		Input = serialized->unwrap_into<rivet::ddl::generated::MaterialNodeInputPort>(Input_type_id);
		IsConnected = serialized->get_bool(IsConnected_type_id);
		PortUI = serialized->unwrap_into<rivet::ddl::generated::MaterialNodePortUI>(PortUI_type_id);
		UserInput = serialized->unwrap_into<rivet::ddl::generated::MaterialNodeUserInput>(UserInput_type_id);
		InternalSortOrder = serialized->get_int32(InternalSortOrder_type_id); 
	}

	[[nodiscard]] auto
	UI_MaterialGraphNodeInput::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	UI_MaterialGraphNodeInput::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<UI_MaterialGraphNodeInput> {
		if (incoming_type_id == UI_MaterialGraphNodeInput::type_id) {
			return std::make_shared<UI_MaterialGraphNodeInput>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
