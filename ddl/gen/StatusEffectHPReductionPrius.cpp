// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/StatusEffectHPReductionPrius.hpp>

namespace rivet::ddl::generated {
	StatusEffectHPReductionPrius::StatusEffectHPReductionPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): StatusEffectBasePrius(serialized) {
		IsPercent = serialized->get_bool(IsPercent_type_id); 
	}

	[[nodiscard]] auto
	StatusEffectHPReductionPrius::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	StatusEffectHPReductionPrius::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<StatusEffectHPReductionPrius> {
		if (incoming_type_id == StatusEffectHPReductionPrius::type_id) {
			return std::make_shared<StatusEffectHPReductionPrius>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
