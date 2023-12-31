// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/DamageModifierDirectionalInvulnerablePrius.hpp>

namespace rivet::ddl::generated {
	DamageModifierDirectionalInvulnerablePrius::DamageModifierDirectionalInvulnerablePrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): DamageModifierDirectionalIncomingPrius(serialized) {

	}

	[[nodiscard]] auto
	DamageModifierDirectionalInvulnerablePrius::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	DamageModifierDirectionalInvulnerablePrius::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<DamageModifierDirectionalInvulnerablePrius> {
		if (incoming_type_id == DamageModifierDirectionalInvulnerablePrius::type_id) {
			return std::make_shared<DamageModifierDirectionalInvulnerablePrius>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
