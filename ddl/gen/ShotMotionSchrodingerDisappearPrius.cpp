// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/ShotMotionSchrodingerDisappearPrius.hpp>

namespace rivet::ddl::generated {
	ShotMotionSchrodingerDisappearPrius::ShotMotionSchrodingerDisappearPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): BasicShotMotionPrius(serialized) {
		OutroAnim = serialized->get_string(OutroAnim_type_id);
		RiftActor = serialized->get_string(RiftActor_type_id); 
	}

	[[nodiscard]] auto
	ShotMotionSchrodingerDisappearPrius::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	ShotMotionSchrodingerDisappearPrius::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<ShotMotionSchrodingerDisappearPrius> {
		if (incoming_type_id == ShotMotionSchrodingerDisappearPrius::type_id) {
			return std::make_shared<ShotMotionSchrodingerDisappearPrius>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
