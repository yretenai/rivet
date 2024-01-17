// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/Cinematic2SyncActionDef.hpp>
#include <rivet/ddl/generated/Cinematic2TrackTagsDef.hpp> 

#include <rivet/ddl/generated/Cinematic2GlobalSyncTrackDef.hpp>

namespace rivet::ddl::generated {
	Cinematic2GlobalSyncTrackDef::Cinematic2GlobalSyncTrackDef([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		Id = serialized->get_uint64(Id_type_id, 0);
		Name = serialized->get_string(Name_type_id, {});
		PlatformFilter = serialized->get_bitset<rivet::ddl::generated::xb52df7e7>(PlatformFilter_type_id, rivet::ddl::generated::xb52df7e7_values, 7);
		Tags = serialized->unwrap_into<rivet::ddl::generated::Cinematic2TrackTagsDef>(Tags_type_id);
		Global = serialized->get_bool(Global_type_id, false);
		Actions = serialized->unwrap_into_many<rivet::ddl::generated::Cinematic2SyncActionDef>(Actions_type_id);
		IgnoreOnSkip = serialized->get_bool(IgnoreOnSkip_type_id, false); 
	}

	[[nodiscard]] auto
	Cinematic2GlobalSyncTrackDef::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	Cinematic2GlobalSyncTrackDef::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<Cinematic2GlobalSyncTrackDef> {
		if (incoming_type_id == Cinematic2GlobalSyncTrackDef::type_id) {
			return std::make_shared<Cinematic2GlobalSyncTrackDef>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
