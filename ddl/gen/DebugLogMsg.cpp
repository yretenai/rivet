// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/LogInfo.hpp> 

#include <rivet/ddl/generated/DebugLogMsg.hpp>

namespace rivet::ddl::generated {
	DebugLogMsg::DebugLogMsg([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		ActorHandle = serialized->get_uint32(ActorHandle_type_id, 0);
		Frame = serialized->get_uint32(Frame_type_id, 0);
		SystemName = serialized->get_enum<rivet::ddl::generated::x5578becf>(SystemName_type_id, rivet::ddl::generated::x5578becf_values, rivet::ddl::generated::x5578becf::LogSystemUnknown);
		Data = serialized->unwrap_into_many<rivet::ddl::generated::LogInfo>(Data_type_id); 
	}

	[[nodiscard]] auto
	DebugLogMsg::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	DebugLogMsg::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<DebugLogMsg> {
		if (incoming_type_id == DebugLogMsg::type_id) {
			return std::make_shared<DebugLogMsg>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
