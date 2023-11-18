// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/SetTrophyProgressEvent.hpp>

namespace rivet::ddl::generated {
	SetTrophyProgressEvent::SetTrophyProgressEvent([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): CustomEvent(serialized) {
		SteamAchievement = serialized->get_string(SteamAchievement_type_id); 
	}

	[[nodiscard]] auto
	SetTrophyProgressEvent::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	SetTrophyProgressEvent::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<SetTrophyProgressEvent> {
		if (incoming_type_id == SetTrophyProgressEvent::type_id) {
			return std::make_shared<SetTrophyProgressEvent>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
