// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/EventBase.hpp> 

#include <rivet/ddl/generated/MaterialOverrideOnEventPrius.hpp>

namespace rivet::ddl::generated {
	MaterialOverrideOnEventPrius::MaterialOverrideOnEventPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		Event = serialized->unwrap_into<rivet::ddl::generated::EventBase>(Event_type_id);
		ListenToSelfEventsOnly = serialized->get_bool(ListenToSelfEventsOnly_type_id);
		MaterialMappingName = serialized->get_string(MaterialMappingName_type_id);
		OverrideMaterial = serialized->get_string(OverrideMaterial_type_id); 
	}

	[[nodiscard]] auto
	MaterialOverrideOnEventPrius::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	MaterialOverrideOnEventPrius::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<MaterialOverrideOnEventPrius> {
		if (incoming_type_id == MaterialOverrideOnEventPrius::type_id) {
			return std::make_shared<MaterialOverrideOnEventPrius>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
