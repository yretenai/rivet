// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/DDLVector3.hpp> 

#include <rivet/ddl/generated/EngineControlCamera.hpp>

namespace rivet::ddl::generated {
	EngineControlCamera::EngineControlCamera([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		Name = serialized->get_string(Name_type_id);
		Center = serialized->unwrap_into<rivet::ddl::generated::DDLVector3>(Center_type_id);
		YawDegrees = serialized->get_float(YawDegrees_type_id);
		PitchDegrees = serialized->get_float(PitchDegrees_type_id);
		DistanceFromCenter = serialized->get_float(DistanceFromCenter_type_id);
		FieldOfViewDegrees = serialized->get_float(FieldOfViewDegrees_type_id);
		NearClipDistance = serialized->get_float(NearClipDistance_type_id);
		FarClipDistance = serialized->get_float(FarClipDistance_type_id); 
	}

	[[nodiscard]] auto
	EngineControlCamera::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	EngineControlCamera::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<EngineControlCamera> {
		if (incoming_type_id == EngineControlCamera::type_id) {
			return std::make_shared<EngineControlCamera>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
