// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/StatusEffectVampirePrius.hpp>

namespace rivet::ddl::generated {
	StatusEffectVampirePrius::StatusEffectVampirePrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): StatusEffectBasePrius(serialized) {
		IsPercent = serialized->get_bool(IsPercent_type_id); 
	}

	[[nodiscard]] auto
	StatusEffectVampirePrius::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	StatusEffectVampirePrius::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<StatusEffectVampirePrius> {
		if (incoming_type_id == StatusEffectVampirePrius::type_id) {
			return std::make_shared<StatusEffectVampirePrius>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
