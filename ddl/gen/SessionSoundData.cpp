// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/SessionSoundData.hpp>

namespace rivet::ddl::generated {
	SessionSoundData::SessionSoundData([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		SoundBankPath = serialized->get_string(SoundBankPath_type_id);
		SoundEventName = serialized->get_string(SoundEventName_type_id); 
	}

	[[nodiscard]] auto
	SessionSoundData::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	SessionSoundData::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<SessionSoundData> {
		if (incoming_type_id == SessionSoundData::type_id) {
			return std::make_shared<SessionSoundData>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
