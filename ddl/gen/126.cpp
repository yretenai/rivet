// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/DamageModifierIncomingAllowKnockbackPrius.hpp>

namespace rivet::ddl::generated {
	DamageModifierIncomingAllowKnockbackPrius::DamageModifierIncomingAllowKnockbackPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): DamageModifierIncomingPrius(serialized) {
		AllowedKnockbacks = serialized->get_bitset<rivet::ddl::generated::x8b303a8b>(AllowedKnockbacks_type_id, rivet::ddl::generated::x8b303a8b_values); 
	}

	auto
	DamageModifierIncomingAllowKnockbackPrius::get_type_id() const noexcept -> rivet::rivet_type_id {
		return type_id;
	}

	[[nodiscard]] auto
	DamageModifierIncomingAllowKnockbackPrius::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	DamageModifierIncomingAllowKnockbackPrius::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<DamageModifierIncomingAllowKnockbackPrius> {
		if (incoming_type_id == DamageModifierIncomingAllowKnockbackPrius::type_id) {
			return std::make_shared<DamageModifierIncomingAllowKnockbackPrius>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
