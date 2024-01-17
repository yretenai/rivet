// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/DialogDebugRequestEvent.hpp>

namespace rivet::ddl::generated {
	DialogDebugRequestEvent::DialogDebugRequestEvent([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): EventBase(serialized) {
		PlayCountId = serialized->get_uint16(PlayCountId_type_id, 0);
		StartTime = serialized->get_float(StartTime_type_id, 0.000000);
		PlayOnlyOnAuthority = serialized->get_bool(PlayOnlyOnAuthority_type_id, false);
		SoundBankAssetId = serialized->get_uint64(SoundBankAssetId_type_id, 0); 
	}

	[[nodiscard]] auto
	DialogDebugRequestEvent::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	DialogDebugRequestEvent::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<DialogDebugRequestEvent> {
		if (incoming_type_id == DialogDebugRequestEvent::type_id) {
			return std::make_shared<DialogDebugRequestEvent>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
