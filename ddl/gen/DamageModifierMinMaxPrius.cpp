// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/DamageModifierMinMaxPrius.hpp>

namespace rivet::ddl::generated {
	DamageModifierMinMaxPrius::DamageModifierMinMaxPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): DamageModifierIncomingPrius(serialized) {
		Min = serialized->get_float(Min_type_id);
		Max = serialized->get_float(Max_type_id); 
	}

	[[nodiscard]] auto
	DamageModifierMinMaxPrius::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	DamageModifierMinMaxPrius::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<DamageModifierMinMaxPrius> {
		if (incoming_type_id == DamageModifierMinMaxPrius::type_id) {
			return std::make_shared<DamageModifierMinMaxPrius>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
