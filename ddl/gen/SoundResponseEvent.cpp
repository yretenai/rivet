// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/SoundResponseEvent.hpp>

namespace rivet::ddl::generated {
	SoundResponseEvent::SoundResponseEvent([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): ResponseEvent(serialized) {
		SoundEventName = serialized->get_string(SoundEventName_type_id, {});
		AttachLocator = serialized->get_string(AttachLocator_type_id, {});
		Material = serialized->get_string(Material_type_id, {});
		StopOnSourceDestroyed = serialized->get_bool(StopOnSourceDestroyed_type_id, false); 
	}

	[[nodiscard]] auto
	SoundResponseEvent::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	SoundResponseEvent::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<SoundResponseEvent> {
		if (incoming_type_id == SoundResponseEvent::type_id) {
			return std::make_shared<SoundResponseEvent>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
