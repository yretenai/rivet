// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/ShotMotionFossilizerPrius.hpp>
#include <rivet/ddl/generated/PlasmaStrikerShotMotionPrius.hpp> 

#include <rivet/ddl/generated/HitScanShotMotionPrius.hpp>

namespace rivet::ddl::generated {
	HitScanShotMotionPrius::HitScanShotMotionPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): BasicShotMotionPrius(serialized) {

	}

	[[nodiscard]] auto
	HitScanShotMotionPrius::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	HitScanShotMotionPrius::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<HitScanShotMotionPrius> {
		if (incoming_type_id == HitScanShotMotionPrius::type_id) {
			return std::make_shared<HitScanShotMotionPrius>(serialized);
		}

		auto PlasmaStrikerShotMotionPrius_ptr = PlasmaStrikerShotMotionPrius::from_substruct(incoming_type_id, serialized);
		if (PlasmaStrikerShotMotionPrius_ptr != nullptr) {
			return PlasmaStrikerShotMotionPrius_ptr;
		}

		auto ShotMotionFossilizerPrius_ptr = ShotMotionFossilizerPrius::from_substruct(incoming_type_id, serialized);
		if (ShotMotionFossilizerPrius_ptr != nullptr) {
			return ShotMotionFossilizerPrius_ptr;
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
