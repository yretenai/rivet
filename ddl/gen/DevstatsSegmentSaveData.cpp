// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/DevstatsSegmentSaveData.hpp>

namespace rivet::ddl::generated {
	DevstatsSegmentSaveData::DevstatsSegmentSaveData([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		SegmentId = serialized->get_string(SegmentId_type_id, {});
		SegmentName = serialized->get_string(SegmentName_type_id, {});
		ParentSegmentName = serialized->get_string(ParentSegmentName_type_id, {});
		ParentSegmentId = serialized->get_uint32(ParentSegmentId_type_id, 0u);
		UsePauseTime = serialized->get_bool(UsePauseTime_type_id, false);
		StartTime = serialized->get_double(StartTime_type_id, -1.000000);
		Duration = serialized->get_float(Duration_type_id, 0.000000f);
		SegmentType = serialized->get_enum<rivet::ddl::generated::xc6f5c0d7>(SegmentType_type_id, rivet::ddl::generated::xc6f5c0d7_values, rivet::ddl::generated::xc6f5c0d7::Playthrough);
		SegmentFlags = serialized->get_bitset<rivet::ddl::generated::xc353b5be>(SegmentFlags_type_id, rivet::ddl::generated::xc353b5be_values, 0u); 
	}

	[[nodiscard]] auto
	DevstatsSegmentSaveData::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	DevstatsSegmentSaveData::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<DevstatsSegmentSaveData> {
		if (incoming_type_id == DevstatsSegmentSaveData::type_id) {
			return std::make_shared<DevstatsSegmentSaveData>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
