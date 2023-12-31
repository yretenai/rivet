// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/StatusEffectPoisonPrius.hpp>

namespace rivet::ddl::generated {
	StatusEffectPoisonPrius::StatusEffectPoisonPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): StatusEffectBasePrius(serialized) {

	}

	[[nodiscard]] auto
	StatusEffectPoisonPrius::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	StatusEffectPoisonPrius::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<StatusEffectPoisonPrius> {
		if (incoming_type_id == StatusEffectPoisonPrius::type_id) {
			return std::make_shared<StatusEffectPoisonPrius>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
