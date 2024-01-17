// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/JumpTakeoffEvent.hpp>

namespace rivet::ddl::generated {
	JumpTakeoffEvent::JumpTakeoffEvent([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): EventBase(serialized) {
		Material = serialized->get_enum<rivet::ddl::generated::x10b3c4cf>(Material_type_id, rivet::ddl::generated::x10b3c4cf_values, rivet::ddl::generated::x10b3c4cf::None); 
	}

	[[nodiscard]] auto
	JumpTakeoffEvent::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	JumpTakeoffEvent::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<JumpTakeoffEvent> {
		if (incoming_type_id == JumpTakeoffEvent::type_id) {
			return std::make_shared<JumpTakeoffEvent>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
