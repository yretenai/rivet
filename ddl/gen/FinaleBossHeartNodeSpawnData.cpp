// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/FinaleBossHeartNodeSpawnData.hpp>

namespace rivet::ddl::generated {
	FinaleBossHeartNodeSpawnData::FinaleBossHeartNodeSpawnData([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): SimpleSpawnData(serialized) {
		NodeIndex = serialized->get_uint8(NodeIndex_type_id, 0); 
	}

	[[nodiscard]] auto
	FinaleBossHeartNodeSpawnData::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	FinaleBossHeartNodeSpawnData::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<FinaleBossHeartNodeSpawnData> {
		if (incoming_type_id == FinaleBossHeartNodeSpawnData::type_id) {
			return std::make_shared<FinaleBossHeartNodeSpawnData>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
