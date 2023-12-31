// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/ChainLightningExplosionPrepEvent.hpp>

namespace rivet::ddl::generated {
	ChainLightningExplosionPrepEvent::ChainLightningExplosionPrepEvent([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): EventBase(serialized) {

	}

	[[nodiscard]] auto
	ChainLightningExplosionPrepEvent::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	ChainLightningExplosionPrepEvent::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<ChainLightningExplosionPrepEvent> {
		if (incoming_type_id == ChainLightningExplosionPrepEvent::type_id) {
			return std::make_shared<ChainLightningExplosionPrepEvent>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
