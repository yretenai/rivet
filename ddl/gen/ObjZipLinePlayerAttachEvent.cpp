// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/ObjZipLinePlayerAttachEvent.hpp>

namespace rivet::ddl::generated {
	ObjZipLinePlayerAttachEvent::ObjZipLinePlayerAttachEvent([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): EventBase(serialized) {

	}

	[[nodiscard]] auto
	ObjZipLinePlayerAttachEvent::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	ObjZipLinePlayerAttachEvent::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<ObjZipLinePlayerAttachEvent> {
		if (incoming_type_id == ObjZipLinePlayerAttachEvent::type_id) {
			return std::make_shared<ObjZipLinePlayerAttachEvent>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
