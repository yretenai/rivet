// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/VelocityScriptMotionPrius.hpp>

namespace rivet::ddl::generated {
	VelocityScriptMotionPrius::VelocityScriptMotionPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		IdealSpeed = serialized->get_float(IdealSpeed_type_id, -1.000000);
		Accel = serialized->get_float(Accel_type_id, 10.000000);
		Decel = serialized->get_float(Decel_type_id, 10.000000); 
	}

	[[nodiscard]] auto
	VelocityScriptMotionPrius::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	VelocityScriptMotionPrius::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<VelocityScriptMotionPrius> {
		if (incoming_type_id == VelocityScriptMotionPrius::type_id) {
			return std::make_shared<VelocityScriptMotionPrius>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
