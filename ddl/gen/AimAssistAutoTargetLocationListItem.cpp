// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/AimAssistAutoTargetLocation.hpp> 

#include <rivet/ddl/generated/AimAssistAutoTargetLocationListItem.hpp>

namespace rivet::ddl::generated {
	AimAssistAutoTargetLocationListItem::AimAssistAutoTargetLocationListItem([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		AutoTargetLocation = serialized->unwrap_into<rivet::ddl::generated::AimAssistAutoTargetLocation>(AutoTargetLocation_type_id); 
	}

	[[nodiscard]] auto
	AimAssistAutoTargetLocationListItem::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	AimAssistAutoTargetLocationListItem::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<AimAssistAutoTargetLocationListItem> {
		if (incoming_type_id == AimAssistAutoTargetLocationListItem::type_id) {
			return std::make_shared<AimAssistAutoTargetLocationListItem>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated