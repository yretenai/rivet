// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/SyncedAnimImpactDataBase.hpp> 

#include <rivet/ddl/generated/SyncedAnimImpactEvent.hpp>

namespace rivet::ddl::generated {
	SyncedAnimImpactEvent::SyncedAnimImpactEvent([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): EventBase(serialized) {
		Participant = serialized->get_enum<rivet::ddl::generated::x19aa8603>(Participant_type_id, rivet::ddl::generated::x19aa8603_values, rivet::ddl::generated::x19aa8603::Guest1);
		ImpactData = serialized->unwrap_into<rivet::ddl::generated::SyncedAnimImpactDataBase>(ImpactData_type_id); 
	}

	[[nodiscard]] auto
	SyncedAnimImpactEvent::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	SyncedAnimImpactEvent::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<SyncedAnimImpactEvent> {
		if (incoming_type_id == SyncedAnimImpactEvent::type_id) {
			return std::make_shared<SyncedAnimImpactEvent>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
