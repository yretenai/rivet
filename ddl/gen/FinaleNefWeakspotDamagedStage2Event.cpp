// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/FinaleNefWeakspotDamagedStage2Event.hpp>

namespace rivet::ddl::generated {
	FinaleNefWeakspotDamagedStage2Event::FinaleNefWeakspotDamagedStage2Event([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): EventBase(serialized) {
		WeakspotName = serialized->get_string(WeakspotName_type_id);
		Is_Triggered_Once = serialized->get_bool(Is_Triggered_Once_type_id);
		Triggered_On_Main_Mech = serialized->get_bool(Triggered_On_Main_Mech_type_id);
		Is_Claw_Weakspot = serialized->get_bool(Is_Claw_Weakspot_type_id); 
	}

	[[nodiscard]] auto
	FinaleNefWeakspotDamagedStage2Event::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	FinaleNefWeakspotDamagedStage2Event::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<FinaleNefWeakspotDamagedStage2Event> {
		if (incoming_type_id == FinaleNefWeakspotDamagedStage2Event::type_id) {
			return std::make_shared<FinaleNefWeakspotDamagedStage2Event>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
