// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/NavMeshObstructionShapeBase.hpp> 

#include <rivet/ddl/generated/NavMeshObstructionPrius.hpp>

namespace rivet::ddl::generated {
	NavMeshObstructionPrius::NavMeshObstructionPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		EnableOnLoad = serialized->get_bool(EnableOnLoad_type_id);
		Shape = serialized->unwrap_into<rivet::ddl::generated::NavMeshObstructionShapeBase>(Shape_type_id);
		Mode = serialized->get_enum<rivet::ddl::generated::x464e86be>(Mode_type_id, rivet::ddl::generated::x464e86be_values);
		CheckStationary = serialized->get_bool(CheckStationary_type_id);
		RotationLocator = serialized->get_string(RotationLocator_type_id); 
	}

	[[nodiscard]] auto
	NavMeshObstructionPrius::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	NavMeshObstructionPrius::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<NavMeshObstructionPrius> {
		if (incoming_type_id == NavMeshObstructionPrius::type_id) {
			return std::make_shared<NavMeshObstructionPrius>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated