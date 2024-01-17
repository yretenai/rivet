// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/TunnelerJumpParams.hpp>

namespace rivet::ddl::generated {
	TunnelerJumpParams::TunnelerJumpParams([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		IdealJumpAngle = serialized->get_float(IdealJumpAngle_type_id, 20.000000);
		MinimumJumpDistance = serialized->get_float(MinimumJumpDistance_type_id, 10.000000);
		TargetSearchDistance = serialized->get_float(TargetSearchDistance_type_id, 40.000000);
		TargetSearchHalfAngle = serialized->get_float(TargetSearchHalfAngle_type_id, 10.000000);
		TargetSearchHeight = serialized->get_float(TargetSearchHeight_type_id, 25.000000); 
	}

	[[nodiscard]] auto
	TunnelerJumpParams::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	TunnelerJumpParams::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<TunnelerJumpParams> {
		if (incoming_type_id == TunnelerJumpParams::type_id) {
			return std::make_shared<TunnelerJumpParams>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
