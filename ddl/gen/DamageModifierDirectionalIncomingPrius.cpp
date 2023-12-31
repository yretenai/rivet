// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/DamageModifierDirectionalInvulnerablePrius.hpp> 

#include <rivet/ddl/generated/DamageModifierDirectionalIncomingPrius.hpp>

namespace rivet::ddl::generated {
	DamageModifierDirectionalIncomingPrius::DamageModifierDirectionalIncomingPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): DamageModifierIncomingPrius(serialized) {

	}

	[[nodiscard]] auto
	DamageModifierDirectionalIncomingPrius::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	DamageModifierDirectionalIncomingPrius::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<DamageModifierDirectionalIncomingPrius> {
		if (incoming_type_id == DamageModifierDirectionalIncomingPrius::type_id) {
			return std::make_shared<DamageModifierDirectionalIncomingPrius>(serialized);
		}

		auto DamageModifierDirectionalInvulnerablePrius_ptr = DamageModifierDirectionalInvulnerablePrius::from_substruct(incoming_type_id, serialized);
		if (DamageModifierDirectionalInvulnerablePrius_ptr != nullptr) {
			return DamageModifierDirectionalInvulnerablePrius_ptr;
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
