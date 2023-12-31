// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/KeyFrameModResponseEvent.hpp>

namespace rivet::ddl::generated {
	KeyFrameModResponseEvent::KeyFrameModResponseEvent([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): ResponseEvent(serialized) {
		ModifierName = serialized->get_string(ModifierName_type_id);
		XValue = serialized->get_float(XValue_type_id);
		YValue = serialized->get_float(YValue_type_id);
		ZValue = serialized->get_float(ZValue_type_id);
		SetGlobal = serialized->get_bool(SetGlobal_type_id);
		ApplyModifier = serialized->get_bool(ApplyModifier_type_id); 
	}

	[[nodiscard]] auto
	KeyFrameModResponseEvent::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	KeyFrameModResponseEvent::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<KeyFrameModResponseEvent> {
		if (incoming_type_id == KeyFrameModResponseEvent::type_id) {
			return std::make_shared<KeyFrameModResponseEvent>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
