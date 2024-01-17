// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/CameraAimContextConfig.hpp> 

#include <rivet/ddl/generated/StateDependentCameraConfigData.hpp>

namespace rivet::ddl::generated {
	StateDependentCameraConfigData::StateDependentCameraConfigData([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		StateString = serialized->get_string(StateString_type_id, "");
		AimContext = serialized->unwrap_into<rivet::ddl::generated::CameraAimContextConfig>(AimContext_type_id);
		AllowCameraInput = serialized->get_bool(AllowCameraInput_type_id, true); 
	}

	[[nodiscard]] auto
	StateDependentCameraConfigData::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	StateDependentCameraConfigData::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<StateDependentCameraConfigData> {
		if (incoming_type_id == StateDependentCameraConfigData::type_id) {
			return std::make_shared<StateDependentCameraConfigData>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
