// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/PirateHeavyMiniBounceBombShotPrius.hpp> 

#include <rivet/ddl/generated/PirateHeavyMiniBounceBombShotConfig.hpp>

namespace rivet::ddl::generated {
	PirateHeavyMiniBounceBombShotConfig::PirateHeavyMiniBounceBombShotConfig([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): ConfigBase(serialized) {
		MiniBombActor = serialized->get_string(MiniBombActor_type_id);
		ShotPrius = serialized->unwrap_into<rivet::ddl::generated::PirateHeavyMiniBounceBombShotPrius>(ShotPrius_type_id); 
	}

	[[nodiscard]] auto
	PirateHeavyMiniBounceBombShotConfig::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	PirateHeavyMiniBounceBombShotConfig::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<PirateHeavyMiniBounceBombShotConfig> {
		if (incoming_type_id == PirateHeavyMiniBounceBombShotConfig::type_id) {
			return std::make_shared<PirateHeavyMiniBounceBombShotConfig>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
