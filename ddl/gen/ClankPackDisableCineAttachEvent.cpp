// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/ClankPackDisableCineAttachEvent.hpp>

namespace rivet::ddl::generated {
	ClankPackDisableCineAttachEvent::ClankPackDisableCineAttachEvent([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): EventBase(serialized) {

	}

	[[nodiscard]] auto
	ClankPackDisableCineAttachEvent::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	ClankPackDisableCineAttachEvent::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<ClankPackDisableCineAttachEvent> {
		if (incoming_type_id == ClankPackDisableCineAttachEvent::type_id) {
			return std::make_shared<ClankPackDisableCineAttachEvent>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
