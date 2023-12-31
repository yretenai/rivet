// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/RagdollBodyDropEvent.hpp>

namespace rivet::ddl::generated {
	RagdollBodyDropEvent::RagdollBodyDropEvent([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): EventBase(serialized) {
		Material = serialized->get_enum<rivet::ddl::generated::x10b3c4cf>(Material_type_id, rivet::ddl::generated::x10b3c4cf_values);
		Velocity = serialized->get_float(Velocity_type_id);
		IsOutside = serialized->get_bool(IsOutside_type_id); 
	}

	[[nodiscard]] auto
	RagdollBodyDropEvent::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	RagdollBodyDropEvent::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<RagdollBodyDropEvent> {
		if (incoming_type_id == RagdollBodyDropEvent::type_id) {
			return std::make_shared<RagdollBodyDropEvent>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
