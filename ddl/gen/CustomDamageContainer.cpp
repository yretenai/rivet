// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/CustomDamageBase.hpp> 

#include <rivet/ddl/generated/CustomDamageContainer.hpp>

namespace rivet::ddl::generated {
	CustomDamageContainer::CustomDamageContainer([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		CustomDamage = serialized->unwrap_into<rivet::ddl::generated::CustomDamageBase>(CustomDamage_type_id); 
	}

	[[nodiscard]] auto
	CustomDamageContainer::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	CustomDamageContainer::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<CustomDamageContainer> {
		if (incoming_type_id == CustomDamageContainer::type_id) {
			return std::make_shared<CustomDamageContainer>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
