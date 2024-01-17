// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/HeroWallRunSettings.hpp>

namespace rivet::ddl::generated {
	HeroWallRunSettings::HeroWallRunSettings([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		DebugCollisionChecks = serialized->get_bool(DebugCollisionChecks_type_id, false);
		DebugNonActorWallRuns = serialized->get_bool(DebugNonActorWallRuns_type_id, false); 
	}

	[[nodiscard]] auto
	HeroWallRunSettings::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	HeroWallRunSettings::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<HeroWallRunSettings> {
		if (incoming_type_id == HeroWallRunSettings::type_id) {
			return std::make_shared<HeroWallRunSettings>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
