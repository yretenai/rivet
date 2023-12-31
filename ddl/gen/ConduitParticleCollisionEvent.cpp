// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/ConduitParticleCollisionEvent.hpp>

namespace rivet::ddl::generated {
	ConduitParticleCollisionEvent::ConduitParticleCollisionEvent([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): EventBase(serialized) {
		Label = serialized->get_string(Label_type_id);
		ParticleScale = serialized->get_float(ParticleScale_type_id); 
	}

	[[nodiscard]] auto
	ConduitParticleCollisionEvent::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	ConduitParticleCollisionEvent::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<ConduitParticleCollisionEvent> {
		if (incoming_type_id == ConduitParticleCollisionEvent::type_id) {
			return std::make_shared<ConduitParticleCollisionEvent>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
