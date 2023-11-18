// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/ProximitySpawnSaveData.hpp>

namespace rivet::ddl::generated {
	ProximitySpawnSaveData::ProximitySpawnSaveData([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		RewardedValue = serialized->get_float(RewardedValue_type_id); 
	}

	[[nodiscard]] auto
	ProximitySpawnSaveData::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	ProximitySpawnSaveData::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<ProximitySpawnSaveData> {
		if (incoming_type_id == ProximitySpawnSaveData::type_id) {
			return std::make_shared<ProximitySpawnSaveData>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
