// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/PerformWarpEvent.hpp>

namespace rivet::ddl::generated {
	PerformWarpEvent::PerformWarpEvent([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): EventBase(serialized) {
		ResetType = serialized->get_enum<rivet::ddl::generated::xcf5ccb68>(ResetType_type_id, rivet::ddl::generated::xcf5ccb68_values);
		ResetState = serialized->get_bool(ResetState_type_id);
		ResetCamera = serialized->get_bool(ResetCamera_type_id);
		RelativeCamera = serialized->get_bool(RelativeCamera_type_id);
		RequireAuthority = serialized->get_bool(RequireAuthority_type_id);
		ResetWeapons = serialized->get_bool(ResetWeapons_type_id);
		ForceLoadScren = serialized->get_bool(ForceLoadScren_type_id);
		Cloaked = serialized->get_bool(Cloaked_type_id);
		UseDestinationActorMatrix = serialized->get_bool(UseDestinationActorMatrix_type_id);
		ForceMoveZero = serialized->get_bool(ForceMoveZero_type_id); 
	}

	[[nodiscard]] auto
	PerformWarpEvent::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	PerformWarpEvent::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<PerformWarpEvent> {
		if (incoming_type_id == PerformWarpEvent::type_id) {
			return std::make_shared<PerformWarpEvent>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
