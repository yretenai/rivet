// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/BotComboMoveFinaleSweepChase.hpp>

namespace rivet::ddl::generated {
	BotComboMoveFinaleSweepChase::BotComboMoveFinaleSweepChase([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): BotComboMoveBase(serialized) {
		AnimDriver = serialized->get_string(AnimDriver_type_id);
		PlaneActorAsset = serialized->get_string(PlaneActorAsset_type_id);
		PlaneSpawnPos = serialized->get_uint64(PlaneSpawnPos_type_id);
		PlaneStartPos = serialized->get_uint64(PlaneStartPos_type_id);
		PlaneEndPos = serialized->get_uint64(PlaneEndPos_type_id);
		TurnRateMin = serialized->get_float(TurnRateMin_type_id);
		TurnRateMax = serialized->get_float(TurnRateMax_type_id); 
	}

	[[nodiscard]] auto
	BotComboMoveFinaleSweepChase::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	BotComboMoveFinaleSweepChase::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<BotComboMoveFinaleSweepChase> {
		if (incoming_type_id == BotComboMoveFinaleSweepChase::type_id) {
			return std::make_shared<BotComboMoveFinaleSweepChase>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
