// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/DDLVector3.hpp> 

#include <rivet/ddl/generated/AttachActorActionPrius.hpp>

namespace rivet::ddl::generated {
	AttachActorActionPrius::AttachActorActionPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		ActionType = serialized->get_enum<rivet::ddl::generated::x10228b34>(ActionType_type_id, rivet::ddl::generated::x10228b34_values);
		Actor = serialized->get_string(Actor_type_id);
		AttachRelative = serialized->get_bool(AttachRelative_type_id);
		Joint = serialized->get_string(Joint_type_id);
		Offset = serialized->unwrap_into<rivet::ddl::generated::DDLVector3>(Offset_type_id);
		UpdateRotation = serialized->get_bool(UpdateRotation_type_id); 
	}

	[[nodiscard]] auto
	AttachActorActionPrius::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	AttachActorActionPrius::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<AttachActorActionPrius> {
		if (incoming_type_id == AttachActorActionPrius::type_id) {
			return std::make_shared<AttachActorActionPrius>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated