// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/FinaleBossLaserShotPrius.hpp>
#include <rivet/ddl/generated/ShotDamageData.hpp> 

#include <rivet/ddl/generated/BotLaserShotPrius.hpp>

namespace rivet::ddl::generated {
	BotLaserShotPrius::BotLaserShotPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): ShotBasePrius(serialized) {
		DamageData = serialized->unwrap_into<rivet::ddl::generated::ShotDamageData>(DamageData_type_id);
		AudioFollowerType = serialized->get_enum<rivet::ddl::generated::x6f69eca>(AudioFollowerType_type_id, rivet::ddl::generated::x6f69eca_values, rivet::ddl::generated::x6f69eca::Sound_Listener_Position);
		AudioFollowerJoint = serialized->get_string(AudioFollowerJoint_type_id, "follower");
		ImpactJoint = serialized->get_string(ImpactJoint_type_id, "impact"); 
	}

	[[nodiscard]] auto
	BotLaserShotPrius::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	BotLaserShotPrius::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<BotLaserShotPrius> {
		if (incoming_type_id == BotLaserShotPrius::type_id) {
			return std::make_shared<BotLaserShotPrius>(serialized);
		}

		auto FinaleBossLaserShotPrius_ptr = FinaleBossLaserShotPrius::from_substruct(incoming_type_id, serialized);
		if (FinaleBossLaserShotPrius_ptr != nullptr) {
			return FinaleBossLaserShotPrius_ptr;
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
