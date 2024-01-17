// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/ClankPuzzleTimeData.hpp>

namespace rivet::ddl::generated {
	ClankPuzzleTimeData::ClankPuzzleTimeData([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		FadeInTime = serialized->get_float(FadeInTime_type_id, 0.000000);
		FadeOutTime = serialized->get_float(FadeOutTime_type_id, 1.000000);
		HoldTime = serialized->get_float(HoldTime_type_id, 0.000000); 
	}

	[[nodiscard]] auto
	ClankPuzzleTimeData::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	ClankPuzzleTimeData::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<ClankPuzzleTimeData> {
		if (incoming_type_id == ClankPuzzleTimeData::type_id) {
			return std::make_shared<ClankPuzzleTimeData>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
