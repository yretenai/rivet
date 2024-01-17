// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/ElementalBoneEffectEvent.hpp>

namespace rivet::ddl::generated {
	ElementalBoneEffectEvent::ElementalBoneEffectEvent([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): EventBase(serialized) {
		ParentLocator = serialized->get_string(ParentLocator_type_id, {});
		ChildLocator = serialized->get_string(ChildLocator_type_id, {});
		CustomTag = serialized->get_string(CustomTag_type_id, {}); 
	}

	[[nodiscard]] auto
	ElementalBoneEffectEvent::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	ElementalBoneEffectEvent::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<ElementalBoneEffectEvent> {
		if (incoming_type_id == ElementalBoneEffectEvent::type_id) {
			return std::make_shared<ElementalBoneEffectEvent>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
