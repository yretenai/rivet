// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/Cinematic2LookAtDataDef.hpp> 

#include <rivet/ddl/generated/Cinematic2LookAtActionDef.hpp>

namespace rivet::ddl::generated {
	Cinematic2LookAtActionDef::Cinematic2LookAtActionDef([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		Id = serialized->get_uint64(Id_type_id, 0);
		Time = serialized->get_float(Time_type_id, 0.000000);
		DurationType = serialized->get_enum<rivet::ddl::generated::x29c933e2>(DurationType_type_id, rivet::ddl::generated::x29c933e2_values, rivet::ddl::generated::x29c933e2::None);
		Duration = serialized->get_float(Duration_type_id, 0.000000);
		HeadLookAtData = serialized->unwrap_into<rivet::ddl::generated::Cinematic2LookAtDataDef>(HeadLookAtData_type_id);
		EyeLookAtData = serialized->unwrap_into<rivet::ddl::generated::Cinematic2LookAtDataDef>(EyeLookAtData_type_id);
		BlendInDuration = serialized->get_float(BlendInDuration_type_id, 0.250000);
		BlendOutDuration = serialized->get_float(BlendOutDuration_type_id, 0.250000);
		EyeFocusOffsetFromHead = serialized->get_bool(EyeFocusOffsetFromHead_type_id, false); 
	}

	[[nodiscard]] auto
	Cinematic2LookAtActionDef::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	Cinematic2LookAtActionDef::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<Cinematic2LookAtActionDef> {
		if (incoming_type_id == Cinematic2LookAtActionDef::type_id) {
			return std::make_shared<Cinematic2LookAtActionDef>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
