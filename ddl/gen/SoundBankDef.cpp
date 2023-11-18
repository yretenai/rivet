// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/SoundGameSyncDataDef.hpp>
#include <rivet/ddl/generated/SoundEventDef.hpp>
#include <rivet/ddl/generated/SoundWwiseMapDef.hpp>
#include <rivet/ddl/generated/VaultMetaData.hpp> 

#include <rivet/ddl/generated/SoundBankDef.hpp>

namespace rivet::ddl::generated {
	SoundBankDef::SoundBankDef([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		VaultMetaData = serialized->unwrap_into<rivet::ddl::generated::VaultMetaData>(VaultMetaData_type_id);
		IconPath = serialized->get_string(IconPath_type_id);
		Bank = serialized->unwrap_into<rivet::ddl::generated::SoundWwiseMapDef>(Bank_type_id);
		Streams = serialized->unwrap_into_many<rivet::ddl::generated::SoundWwiseMapDef>(Streams_type_id);
		Events = serialized->unwrap_into_many<rivet::ddl::generated::SoundEventDef>(Events_type_id);
		GameSyncData = serialized->unwrap_into<rivet::ddl::generated::SoundGameSyncDataDef>(GameSyncData_type_id);
		AutoLoadOnRef = serialized->get_bool(AutoLoadOnRef_type_id); 
	}

	[[nodiscard]] auto
	SoundBankDef::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	SoundBankDef::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<SoundBankDef> {
		if (incoming_type_id == SoundBankDef::type_id) {
			return std::make_shared<SoundBankDef>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
