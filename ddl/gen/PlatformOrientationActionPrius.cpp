// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/PlatformOrientationActionPrius.hpp>

namespace rivet::ddl::generated {
	PlatformOrientationActionPrius::PlatformOrientationActionPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		ActionType = serialized->get_enum<rivet::ddl::generated::x10228b34>(ActionType_type_id, rivet::ddl::generated::x10228b34_values, rivet::ddl::generated::x10228b34::Interact);
		Orientation = serialized->get_enum<rivet::ddl::generated::x3cdeb00d>(Orientation_type_id, rivet::ddl::generated::x3cdeb00d_values, rivet::ddl::generated::x3cdeb00d::As_Placed);
		BlendTime = serialized->get_float(BlendTime_type_id, 2.000000); 
	}

	[[nodiscard]] auto
	PlatformOrientationActionPrius::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	PlatformOrientationActionPrius::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<PlatformOrientationActionPrius> {
		if (incoming_type_id == PlatformOrientationActionPrius::type_id) {
			return std::make_shared<PlatformOrientationActionPrius>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
