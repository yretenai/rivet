// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/DamageModifierPixelizerResistancePrius.hpp>

namespace rivet::ddl::generated {
	DamageModifierPixelizerResistancePrius::DamageModifierPixelizerResistancePrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): DamageModifierIncomingPrius(serialized) {
		StatusAmountMultiplier = serialized->get_float(StatusAmountMultiplier_type_id); 
	}

	auto
	DamageModifierPixelizerResistancePrius::get_type_id() const noexcept -> rivet::rivet_type_id {
		return type_id;
	}

	[[nodiscard]] auto
	DamageModifierPixelizerResistancePrius::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	DamageModifierPixelizerResistancePrius::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<DamageModifierPixelizerResistancePrius> {
		if (incoming_type_id == DamageModifierPixelizerResistancePrius::type_id) {
			return std::make_shared<DamageModifierPixelizerResistancePrius>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
