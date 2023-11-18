// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/RidableJumpData.hpp>

namespace rivet::ddl::generated {
	RidableJumpData::RidableJumpData([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		OverrideHeight = serialized->get_float(OverrideHeight_type_id);
		MinJumpSpeed = serialized->get_float(MinJumpSpeed_type_id);
		MaxJumpSpeed = serialized->get_float(MaxJumpSpeed_type_id);
		MinJumpDist = serialized->get_float(MinJumpDist_type_id);
		MaxJumpDist = serialized->get_float(MaxJumpDist_type_id); 
	}

	[[nodiscard]] auto
	RidableJumpData::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	RidableJumpData::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<RidableJumpData> {
		if (incoming_type_id == RidableJumpData::type_id) {
			return std::make_shared<RidableJumpData>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
