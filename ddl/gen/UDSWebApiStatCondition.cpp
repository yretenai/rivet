// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/UDSWebApiStatProperty.hpp> 

#include <rivet/ddl/generated/UDSWebApiStatCondition.hpp>

namespace rivet::ddl::generated {
	UDSWebApiStatCondition::UDSWebApiStatCondition([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		eventName = serialized->get_string(eventName_type_id);
		property = serialized->unwrap_into<rivet::ddl::generated::UDSWebApiStatProperty>(property_type_id); 
	}

	[[nodiscard]] auto
	UDSWebApiStatCondition::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	UDSWebApiStatCondition::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<UDSWebApiStatCondition> {
		if (incoming_type_id == UDSWebApiStatCondition::type_id) {
			return std::make_shared<UDSWebApiStatCondition>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
