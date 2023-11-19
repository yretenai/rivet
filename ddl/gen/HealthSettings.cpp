// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/HealthSettings.hpp>

namespace rivet::ddl::generated {
	HealthSettings::HealthSettings([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		HeroesDoNotTakeDamage = serialized->get_bool(HeroesDoNotTakeDamage_type_id);
		HeroesDoNotDie = serialized->get_bool(HeroesDoNotDie_type_id);
		EnemyBotsDoNotDie = serialized->get_bool(EnemyBotsDoNotDie_type_id);
		DisplayHealthValues = serialized->get_bool(DisplayHealthValues_type_id);
		DisplayHeroHealthBar = serialized->get_bool(DisplayHeroHealthBar_type_id);
		DisplayEnemyHealthBars = serialized->get_bool(DisplayEnemyHealthBars_type_id);
		DebugHealthDrops = serialized->get_bool(DebugHealthDrops_type_id);
		DrawHazardAreas = serialized->get_bool(DrawHazardAreas_type_id);
		DisableHitPause = serialized->get_bool(DisableHitPause_type_id); 
	}

	[[nodiscard]] auto
	HealthSettings::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	HealthSettings::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<HealthSettings> {
		if (incoming_type_id == HealthSettings::type_id) {
			return std::make_shared<HealthSettings>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated