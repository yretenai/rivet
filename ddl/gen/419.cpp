// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/BuzzBladesShotMotionPrius.hpp>

namespace rivet::ddl::generated {
	BuzzBladesShotMotionPrius::BuzzBladesShotMotionPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): BasicShotMotionPrius(serialized) {
		MaxBounces = serialized->get_uint32(MaxBounces_type_id);
		SpinJoint = serialized->get_string(SpinJoint_type_id); 
	}

	auto
	BuzzBladesShotMotionPrius::get_type_id() const noexcept -> rivet::rivet_type_id {
		return type_id;
	}

	[[nodiscard]] auto
	BuzzBladesShotMotionPrius::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	BuzzBladesShotMotionPrius::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<BuzzBladesShotMotionPrius> {
		if (incoming_type_id == BuzzBladesShotMotionPrius::type_id) {
			return std::make_shared<BuzzBladesShotMotionPrius>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
