// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/LogInfo.hpp> 

#include <rivet/ddl/generated/LogEntryData.hpp>

namespace rivet::ddl::generated {
	LogEntryData::LogEntryData([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		ActorHandleRaw = serialized->get_uint32(ActorHandleRaw_type_id);
		SystemName = serialized->get_enum<rivet::ddl::generated::x5578becf>(SystemName_type_id, rivet::ddl::generated::x5578becf_values);
		State = serialized->get_enum<rivet::ddl::generated::xb0ef2921>(State_type_id, rivet::ddl::generated::xb0ef2921_values);
		Data = serialized->unwrap_into_many<rivet::ddl::generated::LogInfo>(Data_type_id); 
	}

	[[nodiscard]] auto
	LogEntryData::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	LogEntryData::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<LogEntryData> {
		if (incoming_type_id == LogEntryData::type_id) {
			return std::make_shared<LogEntryData>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
