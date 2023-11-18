// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/StructuredLoggingPhysicsBreakableDiagnosticsActionPrius.hpp>

namespace rivet::ddl::generated {
	StructuredLoggingPhysicsBreakableDiagnosticsActionPrius::StructuredLoggingPhysicsBreakableDiagnosticsActionPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): StructuredLoggingActionBase(serialized) {
		ActionType = serialized->get_enum<rivet::ddl::generated::x10228b34>(ActionType_type_id, rivet::ddl::generated::x10228b34_values); 
	}

	[[nodiscard]] auto
	StructuredLoggingPhysicsBreakableDiagnosticsActionPrius::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	StructuredLoggingPhysicsBreakableDiagnosticsActionPrius::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<StructuredLoggingPhysicsBreakableDiagnosticsActionPrius> {
		if (incoming_type_id == StructuredLoggingPhysicsBreakableDiagnosticsActionPrius::type_id) {
			return std::make_shared<StructuredLoggingPhysicsBreakableDiagnosticsActionPrius>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
