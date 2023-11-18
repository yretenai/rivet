// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/HUDMessageArenaWaveCountdownEvent.hpp>

namespace rivet::ddl::generated {
	HUDMessageArenaWaveCountdownEvent::HUDMessageArenaWaveCountdownEvent([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): EventBase(serialized) {

	}

	[[nodiscard]] auto
	HUDMessageArenaWaveCountdownEvent::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	HUDMessageArenaWaveCountdownEvent::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<HUDMessageArenaWaveCountdownEvent> {
		if (incoming_type_id == HUDMessageArenaWaveCountdownEvent::type_id) {
			return std::make_shared<HUDMessageArenaWaveCountdownEvent>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
