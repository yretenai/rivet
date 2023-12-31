// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/DDLVector3.hpp> 

#include <rivet/ddl/generated/AttachedHealthBarPrius.hpp>

namespace rivet::ddl::generated {
	AttachedHealthBarPrius::AttachedHealthBarPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		HealthBarActor = serialized->get_string(HealthBarActor_type_id);
		AttachToJoint = serialized->get_string(AttachToJoint_type_id);
		AttachOffset = serialized->unwrap_into<rivet::ddl::generated::DDLVector3>(AttachOffset_type_id);
		Scale = serialized->get_float(Scale_type_id);
		HideAfterTime = serialized->get_bool(HideAfterTime_type_id);
		ShowOnHealthGain = serialized->get_bool(ShowOnHealthGain_type_id);
		AttachWorldOffset = serialized->get_bool(AttachWorldOffset_type_id); 
	}

	[[nodiscard]] auto
	AttachedHealthBarPrius::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	AttachedHealthBarPrius::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<AttachedHealthBarPrius> {
		if (incoming_type_id == AttachedHealthBarPrius::type_id) {
			return std::make_shared<AttachedHealthBarPrius>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
