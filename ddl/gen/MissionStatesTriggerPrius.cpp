// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/MissionStatesTriggerPrius.hpp>

namespace rivet::ddl::generated {
	MissionStatesTriggerPrius::MissionStatesTriggerPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): BaseCustomOverlayTriggerPrius(serialized) {
		MissionName = serialized->get_string(MissionName_type_id);
		MissionStates = serialized->get_bitset<rivet::ddl::generated::x6c9f6d9b>(MissionStates_type_id, rivet::ddl::generated::x6c9f6d9b_values);
		AvailableCoversActiveLoading = serialized->get_bool(AvailableCoversActiveLoading_type_id); 
	}

	[[nodiscard]] auto
	MissionStatesTriggerPrius::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	MissionStatesTriggerPrius::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<MissionStatesTriggerPrius> {
		if (incoming_type_id == MissionStatesTriggerPrius::type_id) {
			return std::make_shared<MissionStatesTriggerPrius>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated