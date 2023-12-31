// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/TossTrajectoryDrawPrius.hpp>

namespace rivet::ddl::generated {
	TossTrajectoryDrawPrius::TossTrajectoryDrawPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		ArcMaterial = serialized->get_string(ArcMaterial_type_id);
		ArcWidth = serialized->get_float(ArcWidth_type_id);
		DecalTexture = serialized->get_string(DecalTexture_type_id);
		DecalSize = serialized->get_float(DecalSize_type_id);
		PointOfImpact = serialized->get_string(PointOfImpact_type_id); 
	}

	[[nodiscard]] auto
	TossTrajectoryDrawPrius::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	TossTrajectoryDrawPrius::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<TossTrajectoryDrawPrius> {
		if (incoming_type_id == TossTrajectoryDrawPrius::type_id) {
			return std::make_shared<TossTrajectoryDrawPrius>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
