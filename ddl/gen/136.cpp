// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/DamageModifierLimitedMultiplyPrius.hpp>
#include <rivet/ddl/generated/DamageModifierMultiplyScriptPrius.hpp> 

#include <rivet/ddl/generated/DamageModifierMultiplyPrius.hpp>

namespace rivet::ddl::generated {
	DamageModifierMultiplyPrius::DamageModifierMultiplyPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): DamageModifierIncomingPrius(serialized) {
		Multiplier = serialized->get_float(Multiplier_type_id);
		StatusMultiplier = serialized->get_float(StatusMultiplier_type_id);
		Lifetime = serialized->get_float(Lifetime_type_id);
		ApplyHeal = serialized->get_bool(ApplyHeal_type_id);
		ApplyToKnockdown = serialized->get_bool(ApplyToKnockdown_type_id);
		DamageFiltersAreExclude = serialized->get_bool(DamageFiltersAreExclude_type_id);
		DamageFilter = serialized->get_enums<rivet::ddl::generated::x8d7e44cf>(DamageFilter_type_id, rivet::ddl::generated::x8d7e44cf_values);
		AllegianceFilter = serialized->get_uint32(AllegianceFilter_type_id);
		ModifiedTag = serialized->get_uint32(ModifiedTag_type_id); 
	}

	auto
	DamageModifierMultiplyPrius::get_type_id() const noexcept -> rivet::rivet_type_id {
		return type_id;
	}

	[[nodiscard]] auto
	DamageModifierMultiplyPrius::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	DamageModifierMultiplyPrius::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<DamageModifierMultiplyPrius> {
		if (incoming_type_id == DamageModifierMultiplyPrius::type_id) {
			return std::make_shared<DamageModifierMultiplyPrius>(serialized);
		}

		auto DamageModifierLimitedMultiplyPrius_ptr = DamageModifierLimitedMultiplyPrius::from_substruct(incoming_type_id, serialized);
		if (DamageModifierLimitedMultiplyPrius_ptr != nullptr) {
			return DamageModifierLimitedMultiplyPrius_ptr;
		}

		auto DamageModifierMultiplyScriptPrius_ptr = DamageModifierMultiplyScriptPrius::from_substruct(incoming_type_id, serialized);
		if (DamageModifierMultiplyScriptPrius_ptr != nullptr) {
			return DamageModifierMultiplyScriptPrius_ptr;
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
