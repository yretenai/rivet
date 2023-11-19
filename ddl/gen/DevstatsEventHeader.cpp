// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/DevstatsEventHeader.hpp>

namespace rivet::ddl::generated {
	DevstatsEventHeader::DevstatsEventHeader([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		client_timestamp = serialized->get_uint64(client_timestamp_type_id);
		client_timezone = serialized->get_int64(client_timezone_type_id);
		session_id = serialized->get_string(session_id_type_id);
		user_id = serialized->get_string(user_id_type_id);
		psn_account = serialized->get_string(psn_account_type_id);
		build_version = serialized->get_string(build_version_type_id);
		asset_branch = serialized->get_string(asset_branch_type_id);
		code_branch = serialized->get_string(code_branch_type_id);
		executable = serialized->get_string(executable_type_id);
		title_id = serialized->get_string(title_id_type_id);
		PrivacyMode = serialized->get_enum<rivet::ddl::generated::x1cc74abc>(PrivacyMode_type_id, rivet::ddl::generated::x1cc74abc_values);
		platform = serialized->get_string(platform_type_id);
		device_type = serialized->get_string(device_type_type_id);
		np_account_id = serialized->get_string(np_account_id_type_id);
		machine_id = serialized->get_string(machine_id_type_id);
		auth_status = serialized->get_string(auth_status_type_id); 
	}

	[[nodiscard]] auto
	DevstatsEventHeader::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	DevstatsEventHeader::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<DevstatsEventHeader> {
		if (incoming_type_id == DevstatsEventHeader::type_id) {
			return std::make_shared<DevstatsEventHeader>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated