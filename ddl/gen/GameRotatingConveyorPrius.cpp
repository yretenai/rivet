// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/DDLVector3.hpp> 

#include <rivet/ddl/generated/GameRotatingConveyorPrius.hpp>

namespace rivet::ddl::generated {
	GameRotatingConveyorPrius::GameRotatingConveyorPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): MovingSurfacePrius(serialized) {
		LocalOrigin = serialized->unwrap_into<rivet::ddl::generated::DDLVector3>(LocalOrigin_type_id);
		RotationRate = serialized->get_float(RotationRate_type_id, 1.000000); 
	}

	[[nodiscard]] auto
	GameRotatingConveyorPrius::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	GameRotatingConveyorPrius::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<GameRotatingConveyorPrius> {
		if (incoming_type_id == GameRotatingConveyorPrius::type_id) {
			return std::make_shared<GameRotatingConveyorPrius>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
