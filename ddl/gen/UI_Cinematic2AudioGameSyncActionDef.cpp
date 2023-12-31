// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/WwiseTrigger.hpp> 

#include <rivet/ddl/generated/UI_Cinematic2AudioGameSyncActionDef.hpp>

namespace rivet::ddl::generated {
	UI_Cinematic2AudioGameSyncActionDef::UI_Cinematic2AudioGameSyncActionDef([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		Id = serialized->get_uint64(Id_type_id);
		Time = serialized->get_float(Time_type_id);
		DurationType = serialized->get_enum<rivet::ddl::generated::x29c933e2>(DurationType_type_id, rivet::ddl::generated::x29c933e2_values);
		Duration = serialized->get_float(Duration_type_id);
		Trigger = serialized->unwrap_into<rivet::ddl::generated::WwiseTrigger>(Trigger_type_id); 
	}

	[[nodiscard]] auto
	UI_Cinematic2AudioGameSyncActionDef::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	UI_Cinematic2AudioGameSyncActionDef::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<UI_Cinematic2AudioGameSyncActionDef> {
		if (incoming_type_id == UI_Cinematic2AudioGameSyncActionDef::type_id) {
			return std::make_shared<UI_Cinematic2AudioGameSyncActionDef>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
