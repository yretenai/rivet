// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/ActorWarpActionPrius.hpp>

namespace rivet::ddl::generated {
	ActorWarpActionPrius::ActorWarpActionPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		ActionType = serialized->get_enum<rivet::ddl::generated::x10228b34>(ActionType_type_id, rivet::ddl::generated::x10228b34_values);
		ForceRelative = serialized->get_bool(ForceRelative_type_id);
		Reset = serialized->get_bool(Reset_type_id);
		ResetType = serialized->get_enum<rivet::ddl::generated::xcf5ccb68>(ResetType_type_id, rivet::ddl::generated::xcf5ccb68_values);
		ResetCamera = serialized->get_bool(ResetCamera_type_id);
		ForceLoadScreen = serialized->get_bool(ForceLoadScreen_type_id);
		UniqueLoadScreenName = serialized->get_string(UniqueLoadScreenName_type_id); 
	}

	[[nodiscard]] auto
	ActorWarpActionPrius::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	ActorWarpActionPrius::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<ActorWarpActionPrius> {
		if (incoming_type_id == ActorWarpActionPrius::type_id) {
			return std::make_shared<ActorWarpActionPrius>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
