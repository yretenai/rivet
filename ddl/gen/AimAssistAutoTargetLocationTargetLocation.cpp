// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/AimAssistAutoTargetLocationTargetLocation.hpp>

namespace rivet::ddl::generated {
	AimAssistAutoTargetLocationTargetLocation::AimAssistAutoTargetLocationTargetLocation([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): AimAssistAutoTargetLocation(serialized) {
		TargetIndex = serialized->get_uint8(TargetIndex_type_id); 
	}

	[[nodiscard]] auto
	AimAssistAutoTargetLocationTargetLocation::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	AimAssistAutoTargetLocationTargetLocation::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<AimAssistAutoTargetLocationTargetLocation> {
		if (incoming_type_id == AimAssistAutoTargetLocationTargetLocation::type_id) {
			return std::make_shared<AimAssistAutoTargetLocationTargetLocation>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
