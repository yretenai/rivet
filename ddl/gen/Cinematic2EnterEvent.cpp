// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/Cinematic2EnterEvent.hpp>

namespace rivet::ddl::generated {
	Cinematic2EnterEvent::Cinematic2EnterEvent([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): EventBase(serialized) {
		Invulnerable = serialized->get_bool(Invulnerable_type_id, false); 
	}

	[[nodiscard]] auto
	Cinematic2EnterEvent::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	Cinematic2EnterEvent::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<Cinematic2EnterEvent> {
		if (incoming_type_id == Cinematic2EnterEvent::type_id) {
			return std::make_shared<Cinematic2EnterEvent>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
