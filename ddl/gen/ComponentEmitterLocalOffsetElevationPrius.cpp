// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/LocalOffsetElevationData.hpp> 

#include <rivet/ddl/generated/ComponentEmitterLocalOffsetElevationPrius.hpp>

namespace rivet::ddl::generated {
	ComponentEmitterLocalOffsetElevationPrius::ComponentEmitterLocalOffsetElevationPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): ComponentEmitterBasePrius(serialized) {
		EmitFromUser = serialized->get_bool(EmitFromUser_type_id, false);
		UseWorldUp = serialized->get_bool(UseWorldUp_type_id, false);
		ElevationData = serialized->unwrap_into_many<rivet::ddl::generated::LocalOffsetElevationData>(ElevationData_type_id); 
	}

	[[nodiscard]] auto
	ComponentEmitterLocalOffsetElevationPrius::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	ComponentEmitterLocalOffsetElevationPrius::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<ComponentEmitterLocalOffsetElevationPrius> {
		if (incoming_type_id == ComponentEmitterLocalOffsetElevationPrius::type_id) {
			return std::make_shared<ComponentEmitterLocalOffsetElevationPrius>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
