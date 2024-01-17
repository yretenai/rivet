// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/NavMeshObstructionShapeBase.hpp> 

#include <rivet/ddl/generated/PulseNavObstruction.hpp>

namespace rivet::ddl::generated {
	PulseNavObstruction::PulseNavObstruction([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		Shape = serialized->unwrap_into<rivet::ddl::generated::NavMeshObstructionShapeBase>(Shape_type_id);
		RotationLocator = serialized->get_string(RotationLocator_type_id, {}); 
	}

	[[nodiscard]] auto
	PulseNavObstruction::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	PulseNavObstruction::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<PulseNavObstruction> {
		if (incoming_type_id == PulseNavObstruction::type_id) {
			return std::make_shared<PulseNavObstruction>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
