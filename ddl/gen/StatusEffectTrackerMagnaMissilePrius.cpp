// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/StatusEffectTrackerMagnaMissilePrius.hpp>

namespace rivet::ddl::generated {
	StatusEffectTrackerMagnaMissilePrius::StatusEffectTrackerMagnaMissilePrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): StatusEffectTrackerBasePrius(serialized) {

	}

	[[nodiscard]] auto
	StatusEffectTrackerMagnaMissilePrius::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	StatusEffectTrackerMagnaMissilePrius::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<StatusEffectTrackerMagnaMissilePrius> {
		if (incoming_type_id == StatusEffectTrackerMagnaMissilePrius::type_id) {
			return std::make_shared<StatusEffectTrackerMagnaMissilePrius>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
