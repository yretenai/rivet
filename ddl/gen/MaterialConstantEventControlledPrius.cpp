// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/EventBase.hpp>
#include <rivet/ddl/generated/MaterialConstantBlendBase.hpp> 

#include <rivet/ddl/generated/MaterialConstantEventControlledPrius.hpp>

namespace rivet::ddl::generated {
	MaterialConstantEventControlledPrius::MaterialConstantEventControlledPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		ConstantName = serialized->get_string(ConstantName_type_id);
		MaterialMappingName = serialized->get_string(MaterialMappingName_type_id);
		InitialValue = serialized->get_float(InitialValue_type_id);
		EventValue = serialized->get_float(EventValue_type_id);
		SetInitialValueOnActivate = serialized->get_bool(SetInitialValueOnActivate_type_id);
		BlendStyle = serialized->unwrap_into<rivet::ddl::generated::MaterialConstantBlendBase>(BlendStyle_type_id);
		IsSelfEvent = serialized->get_bool(IsSelfEvent_type_id);
		Event = serialized->unwrap_into<rivet::ddl::generated::EventBase>(Event_type_id); 
	}

	[[nodiscard]] auto
	MaterialConstantEventControlledPrius::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	MaterialConstantEventControlledPrius::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<MaterialConstantEventControlledPrius> {
		if (incoming_type_id == MaterialConstantEventControlledPrius::type_id) {
			return std::make_shared<MaterialConstantEventControlledPrius>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
