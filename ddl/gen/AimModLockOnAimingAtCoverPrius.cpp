// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/AimModLockOnAimingAtCoverPrius.hpp>

namespace rivet::ddl::generated {
	AimModLockOnAimingAtCoverPrius::AimModLockOnAimingAtCoverPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): AimModifierPrius(serialized) {
		SourceLocator = serialized->get_string(SourceLocator_type_id);
		CollRadius = serialized->get_float(CollRadius_type_id);
		LockRangeFromTargetToCover = serialized->get_float(LockRangeFromTargetToCover_type_id);
		LockDelay = serialized->get_float(LockDelay_type_id); 
	}

	[[nodiscard]] auto
	AimModLockOnAimingAtCoverPrius::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	AimModLockOnAimingAtCoverPrius::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<AimModLockOnAimingAtCoverPrius> {
		if (incoming_type_id == AimModLockOnAimingAtCoverPrius::type_id) {
			return std::make_shared<AimModLockOnAimingAtCoverPrius>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
