// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/DDLVector3.hpp> 

#include <rivet/ddl/generated/CameraRotatorTargetedPrius.hpp>

namespace rivet::ddl::generated {
	CameraRotatorTargetedPrius::CameraRotatorTargetedPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): CameraRotatorBasePrius(serialized) {
		TargetOffset = serialized->unwrap_into<rivet::ddl::generated::DDLVector3>(TargetOffset_type_id); 
	}

	[[nodiscard]] auto
	CameraRotatorTargetedPrius::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	CameraRotatorTargetedPrius::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<CameraRotatorTargetedPrius> {
		if (incoming_type_id == CameraRotatorTargetedPrius::type_id) {
			return std::make_shared<CameraRotatorTargetedPrius>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
