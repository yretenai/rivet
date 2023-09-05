// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/ObstructionShapeCylinder.hpp>

namespace rivet::ddl::generated {
	ObstructionShapeCylinder::ObstructionShapeCylinder([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): NavMeshObstructionShapeBase(serialized) {
		Height = serialized->get_float(Height_type_id);
		Radius = serialized->get_float(Radius_type_id); 
	}

	auto
	ObstructionShapeCylinder::get_type_id() const noexcept -> rivet::rivet_type_id {
		return type_id;
	}

	[[nodiscard]] auto
	ObstructionShapeCylinder::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	ObstructionShapeCylinder::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<ObstructionShapeCylinder> {
		if (incoming_type_id == ObstructionShapeCylinder::type_id) {
			return std::make_shared<ObstructionShapeCylinder>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
