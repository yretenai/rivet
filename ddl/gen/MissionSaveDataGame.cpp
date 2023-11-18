// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/MissionSaveDataGame.hpp>

namespace rivet::ddl::generated {
	MissionSaveDataGame::MissionSaveDataGame([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): MissionSaveDataShared(serialized) {

	}

	[[nodiscard]] auto
	MissionSaveDataGame::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	MissionSaveDataGame::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<MissionSaveDataGame> {
		if (incoming_type_id == MissionSaveDataGame::type_id) {
			return std::make_shared<MissionSaveDataGame>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
