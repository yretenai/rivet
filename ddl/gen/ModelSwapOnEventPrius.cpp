// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/EventBase.hpp> 

#include <rivet/ddl/generated/ModelSwapOnEventPrius.hpp>

namespace rivet::ddl::generated {
	ModelSwapOnEventPrius::ModelSwapOnEventPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		AlternateModel = serialized->get_string(AlternateModel_type_id);
		ListenEvent = serialized->unwrap_into<rivet::ddl::generated::EventBase>(ListenEvent_type_id); 
	}

	[[nodiscard]] auto
	ModelSwapOnEventPrius::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	ModelSwapOnEventPrius::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<ModelSwapOnEventPrius> {
		if (incoming_type_id == ModelSwapOnEventPrius::type_id) {
			return std::make_shared<ModelSwapOnEventPrius>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
