// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/ExplosiveCrateDamage.hpp>

namespace rivet::ddl::generated {
	ExplosiveCrateDamage::ExplosiveCrateDamage([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		DamageRadius = serialized->get_float(DamageRadius_type_id);
		DamageAmount = serialized->get_float(DamageAmount_type_id); 
	}

	[[nodiscard]] auto
	ExplosiveCrateDamage::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	ExplosiveCrateDamage::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<ExplosiveCrateDamage> {
		if (incoming_type_id == ExplosiveCrateDamage::type_id) {
			return std::make_shared<ExplosiveCrateDamage>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
