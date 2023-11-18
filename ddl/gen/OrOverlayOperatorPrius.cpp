// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/TriggerArray.hpp> 

#include <rivet/ddl/generated/OrOverlayOperatorPrius.hpp>

namespace rivet::ddl::generated {
	OrOverlayOperatorPrius::OrOverlayOperatorPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): BaseCustomOverlayTriggerPrius(serialized) {
		Triggers = serialized->unwrap_into_many<rivet::ddl::generated::TriggerArray>(Triggers_type_id); 
	}

	[[nodiscard]] auto
	OrOverlayOperatorPrius::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	OrOverlayOperatorPrius::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<OrOverlayOperatorPrius> {
		if (incoming_type_id == OrOverlayOperatorPrius::type_id) {
			return std::make_shared<OrOverlayOperatorPrius>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
