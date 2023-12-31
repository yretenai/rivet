// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/LightningRodProjectileFlyingStopEvent.hpp>

namespace rivet::ddl::generated {
	LightningRodProjectileFlyingStopEvent::LightningRodProjectileFlyingStopEvent([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): ProjectileFlyingStartEvent(serialized) {

	}

	[[nodiscard]] auto
	LightningRodProjectileFlyingStopEvent::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	LightningRodProjectileFlyingStopEvent::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<LightningRodProjectileFlyingStopEvent> {
		if (incoming_type_id == LightningRodProjectileFlyingStopEvent::type_id) {
			return std::make_shared<LightningRodProjectileFlyingStopEvent>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
