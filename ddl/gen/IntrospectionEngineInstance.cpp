// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/IntrospectionEngineInstance.hpp>

namespace rivet::ddl::generated {
	IntrospectionEngineInstance::IntrospectionEngineInstance([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		Port = serialized->get_int32(Port_type_id);
		Ip = serialized->get_string(Ip_type_id);
		HostName = serialized->get_string(HostName_type_id);
		AppName = serialized->get_string(AppName_type_id);
		Platform = serialized->get_string(Platform_type_id);
		IsTool = serialized->get_bool(IsTool_type_id);
		DebugMem = serialized->get_bool(DebugMem_type_id); 
	}

	[[nodiscard]] auto
	IntrospectionEngineInstance::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	IntrospectionEngineInstance::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<IntrospectionEngineInstance> {
		if (incoming_type_id == IntrospectionEngineInstance::type_id) {
			return std::make_shared<IntrospectionEngineInstance>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
