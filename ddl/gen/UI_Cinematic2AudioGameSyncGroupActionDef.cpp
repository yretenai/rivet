// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/WwiseSwitch.hpp>
#include <rivet/ddl/generated/WwiseState.hpp> 

#include <rivet/ddl/generated/UI_Cinematic2AudioGameSyncGroupActionDef.hpp>

namespace rivet::ddl::generated {
	UI_Cinematic2AudioGameSyncGroupActionDef::UI_Cinematic2AudioGameSyncGroupActionDef([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		Id = serialized->get_uint64(Id_type_id);
		Time = serialized->get_float(Time_type_id);
		DurationType = serialized->get_enum<rivet::ddl::generated::x29c933e2>(DurationType_type_id, rivet::ddl::generated::x29c933e2_values);
		Duration = serialized->get_float(Duration_type_id);
		ShowStateGroup = serialized->get_bool(ShowStateGroup_type_id);
		ShowSwitchGroup = serialized->get_bool(ShowSwitchGroup_type_id);
		StateGroup = serialized->unwrap_into<rivet::ddl::generated::WwiseState>(StateGroup_type_id);
		SwitchGroup = serialized->unwrap_into<rivet::ddl::generated::WwiseSwitch>(SwitchGroup_type_id); 
	}

	[[nodiscard]] auto
	UI_Cinematic2AudioGameSyncGroupActionDef::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	UI_Cinematic2AudioGameSyncGroupActionDef::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<UI_Cinematic2AudioGameSyncGroupActionDef> {
		if (incoming_type_id == UI_Cinematic2AudioGameSyncGroupActionDef::type_id) {
			return std::make_shared<UI_Cinematic2AudioGameSyncGroupActionDef>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated