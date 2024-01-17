// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/SimpleBreakablePrius.hpp>

namespace rivet::ddl::generated {
	SimpleBreakablePrius::SimpleBreakablePrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		SaveDestroyedState = serialized->get_bool(SaveDestroyedState_type_id, false);
		MaxHealth = serialized->get_float(MaxHealth_type_id, 1.000000);
		DestroyDelay = serialized->get_float(DestroyDelay_type_id, 0.000000);
		HideOnDeath = serialized->get_bool(HideOnDeath_type_id, true);
		StumpModel = serialized->get_string(StumpModel_type_id, {});
		StumpCollision = serialized->get_bool(StumpCollision_type_id, true); 
	}

	[[nodiscard]] auto
	SimpleBreakablePrius::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	SimpleBreakablePrius::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<SimpleBreakablePrius> {
		if (incoming_type_id == SimpleBreakablePrius::type_id) {
			return std::make_shared<SimpleBreakablePrius>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
