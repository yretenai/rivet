// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/CVCShapeConfig.hpp> 

#include <rivet/ddl/generated/HeroCVCConfig.hpp>

namespace rivet::ddl::generated {
	HeroCVCConfig::HeroCVCConfig([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		CVCMoveStand = serialized->unwrap_into<rivet::ddl::generated::CVCShapeConfig>(CVCMoveStand_type_id);
		CVCMoveCrouch = serialized->unwrap_into<rivet::ddl::generated::CVCShapeConfig>(CVCMoveCrouch_type_id);
		CVCMoveCoverLow = serialized->unwrap_into<rivet::ddl::generated::CVCShapeConfig>(CVCMoveCoverLow_type_id);
		CVCMoveCoverHigh = serialized->unwrap_into<rivet::ddl::generated::CVCShapeConfig>(CVCMoveCoverHigh_type_id);
		CVCMoveLedge = serialized->unwrap_into<rivet::ddl::generated::CVCShapeConfig>(CVCMoveLedge_type_id);
		CVCCollStand = serialized->unwrap_into<rivet::ddl::generated::CVCShapeConfig>(CVCCollStand_type_id);
		CVCCollCrouch = serialized->unwrap_into<rivet::ddl::generated::CVCShapeConfig>(CVCCollCrouch_type_id);
		CVCCollCoverLow = serialized->unwrap_into<rivet::ddl::generated::CVCShapeConfig>(CVCCollCoverLow_type_id);
		CVCCollCoverHigh = serialized->unwrap_into<rivet::ddl::generated::CVCShapeConfig>(CVCCollCoverHigh_type_id);
		CVCCollLedge = serialized->unwrap_into<rivet::ddl::generated::CVCShapeConfig>(CVCCollLedge_type_id); 
	}

	[[nodiscard]] auto
	HeroCVCConfig::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	HeroCVCConfig::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<HeroCVCConfig> {
		if (incoming_type_id == HeroCVCConfig::type_id) {
			return std::make_shared<HeroCVCConfig>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated