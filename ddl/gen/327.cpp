// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/PirateHeavyBounceBombShotPrius.hpp>
#include <rivet/ddl/generated/ShotGrenadeHazardPrius.hpp>
#include <rivet/ddl/generated/PirateHeavyMiniBounceBombShotPrius.hpp> 

#include <rivet/ddl/generated/GrenadeShotGamePrius.hpp>

namespace rivet::ddl::generated {
	GrenadeShotGamePrius::GrenadeShotGamePrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): GrenadeShotPrius(serialized) {

	}

	auto
	GrenadeShotGamePrius::get_type_id() const noexcept -> rivet::rivet_type_id {
		return type_id;
	}

	[[nodiscard]] auto
	GrenadeShotGamePrius::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	GrenadeShotGamePrius::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<GrenadeShotGamePrius> {
		if (incoming_type_id == GrenadeShotGamePrius::type_id) {
			return std::make_shared<GrenadeShotGamePrius>(serialized);
		}

		auto PirateHeavyBounceBombShotPrius_ptr = PirateHeavyBounceBombShotPrius::from_substruct(incoming_type_id, serialized);
		if (PirateHeavyBounceBombShotPrius_ptr != nullptr) {
			return PirateHeavyBounceBombShotPrius_ptr;
		}

		auto ShotGrenadeHazardPrius_ptr = ShotGrenadeHazardPrius::from_substruct(incoming_type_id, serialized);
		if (ShotGrenadeHazardPrius_ptr != nullptr) {
			return ShotGrenadeHazardPrius_ptr;
		}

		auto PirateHeavyMiniBounceBombShotPrius_ptr = PirateHeavyMiniBounceBombShotPrius::from_substruct(incoming_type_id, serialized);
		if (PirateHeavyMiniBounceBombShotPrius_ptr != nullptr) {
			return PirateHeavyMiniBounceBombShotPrius_ptr;
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
