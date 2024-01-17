// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/ArachnodroidEnemySpawnData.hpp>
#include <rivet/ddl/generated/FinaleBossHeartNodeSpawnData.hpp>
#include <rivet/ddl/generated/FinaleBossSpawnData.hpp>
#include <rivet/ddl/generated/SpawnShotAttachSpawnData.hpp> 

#include <rivet/ddl/generated/SimpleSpawnData.hpp>

namespace rivet::ddl::generated {
	SimpleSpawnData::SimpleSpawnData([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): SpawnDataBase(serialized) {
		Scale = serialized->get_float(Scale_type_id, 1.000000); 
	}

	[[nodiscard]] auto
	SimpleSpawnData::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	SimpleSpawnData::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<SimpleSpawnData> {
		if (incoming_type_id == SimpleSpawnData::type_id) {
			return std::make_shared<SimpleSpawnData>(serialized);
		}

		auto SpawnShotAttachSpawnData_ptr = SpawnShotAttachSpawnData::from_substruct(incoming_type_id, serialized);
		if (SpawnShotAttachSpawnData_ptr != nullptr) {
			return SpawnShotAttachSpawnData_ptr;
		}

		auto FinaleBossSpawnData_ptr = FinaleBossSpawnData::from_substruct(incoming_type_id, serialized);
		if (FinaleBossSpawnData_ptr != nullptr) {
			return FinaleBossSpawnData_ptr;
		}

		auto FinaleBossHeartNodeSpawnData_ptr = FinaleBossHeartNodeSpawnData::from_substruct(incoming_type_id, serialized);
		if (FinaleBossHeartNodeSpawnData_ptr != nullptr) {
			return FinaleBossHeartNodeSpawnData_ptr;
		}

		auto ArachnodroidEnemySpawnData_ptr = ArachnodroidEnemySpawnData::from_substruct(incoming_type_id, serialized);
		if (ArachnodroidEnemySpawnData_ptr != nullptr) {
			return ArachnodroidEnemySpawnData_ptr;
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
