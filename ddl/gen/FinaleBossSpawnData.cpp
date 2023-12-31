// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/FinaleBossSpawnData.hpp>

namespace rivet::ddl::generated {
	FinaleBossSpawnData::FinaleBossSpawnData([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): SimpleSpawnData(serialized) {
		PortalIndex = serialized->get_uint8(PortalIndex_type_id); 
	}

	[[nodiscard]] auto
	FinaleBossSpawnData::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	FinaleBossSpawnData::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<FinaleBossSpawnData> {
		if (incoming_type_id == FinaleBossSpawnData::type_id) {
			return std::make_shared<FinaleBossSpawnData>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
