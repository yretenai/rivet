// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/DebugDrawColor.hpp> 

#include <rivet/ddl/generated/DebugDrawSphereActionPrius.hpp>

namespace rivet::ddl::generated {
	DebugDrawSphereActionPrius::DebugDrawSphereActionPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		ActionType = serialized->get_enum<rivet::ddl::generated::x10228b34>(ActionType_type_id, rivet::ddl::generated::x10228b34_values, rivet::ddl::generated::x10228b34::Debug);
		Color = serialized->unwrap_into<rivet::ddl::generated::DebugDrawColor>(Color_type_id); 
	}

	[[nodiscard]] auto
	DebugDrawSphereActionPrius::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	DebugDrawSphereActionPrius::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<DebugDrawSphereActionPrius> {
		if (incoming_type_id == DebugDrawSphereActionPrius::type_id) {
			return std::make_shared<DebugDrawSphereActionPrius>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
