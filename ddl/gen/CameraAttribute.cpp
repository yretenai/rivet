// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/CameraPerspectiveData.hpp> 

#include <rivet/ddl/generated/CameraAttribute.hpp>

namespace rivet::ddl::generated {
	CameraAttribute::CameraAttribute([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		CameraType = serialized->get_enum<rivet::ddl::generated::CameraType>(CameraType_type_id, rivet::ddl::generated::CameraType_values);
		PerspectiveData = serialized->unwrap_into<rivet::ddl::generated::CameraPerspectiveData>(PerspectiveData_type_id); 
	}

	[[nodiscard]] auto
	CameraAttribute::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	CameraAttribute::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<CameraAttribute> {
		if (incoming_type_id == CameraAttribute::type_id) {
			return std::make_shared<CameraAttribute>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated