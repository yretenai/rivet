// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/OnVolumeHunterEnterVolumeActionPrius.hpp>

namespace rivet::ddl::generated {
	OnVolumeHunterEnterVolumeActionPrius::OnVolumeHunterEnterVolumeActionPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		ActionType = serialized->get_enum<rivet::ddl::generated::x10228b34>(ActionType_type_id, rivet::ddl::generated::x10228b34_values, rivet::ddl::generated::x10228b34::Events);
		StartActive = serialized->get_bool(StartActive_type_id, true);
		SignalMax = serialized->get_int32(SignalMax_type_id, 1);
		IncludeDead = serialized->get_bool(IncludeDead_type_id, true);
		SignalEmptyOnActivate = serialized->get_bool(SignalEmptyOnActivate_type_id, true); 
	}

	[[nodiscard]] auto
	OnVolumeHunterEnterVolumeActionPrius::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	OnVolumeHunterEnterVolumeActionPrius::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<OnVolumeHunterEnterVolumeActionPrius> {
		if (incoming_type_id == OnVolumeHunterEnterVolumeActionPrius::type_id) {
			return std::make_shared<OnVolumeHunterEnterVolumeActionPrius>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
