// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/PickupMaterialOverride.hpp> 

#include <rivet/ddl/generated/PickupRYNOPlanPrius.hpp>

namespace rivet::ddl::generated {
	PickupRYNOPlanPrius::PickupRYNOPlanPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): GamePickupItemPrius(serialized) {
		SaveID = serialized->get_enum<rivet::ddl::generated::x81d3e717>(SaveID_type_id, rivet::ddl::generated::x81d3e717_values);
		PreviouslyCollectedMaterialOverride = serialized->unwrap_into<rivet::ddl::generated::PickupMaterialOverride>(PreviouslyCollectedMaterialOverride_type_id); 
	}

	[[nodiscard]] auto
	PickupRYNOPlanPrius::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	PickupRYNOPlanPrius::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<PickupRYNOPlanPrius> {
		if (incoming_type_id == PickupRYNOPlanPrius::type_id) {
			return std::make_shared<PickupRYNOPlanPrius>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
