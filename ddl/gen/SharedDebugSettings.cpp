// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/SharedDebugSettings.hpp>

namespace rivet::ddl::generated {
	SharedDebugSettings::SharedDebugSettings([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		PadIdxOffset = serialized->get_int32(PadIdxOffset_type_id, 0);
		InvertLook = serialized->get_bool(InvertLook_type_id, false);
		DebugFPSEnable = serialized->get_bool(DebugFPSEnable_type_id, false);
		DebugActorDefaultFilter = serialized->get_enum<rivet::ddl::generated::xaa15dda>(DebugActorDefaultFilter_type_id, rivet::ddl::generated::xaa15dda_values, rivet::ddl::generated::xaa15dda::Any);
		DebugActorListDistance = serialized->get_int32(DebugActorListDistance_type_id, 40);
		DebugActorCamDistDrawLineTo = serialized->get_float(DebugActorCamDistDrawLineTo_type_id, 1.000000);
		HugeSingleFrameMoveDist = serialized->get_float(HugeSingleFrameMoveDist_type_id, 1000.000000);
		SimpleAnimatedComplainOnNoDriver = serialized->get_bool(SimpleAnimatedComplainOnNoDriver_type_id, true);
		OnEnterWithJustHeroIsError = serialized->get_bool(OnEnterWithJustHeroIsError_type_id, true);
		WatermarkString = serialized->get_string(WatermarkString_type_id, {}); 
	}

	[[nodiscard]] auto
	SharedDebugSettings::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	SharedDebugSettings::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<SharedDebugSettings> {
		if (incoming_type_id == SharedDebugSettings::type_id) {
			return std::make_shared<SharedDebugSettings>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
