// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/VendorPrius.hpp>

namespace rivet::ddl::generated {
	VendorPrius::VendorPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		VendorConfigs = serialized->get_strings(VendorConfigs_type_id);
		StartActive = serialized->get_bool(StartActive_type_id);
		AllowUpgrades = serialized->get_bool(AllowUpgrades_type_id);
		TutorialType = serialized->get_enum<rivet::ddl::generated::xf88150a5>(TutorialType_type_id, rivet::ddl::generated::xf88150a5_values);
		PurchaseVolumeActor = serialized->get_uint64(PurchaseVolumeActor_type_id);
		PurchaseCameraActor = serialized->get_uint64(PurchaseCameraActor_type_id); 
	}

	[[nodiscard]] auto
	VendorPrius::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	VendorPrius::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<VendorPrius> {
		if (incoming_type_id == VendorPrius::type_id) {
			return std::make_shared<VendorPrius>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
