// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/AimAssistTargetZone.hpp> 

#include <rivet/ddl/generated/AimAssistTargetZoneListItem.hpp>

namespace rivet::ddl::generated {
	AimAssistTargetZoneListItem::AimAssistTargetZoneListItem([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		TargetZone = serialized->unwrap_into<rivet::ddl::generated::AimAssistTargetZone>(TargetZone_type_id); 
	}

	[[nodiscard]] auto
	AimAssistTargetZoneListItem::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	AimAssistTargetZoneListItem::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<AimAssistTargetZoneListItem> {
		if (incoming_type_id == AimAssistTargetZoneListItem::type_id) {
			return std::make_shared<AimAssistTargetZoneListItem>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
