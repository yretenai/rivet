// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/AnimLookChangeEvent.hpp>

namespace rivet::ddl::generated {
	AnimLookChangeEvent::AnimLookChangeEvent([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): EventBase(serialized) {
		DisableLooks = serialized->get_strings(DisableLooks_type_id);
		EnableLooks = serialized->get_strings(EnableLooks_type_id); 
	}

	[[nodiscard]] auto
	AnimLookChangeEvent::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	AnimLookChangeEvent::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<AnimLookChangeEvent> {
		if (incoming_type_id == AnimLookChangeEvent::type_id) {
			return std::make_shared<AnimLookChangeEvent>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
