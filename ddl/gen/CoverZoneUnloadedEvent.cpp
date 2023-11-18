// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/CoverZoneUnloadedEvent.hpp>

namespace rivet::ddl::generated {
	CoverZoneUnloadedEvent::CoverZoneUnloadedEvent([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): EventBase(serialized) {
		CoverZoneIndexUnloadedBitField = serialized->get_uint64s(CoverZoneIndexUnloadedBitField_type_id); 
	}

	[[nodiscard]] auto
	CoverZoneUnloadedEvent::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	CoverZoneUnloadedEvent::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<CoverZoneUnloadedEvent> {
		if (incoming_type_id == CoverZoneUnloadedEvent::type_id) {
			return std::make_shared<CoverZoneUnloadedEvent>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
