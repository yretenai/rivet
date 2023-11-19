// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/DdlDefaultFallbackHeapInfo.hpp> 

#include <rivet/ddl/generated/FoundationSettings.hpp>

namespace rivet::ddl::generated {
	FoundationSettings::FoundationSettings([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		ProfilingEnable = serialized->get_bool(ProfilingEnable_type_id);
		ProfilingMemorySize = serialized->get_uint32(ProfilingMemorySize_type_id);
		MemAuditEnable = serialized->get_bool(MemAuditEnable_type_id);
		MemAuditOnShutdown = serialized->get_bool(MemAuditOnShutdown_type_id);
		MuteDdlJsonParseWarnings = serialized->get_bool(MuteDdlJsonParseWarnings_type_id);
		DevHttpServerIp = serialized->get_string(DevHttpServerIp_type_id);
		DevHttpServerBindPort = serialized->get_uint16(DevHttpServerBindPort_type_id);
		TtyEnable = serialized->get_bool(TtyEnable_type_id);
		DdlThreadMax = serialized->get_uint32(DdlThreadMax_type_id);
		DdlDefaultFallbackHeapInfo = serialized->unwrap_into<rivet::ddl::generated::DdlDefaultFallbackHeapInfo>(DdlDefaultFallbackHeapInfo_type_id);
		BuildName = serialized->get_string(BuildName_type_id);
		UnbufferedHttpSend = serialized->get_bool(UnbufferedHttpSend_type_id); 
	}

	[[nodiscard]] auto
	FoundationSettings::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	FoundationSettings::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<FoundationSettings> {
		if (incoming_type_id == FoundationSettings::type_id) {
			return std::make_shared<FoundationSettings>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated