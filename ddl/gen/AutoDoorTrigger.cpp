// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/AutoDoorTrigger.hpp>

namespace rivet::ddl::generated {
	AutoDoorTrigger::AutoDoorTrigger([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		OpenVolume = serialized->get_uint64(OpenVolume_type_id);
		CloseVolume = serialized->get_uint64(CloseVolume_type_id);
		OpenRange = serialized->get_float(OpenRange_type_id);
		CloseRange = serialized->get_float(CloseRange_type_id);
		AllegianceChoice = serialized->get_enum<rivet::ddl::generated::x6bdf4ba1>(AllegianceChoice_type_id, rivet::ddl::generated::x6bdf4ba1_values);
		AlleginaceRelation = serialized->get_enum<rivet::ddl::generated::AllegianceRelation>(AlleginaceRelation_type_id, rivet::ddl::generated::AllegianceRelation_values);
		AllowBots = serialized->get_bool(AllowBots_type_id); 
	}

	[[nodiscard]] auto
	AutoDoorTrigger::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	AutoDoorTrigger::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<AutoDoorTrigger> {
		if (incoming_type_id == AutoDoorTrigger::type_id) {
			return std::make_shared<AutoDoorTrigger>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
