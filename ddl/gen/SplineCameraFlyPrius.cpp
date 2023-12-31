// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/DDLVector3.hpp> 

#include <rivet/ddl/generated/SplineCameraFlyPrius.hpp>

namespace rivet::ddl::generated {
	SplineCameraFlyPrius::SplineCameraFlyPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): CameraPrius(serialized) {
		MotionSpline = serialized->get_uint64(MotionSpline_type_id);
		TargetActor = serialized->get_uint64(TargetActor_type_id);
		LookMode = serialized->get_enum<rivet::ddl::generated::x73a6f97a>(LookMode_type_id, rivet::ddl::generated::x73a6f97a_values);
		StartAtEnd = serialized->get_bool(StartAtEnd_type_id);
		TargetOffset = serialized->unwrap_into<rivet::ddl::generated::DDLVector3>(TargetOffset_type_id); 
	}

	[[nodiscard]] auto
	SplineCameraFlyPrius::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	SplineCameraFlyPrius::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<SplineCameraFlyPrius> {
		if (incoming_type_id == SplineCameraFlyPrius::type_id) {
			return std::make_shared<SplineCameraFlyPrius>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
