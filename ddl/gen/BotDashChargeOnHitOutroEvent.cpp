// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/BotDashChargeOnHitOutroEvent.hpp>

namespace rivet::ddl::generated {
	BotDashChargeOnHitOutroEvent::BotDashChargeOnHitOutroEvent([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): EventBase(serialized) {

	}

	[[nodiscard]] auto
	BotDashChargeOnHitOutroEvent::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	BotDashChargeOnHitOutroEvent::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<BotDashChargeOnHitOutroEvent> {
		if (incoming_type_id == BotDashChargeOnHitOutroEvent::type_id) {
			return std::make_shared<BotDashChargeOnHitOutroEvent>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
