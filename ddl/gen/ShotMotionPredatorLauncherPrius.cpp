// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/TelepathipusShotMotionPrius.hpp>
#include <rivet/ddl/generated/ShotMotionPredatorLauncherMiniMissilePrius.hpp> 

#include <rivet/ddl/generated/ShotMotionPredatorLauncherPrius.hpp>

namespace rivet::ddl::generated {
	ShotMotionPredatorLauncherPrius::ShotMotionPredatorLauncherPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): HomingShotMotionPrius(serialized) {

	}

	[[nodiscard]] auto
	ShotMotionPredatorLauncherPrius::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	ShotMotionPredatorLauncherPrius::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<ShotMotionPredatorLauncherPrius> {
		if (incoming_type_id == ShotMotionPredatorLauncherPrius::type_id) {
			return std::make_shared<ShotMotionPredatorLauncherPrius>(serialized);
		}

		auto ShotMotionPredatorLauncherMiniMissilePrius_ptr = ShotMotionPredatorLauncherMiniMissilePrius::from_substruct(incoming_type_id, serialized);
		if (ShotMotionPredatorLauncherMiniMissilePrius_ptr != nullptr) {
			return ShotMotionPredatorLauncherMiniMissilePrius_ptr;
		}

		auto TelepathipusShotMotionPrius_ptr = TelepathipusShotMotionPrius::from_substruct(incoming_type_id, serialized);
		if (TelepathipusShotMotionPrius_ptr != nullptr) {
			return TelepathipusShotMotionPrius_ptr;
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
