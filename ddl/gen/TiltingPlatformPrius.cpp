// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/TiltingPlatformPrius.hpp>

namespace rivet::ddl::generated {
	TiltingPlatformPrius::TiltingPlatformPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		ResetRotAccel = serialized->get_float(ResetRotAccel_type_id);
		MaxRotAccel = serialized->get_float(MaxRotAccel_type_id);
		MaxAngle = serialized->get_float(MaxAngle_type_id);
		PlatformRadius = serialized->get_float(PlatformRadius_type_id);
		MaxRotSpeed = serialized->get_float(MaxRotSpeed_type_id); 
	}

	[[nodiscard]] auto
	TiltingPlatformPrius::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	TiltingPlatformPrius::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<TiltingPlatformPrius> {
		if (incoming_type_id == TiltingPlatformPrius::type_id) {
			return std::make_shared<TiltingPlatformPrius>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
