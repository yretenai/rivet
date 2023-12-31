// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/DDLVector3.hpp> 

#include <rivet/ddl/generated/FiringDesiredAimPosChangedEvent.hpp>

namespace rivet::ddl::generated {
	FiringDesiredAimPosChangedEvent::FiringDesiredAimPosChangedEvent([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): EventBase(serialized) {
		OldPos = serialized->unwrap_into<rivet::ddl::generated::DDLVector3>(OldPos_type_id);
		OldPosValid = serialized->get_bool(OldPosValid_type_id);
		NewPos = serialized->unwrap_into<rivet::ddl::generated::DDLVector3>(NewPos_type_id);
		NewPosValid = serialized->get_bool(NewPosValid_type_id); 
	}

	[[nodiscard]] auto
	FiringDesiredAimPosChangedEvent::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	FiringDesiredAimPosChangedEvent::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<FiringDesiredAimPosChangedEvent> {
		if (incoming_type_id == FiringDesiredAimPosChangedEvent::type_id) {
			return std::make_shared<FiringDesiredAimPosChangedEvent>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
