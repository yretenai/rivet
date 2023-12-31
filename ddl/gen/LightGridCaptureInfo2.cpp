// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/CaptureGridInfo2.hpp>
#include <rivet/ddl/generated/CaptureJobInfo.hpp> 

#include <rivet/ddl/generated/LightGridCaptureInfo2.hpp>

namespace rivet::ddl::generated {
	LightGridCaptureInfo2::LightGridCaptureInfo2([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		JobName = serialized->get_string(JobName_type_id);
		JobInfo = serialized->unwrap_into<rivet::ddl::generated::CaptureJobInfo>(JobInfo_type_id);
		GridInfo = serialized->unwrap_into_many<rivet::ddl::generated::CaptureGridInfo2>(GridInfo_type_id);
		Zones = serialized->get_strings(Zones_type_id);
		Atmosphere = serialized->get_string(Atmosphere_type_id);
		ErrorLogPath = serialized->get_string(ErrorLogPath_type_id);
		ProgressLogPath = serialized->get_string(ProgressLogPath_type_id);
		ZoneLightbinRelativePath = serialized->get_string(ZoneLightbinRelativePath_type_id);
		CaptureDirectOnly = serialized->get_bool(CaptureDirectOnly_type_id);
		HighQualityCapture = serialized->get_bool(HighQualityCapture_type_id);
		LightingCondition = serialized->get_enum<rivet::ddl::generated::LightingConditions>(LightingCondition_type_id, rivet::ddl::generated::LightingConditions_values);
		BounceCount = serialized->get_int32(BounceCount_type_id); 
	}

	[[nodiscard]] auto
	LightGridCaptureInfo2::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	LightGridCaptureInfo2::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<LightGridCaptureInfo2> {
		if (incoming_type_id == LightGridCaptureInfo2::type_id) {
			return std::make_shared<LightGridCaptureInfo2>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
