// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/WwiseSoundEvent.hpp> 

#include <rivet/ddl/generated/Cinematic2AudioActionDef.hpp>

namespace rivet::ddl::generated {
	Cinematic2AudioActionDef::Cinematic2AudioActionDef([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		Id = serialized->get_uint64(Id_type_id);
		Time = serialized->get_float(Time_type_id);
		DurationType = serialized->get_enum<rivet::ddl::generated::x29c933e2>(DurationType_type_id, rivet::ddl::generated::x29c933e2_values);
		Duration = serialized->get_float(Duration_type_id);
		Event = serialized->unwrap_into<rivet::ddl::generated::WwiseSoundEvent>(Event_type_id);
		LocatorName = serialized->get_string(LocatorName_type_id);
		PlayOnce = serialized->get_bool(PlayOnce_type_id); 
	}

	[[nodiscard]] auto
	Cinematic2AudioActionDef::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	Cinematic2AudioActionDef::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<Cinematic2AudioActionDef> {
		if (incoming_type_id == Cinematic2AudioActionDef::type_id) {
			return std::make_shared<Cinematic2AudioActionDef>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
