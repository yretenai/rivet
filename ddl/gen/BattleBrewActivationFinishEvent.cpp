// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/BattleBrewActivationFinishEvent.hpp>

namespace rivet::ddl::generated {
	BattleBrewActivationFinishEvent::BattleBrewActivationFinishEvent([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): BattleBrewEvent(serialized) {

	}

	[[nodiscard]] auto
	BattleBrewActivationFinishEvent::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	BattleBrewActivationFinishEvent::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<BattleBrewActivationFinishEvent> {
		if (incoming_type_id == BattleBrewActivationFinishEvent::type_id) {
			return std::make_shared<BattleBrewActivationFinishEvent>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
