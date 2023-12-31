// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/IntrospectionInstanceEntry.hpp> 

#include <rivet/ddl/generated/IntrospectionZoneInstances.hpp>

namespace rivet::ddl::generated {
	IntrospectionZoneInstances::IntrospectionZoneInstances([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		ZoneId = serialized->get_uint64(ZoneId_type_id);
		Instances = serialized->unwrap_into_many<rivet::ddl::generated::IntrospectionInstanceEntry>(Instances_type_id); 
	}

	[[nodiscard]] auto
	IntrospectionZoneInstances::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	IntrospectionZoneInstances::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<IntrospectionZoneInstances> {
		if (incoming_type_id == IntrospectionZoneInstances::type_id) {
			return std::make_shared<IntrospectionZoneInstances>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
