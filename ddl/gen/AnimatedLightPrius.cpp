// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/AnimatedLightPrius.hpp>

namespace rivet::ddl::generated {
	AnimatedLightPrius::AnimatedLightPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		AttachJointHash = serialized->get_uint32(AttachJointHash_type_id);
		DriverJointHash = serialized->get_uint32(DriverJointHash_type_id);
		ColorR = serialized->get_float(ColorR_type_id);
		ColorG = serialized->get_float(ColorG_type_id);
		ColorB = serialized->get_float(ColorB_type_id); 
	}

	[[nodiscard]] auto
	AnimatedLightPrius::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	AnimatedLightPrius::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<AnimatedLightPrius> {
		if (incoming_type_id == AnimatedLightPrius::type_id) {
			return std::make_shared<AnimatedLightPrius>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
