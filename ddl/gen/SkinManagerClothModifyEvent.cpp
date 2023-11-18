// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/DDLVector3.hpp> 

#include <rivet/ddl/generated/SkinManagerClothModifyEvent.hpp>

namespace rivet::ddl::generated {
	SkinManagerClothModifyEvent::SkinManagerClothModifyEvent([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): EventBase(serialized) {
		Damping = serialized->get_float(Damping_type_id);
		Gravity = serialized->unwrap_into<rivet::ddl::generated::DDLVector3>(Gravity_type_id); 
	}

	[[nodiscard]] auto
	SkinManagerClothModifyEvent::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	SkinManagerClothModifyEvent::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<SkinManagerClothModifyEvent> {
		if (incoming_type_id == SkinManagerClothModifyEvent::type_id) {
			return std::make_shared<SkinManagerClothModifyEvent>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
