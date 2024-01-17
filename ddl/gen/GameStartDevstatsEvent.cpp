// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/GameStartDevstatsEvent.hpp>

namespace rivet::ddl::generated {
	GameStartDevstatsEvent::GameStartDevstatsEvent([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): EventBase(serialized) {
		game_id = serialized->get_string(game_id_type_id, {});
		level_id = serialized->get_string(level_id_type_id, {});
		mode = serialized->get_string(mode_type_id, {});
		player_count = serialized->get_int32(player_count_type_id, 0);
		player_count_local = serialized->get_int32(player_count_local_type_id, 0);
		is_online = serialized->get_bool(is_online_type_id, false); 
	}

	[[nodiscard]] auto
	GameStartDevstatsEvent::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	GameStartDevstatsEvent::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<GameStartDevstatsEvent> {
		if (incoming_type_id == GameStartDevstatsEvent::type_id) {
			return std::make_shared<GameStartDevstatsEvent>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
