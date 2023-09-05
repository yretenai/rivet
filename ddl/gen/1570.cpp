// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/FactionArmorDataElement.hpp> 

#include <rivet/ddl/generated/VanityArmorPerk.hpp>

namespace rivet::ddl::generated {
	VanityArmorPerk::VanityArmorPerk([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): VanityPerkBase(serialized) {
		FactionArmorData = serialized->unwrap_into_many<rivet::ddl::generated::FactionArmorDataElement>(FactionArmorData_type_id); 
	}

	auto
	VanityArmorPerk::get_type_id() const noexcept -> rivet::rivet_type_id {
		return type_id;
	}

	[[nodiscard]] auto
	VanityArmorPerk::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	VanityArmorPerk::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<VanityArmorPerk> {
		if (incoming_type_id == VanityArmorPerk::type_id) {
			return std::make_shared<VanityArmorPerk>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
