// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/ShotPredatorLauncherMiniMissilePrius.hpp>
#include <rivet/ddl/generated/ShotArachnoPredatorLauncherPrius.hpp> 

#include <rivet/ddl/generated/ShotPredatorLauncherPrius.hpp>

namespace rivet::ddl::generated {
	ShotPredatorLauncherPrius::ShotPredatorLauncherPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): ExplosiveBulletPrius(serialized) {

	}

	[[nodiscard]] auto
	ShotPredatorLauncherPrius::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	ShotPredatorLauncherPrius::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<ShotPredatorLauncherPrius> {
		if (incoming_type_id == ShotPredatorLauncherPrius::type_id) {
			return std::make_shared<ShotPredatorLauncherPrius>(serialized);
		}

		auto ShotArachnoPredatorLauncherPrius_ptr = ShotArachnoPredatorLauncherPrius::from_substruct(incoming_type_id, serialized);
		if (ShotArachnoPredatorLauncherPrius_ptr != nullptr) {
			return ShotArachnoPredatorLauncherPrius_ptr;
		}

		auto ShotPredatorLauncherMiniMissilePrius_ptr = ShotPredatorLauncherMiniMissilePrius::from_substruct(incoming_type_id, serialized);
		if (ShotPredatorLauncherMiniMissilePrius_ptr != nullptr) {
			return ShotPredatorLauncherMiniMissilePrius_ptr;
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
