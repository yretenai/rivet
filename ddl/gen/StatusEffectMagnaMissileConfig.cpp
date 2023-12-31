// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/StatusEffectMagnaMissileConfig.hpp>

namespace rivet::ddl::generated {
	StatusEffectMagnaMissileConfig::StatusEffectMagnaMissileConfig([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): StatusEffectConfig(serialized) {

	}

	[[nodiscard]] auto
	StatusEffectMagnaMissileConfig::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	StatusEffectMagnaMissileConfig::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<StatusEffectMagnaMissileConfig> {
		if (incoming_type_id == StatusEffectMagnaMissileConfig::type_id) {
			return std::make_shared<StatusEffectMagnaMissileConfig>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
