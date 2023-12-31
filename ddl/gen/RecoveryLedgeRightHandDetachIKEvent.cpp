// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/RecoveryLedgeRightHandDetachIKEvent.hpp>

namespace rivet::ddl::generated {
	RecoveryLedgeRightHandDetachIKEvent::RecoveryLedgeRightHandDetachIKEvent([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): EventBase(serialized) {
		BlendOutDuration = serialized->get_float(BlendOutDuration_type_id); 
	}

	[[nodiscard]] auto
	RecoveryLedgeRightHandDetachIKEvent::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	RecoveryLedgeRightHandDetachIKEvent::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<RecoveryLedgeRightHandDetachIKEvent> {
		if (incoming_type_id == RecoveryLedgeRightHandDetachIKEvent::type_id) {
			return std::make_shared<RecoveryLedgeRightHandDetachIKEvent>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
