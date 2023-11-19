// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/GameFrameBudgetAmortizationSettings.hpp>

namespace rivet::ddl::generated {
	GameFrameBudgetAmortizationSettings::GameFrameBudgetAmortizationSettings([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		MaxDamageStateChunksPerState = serialized->get_uint32(MaxDamageStateChunksPerState_type_id);
		MaxDamageStateChunksPerFrame = serialized->get_uint32(MaxDamageStateChunksPerFrame_type_id);
		MaxLootSystemSimpleSpawnPickupsPerFrame = serialized->get_uint32(MaxLootSystemSimpleSpawnPickupsPerFrame_type_id);
		MaxShardSpawnsPerFrame = serialized->get_uint32(MaxShardSpawnsPerFrame_type_id); 
	}

	[[nodiscard]] auto
	GameFrameBudgetAmortizationSettings::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	GameFrameBudgetAmortizationSettings::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<GameFrameBudgetAmortizationSettings> {
		if (incoming_type_id == GameFrameBudgetAmortizationSettings::type_id) {
			return std::make_shared<GameFrameBudgetAmortizationSettings>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated