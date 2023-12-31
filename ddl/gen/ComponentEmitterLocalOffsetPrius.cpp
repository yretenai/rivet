// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/DDLVector3.hpp> 

#include <rivet/ddl/generated/ComponentEmitterLocalOffsetPrius.hpp>

namespace rivet::ddl::generated {
	ComponentEmitterLocalOffsetPrius::ComponentEmitterLocalOffsetPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): ComponentEmitterBasePrius(serialized) {
		EmitFromUser = serialized->get_bool(EmitFromUser_type_id);
		UseWorldUp = serialized->get_bool(UseWorldUp_type_id);
		Offset = serialized->unwrap_into<rivet::ddl::generated::DDLVector3>(Offset_type_id); 
	}

	[[nodiscard]] auto
	ComponentEmitterLocalOffsetPrius::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	ComponentEmitterLocalOffsetPrius::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<ComponentEmitterLocalOffsetPrius> {
		if (incoming_type_id == ComponentEmitterLocalOffsetPrius::type_id) {
			return std::make_shared<ComponentEmitterLocalOffsetPrius>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
