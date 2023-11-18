// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/PickupAttachmentTrackerPrius.hpp>

namespace rivet::ddl::generated {
	PickupAttachmentTrackerPrius::PickupAttachmentTrackerPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		PickupAssetID = serialized->get_uint64(PickupAssetID_type_id);
		LocatorName = serialized->get_string(LocatorName_type_id);
		DropLootForKillerType = serialized->get_enum<rivet::ddl::generated::xa7ea7084>(DropLootForKillerType_type_id, rivet::ddl::generated::xa7ea7084_values); 
	}

	[[nodiscard]] auto
	PickupAttachmentTrackerPrius::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	PickupAttachmentTrackerPrius::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<PickupAttachmentTrackerPrius> {
		if (incoming_type_id == PickupAttachmentTrackerPrius::type_id) {
			return std::make_shared<PickupAttachmentTrackerPrius>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
