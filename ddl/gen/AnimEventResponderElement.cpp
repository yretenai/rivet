// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/AnimListElement.hpp> 

#include <rivet/ddl/generated/AnimEventResponderElement.hpp>

namespace rivet::ddl::generated {
	AnimEventResponderElement::AnimEventResponderElement([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		EventName = serialized->get_string(EventName_type_id);
		onDerivedEvent = serialized->get_bool(onDerivedEvent_type_id);
		Animations = serialized->unwrap_into_many<rivet::ddl::generated::AnimListElement>(Animations_type_id); 
	}

	[[nodiscard]] auto
	AnimEventResponderElement::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	AnimEventResponderElement::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<AnimEventResponderElement> {
		if (incoming_type_id == AnimEventResponderElement::type_id) {
			return std::make_shared<AnimEventResponderElement>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
