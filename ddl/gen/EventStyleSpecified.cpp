// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/EventBase.hpp> 

#include <rivet/ddl/generated/EventStyleSpecified.hpp>

namespace rivet::ddl::generated {
	EventStyleSpecified::EventStyleSpecified([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		Event = serialized->unwrap_into<rivet::ddl::generated::EventBase>(Event_type_id);
		HandlerStyle = serialized->get_enum<rivet::ddl::generated::xc67232c>(HandlerStyle_type_id, rivet::ddl::generated::xc67232c_values); 
	}

	[[nodiscard]] auto
	EventStyleSpecified::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	EventStyleSpecified::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<EventStyleSpecified> {
		if (incoming_type_id == EventStyleSpecified::type_id) {
			return std::make_shared<EventStyleSpecified>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
