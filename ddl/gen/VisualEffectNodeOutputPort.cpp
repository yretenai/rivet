// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/VisualEffectNodeOutputPort.hpp>

namespace rivet::ddl::generated {
	VisualEffectNodeOutputPort::VisualEffectNodeOutputPort([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		InternalName = serialized->get_string(InternalName_type_id);
		Type = serialized->get_string(Type_type_id); 
	}

	[[nodiscard]] auto
	VisualEffectNodeOutputPort::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	VisualEffectNodeOutputPort::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<VisualEffectNodeOutputPort> {
		if (incoming_type_id == VisualEffectNodeOutputPort::type_id) {
			return std::make_shared<VisualEffectNodeOutputPort>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated