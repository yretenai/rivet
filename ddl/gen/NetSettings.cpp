// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/NetSettings.hpp>

namespace rivet::ddl::generated {
	NetSettings::NetSettings([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		LanTimeoutEnable = serialized->get_bool(LanTimeoutEnable_type_id, true);
		VersionCheckEnable = serialized->get_bool(VersionCheckEnable_type_id, true);
		PingPort = serialized->get_uint16(PingPort_type_id, 0);
		PingPortExternal = serialized->get_uint16(PingPortExternal_type_id, 0);
		RoomListRequestPort = serialized->get_uint16(RoomListRequestPort_type_id, 0);
		RoomListResponsePort = serialized->get_uint16(RoomListResponsePort_type_id, 0);
		DefaultBrowsePool = serialized->get_string(DefaultBrowsePool_type_id, "Default_Browse_Pool");
		RestrictBrowseGamesToFriends = serialized->get_bool(RestrictBrowseGamesToFriends_type_id, false);
		RestoreRoomAvailableWhenLoseClients = serialized->get_bool(RestoreRoomAvailableWhenLoseClients_type_id, false);
		IntrospectionEnable = serialized->get_bool(IntrospectionEnable_type_id, false);
		TitleId = serialized->get_uint64(TitleId_type_id, 0);
		VersionId = serialized->get_uint32(VersionId_type_id, 0);
		LocalAddress = serialized->get_uint32(LocalAddress_type_id, 0);
		Enable = serialized->get_bool(Enable_type_id, false);
		ProfilingEnable = serialized->get_bool(ProfilingEnable_type_id, false);
		LanEnable = serialized->get_bool(LanEnable_type_id, true);
		P2PEnable = serialized->get_bool(P2PEnable_type_id, false);
		VoiceChatEnable = serialized->get_bool(VoiceChatEnable_type_id, true);
		AwardsEnable = serialized->get_bool(AwardsEnable_type_id, false); 
	}

	[[nodiscard]] auto
	NetSettings::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	NetSettings::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<NetSettings> {
		if (incoming_type_id == NetSettings::type_id) {
			return std::make_shared<NetSettings>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
