// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/DamageModifierHitDirectionOutgoingPrius.hpp>

namespace rivet::ddl::generated {
	DamageModifierHitDirectionOutgoingPrius::DamageModifierHitDirectionOutgoingPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): DamageModifierOutgoingPrius(serialized) {
		ConeAngle = serialized->get_float(ConeAngle_type_id);
		KeepHitsInCone = serialized->get_bool(KeepHitsInCone_type_id); 
	}

	[[nodiscard]] auto
	DamageModifierHitDirectionOutgoingPrius::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	DamageModifierHitDirectionOutgoingPrius::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<DamageModifierHitDirectionOutgoingPrius> {
		if (incoming_type_id == DamageModifierHitDirectionOutgoingPrius::type_id) {
			return std::make_shared<DamageModifierHitDirectionOutgoingPrius>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated