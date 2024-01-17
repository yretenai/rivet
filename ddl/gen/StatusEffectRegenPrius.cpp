// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/StatusEffectRegenPrius.hpp>

namespace rivet::ddl::generated {
	StatusEffectRegenPrius::StatusEffectRegenPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): StatusEffectBasePrius(serialized) {
		IsPercent = serialized->get_bool(IsPercent_type_id, false);
		CanRessurect = serialized->get_bool(CanRessurect_type_id, false); 
	}

	[[nodiscard]] auto
	StatusEffectRegenPrius::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	StatusEffectRegenPrius::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<StatusEffectRegenPrius> {
		if (incoming_type_id == StatusEffectRegenPrius::type_id) {
			return std::make_shared<StatusEffectRegenPrius>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
