// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/VehicleTypeListEntry.hpp>

namespace rivet::ddl::generated {
	VehicleTypeListEntry::VehicleTypeListEntry([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		VehicleClass = serialized->get_enum<rivet::ddl::generated::VehicleClass>(VehicleClass_type_id, rivet::ddl::generated::VehicleClass_values);
		Actor = serialized->get_string(Actor_type_id);
		Frequency = serialized->get_uint32(Frequency_type_id); 
	}

	[[nodiscard]] auto
	VehicleTypeListEntry::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	VehicleTypeListEntry::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<VehicleTypeListEntry> {
		if (incoming_type_id == VehicleTypeListEntry::type_id) {
			return std::make_shared<VehicleTypeListEntry>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
