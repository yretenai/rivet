// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/ZurkieArenaSelectAcceptEvent.hpp>

namespace rivet::ddl::generated {
	ZurkieArenaSelectAcceptEvent::ZurkieArenaSelectAcceptEvent([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): EventBase(serialized) {
		ChallengeMissionName = serialized->get_string(ChallengeMissionName_type_id, {}); 
	}

	[[nodiscard]] auto
	ZurkieArenaSelectAcceptEvent::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	ZurkieArenaSelectAcceptEvent::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<ZurkieArenaSelectAcceptEvent> {
		if (incoming_type_id == ZurkieArenaSelectAcceptEvent::type_id) {
			return std::make_shared<ZurkieArenaSelectAcceptEvent>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
