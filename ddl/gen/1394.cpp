// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/ShotPredatorLauncherMiniMissilePrius.hpp> 

#include <rivet/ddl/generated/ShotPredatorLauncherMiniMissileConfig.hpp>

namespace rivet::ddl::generated {
	ShotPredatorLauncherMiniMissileConfig::ShotPredatorLauncherMiniMissileConfig([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): ConfigBase(serialized) {
		MiniMissileActor = serialized->get_string(MiniMissileActor_type_id);
		ShotPrius = serialized->unwrap_into<rivet::ddl::generated::ShotPredatorLauncherMiniMissilePrius>(ShotPrius_type_id); 
	}

	auto
	ShotPredatorLauncherMiniMissileConfig::get_type_id() const noexcept -> rivet::rivet_type_id {
		return type_id;
	}

	[[nodiscard]] auto
	ShotPredatorLauncherMiniMissileConfig::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	ShotPredatorLauncherMiniMissileConfig::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<ShotPredatorLauncherMiniMissileConfig> {
		if (incoming_type_id == ShotPredatorLauncherMiniMissileConfig::type_id) {
			return std::make_shared<ShotPredatorLauncherMiniMissileConfig>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
