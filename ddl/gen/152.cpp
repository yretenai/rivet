// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/DamageModifierConditionalInvulnerablePrius.hpp>
#include <rivet/ddl/generated/DamageModifierByTypePrius.hpp> 

#include <rivet/ddl/generated/DamageModifierInvulnerablePrius.hpp>

namespace rivet::ddl::generated {
	DamageModifierInvulnerablePrius::DamageModifierInvulnerablePrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): DamageModifierIncomingPrius(serialized) {
		Lifetime = serialized->get_float(Lifetime_type_id);
		AllowReacts = serialized->get_bool(AllowReacts_type_id); 
	}

	auto
	DamageModifierInvulnerablePrius::get_type_id() const noexcept -> rivet::rivet_type_id {
		return type_id;
	}

	[[nodiscard]] auto
	DamageModifierInvulnerablePrius::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	DamageModifierInvulnerablePrius::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<DamageModifierInvulnerablePrius> {
		if (incoming_type_id == DamageModifierInvulnerablePrius::type_id) {
			return std::make_shared<DamageModifierInvulnerablePrius>(serialized);
		}

		auto DamageModifierConditionalInvulnerablePrius_ptr = DamageModifierConditionalInvulnerablePrius::from_substruct(incoming_type_id, serialized);
		if (DamageModifierConditionalInvulnerablePrius_ptr != nullptr) {
			return DamageModifierConditionalInvulnerablePrius_ptr;
		}

		auto DamageModifierByTypePrius_ptr = DamageModifierByTypePrius::from_substruct(incoming_type_id, serialized);
		if (DamageModifierByTypePrius_ptr != nullptr) {
			return DamageModifierByTypePrius_ptr;
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
