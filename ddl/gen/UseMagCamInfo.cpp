// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/UseMagCamInfo.hpp>

namespace rivet::ddl::generated {
	UseMagCamInfo::UseMagCamInfo([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		UseMagCamFOV = serialized->get_float(UseMagCamFOV_type_id);
		UseMagCamFollowHeight = serialized->get_float(UseMagCamFollowHeight_type_id);
		UseMagCamFollowDist = serialized->get_float(UseMagCamFollowDist_type_id);
		UseMagCamTargYOffset = serialized->get_float(UseMagCamTargYOffset_type_id);
		UseMagCamPitchOffet = serialized->get_float(UseMagCamPitchOffet_type_id); 
	}

	[[nodiscard]] auto
	UseMagCamInfo::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	UseMagCamInfo::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<UseMagCamInfo> {
		if (incoming_type_id == UseMagCamInfo::type_id) {
			return std::make_shared<UseMagCamInfo>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
