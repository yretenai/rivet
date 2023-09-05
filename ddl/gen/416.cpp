// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/ShotMotionFossilizerPrius.hpp>

namespace rivet::ddl::generated {
	ShotMotionFossilizerPrius::ShotMotionFossilizerPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): HitScanShotMotionPrius(serialized) {

	}

	auto
	ShotMotionFossilizerPrius::get_type_id() const noexcept -> rivet::rivet_type_id {
		return type_id;
	}

	[[nodiscard]] auto
	ShotMotionFossilizerPrius::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	ShotMotionFossilizerPrius::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<ShotMotionFossilizerPrius> {
		if (incoming_type_id == ShotMotionFossilizerPrius::type_id) {
			return std::make_shared<ShotMotionFossilizerPrius>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
