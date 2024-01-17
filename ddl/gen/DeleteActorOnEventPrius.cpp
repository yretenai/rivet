// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/EventBase.hpp> 

#include <rivet/ddl/generated/DeleteActorOnEventPrius.hpp>

namespace rivet::ddl::generated {
	DeleteActorOnEventPrius::DeleteActorOnEventPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		ListenEvent = serialized->unwrap_into<rivet::ddl::generated::EventBase>(ListenEvent_type_id);
		Kill = serialized->get_bool(Kill_type_id, false); 
	}

	[[nodiscard]] auto
	DeleteActorOnEventPrius::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	DeleteActorOnEventPrius::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<DeleteActorOnEventPrius> {
		if (incoming_type_id == DeleteActorOnEventPrius::type_id) {
			return std::make_shared<DeleteActorOnEventPrius>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
