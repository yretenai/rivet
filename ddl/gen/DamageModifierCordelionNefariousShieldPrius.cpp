// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/DamageModifierCordelionNefariousShieldPrius.hpp>

namespace rivet::ddl::generated {
	DamageModifierCordelionNefariousShieldPrius::DamageModifierCordelionNefariousShieldPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): DamageModifierIncomingPrius(serialized) {
		DamageReductionMultiplier = serialized->get_float(DamageReductionMultiplier_type_id); 
	}

	[[nodiscard]] auto
	DamageModifierCordelionNefariousShieldPrius::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	DamageModifierCordelionNefariousShieldPrius::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<DamageModifierCordelionNefariousShieldPrius> {
		if (incoming_type_id == DamageModifierCordelionNefariousShieldPrius::type_id) {
			return std::make_shared<DamageModifierCordelionNefariousShieldPrius>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
