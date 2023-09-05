// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/VehicleSetListEntry.hpp> 

#include <rivet/ddl/generated/VehicleSetConfig.hpp>

namespace rivet::ddl::generated {
	VehicleSetConfig::VehicleSetConfig([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): ConfigBase(serialized) {
		VehicleSetList = serialized->unwrap_into_many<rivet::ddl::generated::VehicleSetListEntry>(VehicleSetList_type_id); 
	}

	auto
	VehicleSetConfig::get_type_id() const noexcept -> rivet::rivet_type_id {
		return type_id;
	}

	[[nodiscard]] auto
	VehicleSetConfig::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	VehicleSetConfig::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<VehicleSetConfig> {
		if (incoming_type_id == VehicleSetConfig::type_id) {
			return std::make_shared<VehicleSetConfig>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
