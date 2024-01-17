// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/MissionSaveOptions.hpp>

namespace rivet::ddl::generated {
	MissionSaveOptions::MissionSaveOptions([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		SaveSnapshot = serialized->get_bool(SaveSnapshot_type_id, false);
		SaveReplaySnapshot = serialized->get_bool(SaveReplaySnapshot_type_id, false); 
	}

	[[nodiscard]] auto
	MissionSaveOptions::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	MissionSaveOptions::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<MissionSaveOptions> {
		if (incoming_type_id == MissionSaveOptions::type_id) {
			return std::make_shared<MissionSaveOptions>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
