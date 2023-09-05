// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/StatusEffectClonePrius.hpp>

namespace rivet::ddl::generated {
	StatusEffectClonePrius::StatusEffectClonePrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): StatusEffectBasePrius(serialized) {
		IsPercent = serialized->get_bool(IsPercent_type_id);
		MaxClones = serialized->get_int32(MaxClones_type_id);
		IsMaxHPPercent = serialized->get_bool(IsMaxHPPercent_type_id); 
	}

	auto
	StatusEffectClonePrius::get_type_id() const noexcept -> rivet::rivet_type_id {
		return type_id;
	}

	[[nodiscard]] auto
	StatusEffectClonePrius::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	StatusEffectClonePrius::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<StatusEffectClonePrius> {
		if (incoming_type_id == StatusEffectClonePrius::type_id) {
			return std::make_shared<StatusEffectClonePrius>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
