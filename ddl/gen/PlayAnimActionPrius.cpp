// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/PlayAnimActionPrius.hpp>

namespace rivet::ddl::generated {
	PlayAnimActionPrius::PlayAnimActionPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		ActionType = serialized->get_enum<rivet::ddl::generated::x10228b34>(ActionType_type_id, rivet::ddl::generated::x10228b34_values);
		AnimName = serialized->get_string(AnimName_type_id);
		WorldSpace = serialized->get_bool(WorldSpace_type_id);
		PreserveScale = serialized->get_bool(PreserveScale_type_id);
		SkipToEnd = serialized->get_bool(SkipToEnd_type_id);
		StartOnRndFrame = serialized->get_bool(StartOnRndFrame_type_id);
		StartAtSpecificTime = serialized->get_float(StartAtSpecificTime_type_id);
		SpecificTimeIsNormalized = serialized->get_bool(SpecificTimeIsNormalized_type_id);
		RemoveDriverOnDone = serialized->get_bool(RemoveDriverOnDone_type_id);
		RestartAnimOnCinematicEnd = serialized->get_bool(RestartAnimOnCinematicEnd_type_id);
		ApplyMotion = serialized->get_bool(ApplyMotion_type_id);
		DeactivateBaseLayer = serialized->get_bool(DeactivateBaseLayer_type_id); 
	}

	[[nodiscard]] auto
	PlayAnimActionPrius::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	PlayAnimActionPrius::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<PlayAnimActionPrius> {
		if (incoming_type_id == PlayAnimActionPrius::type_id) {
			return std::make_shared<PlayAnimActionPrius>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated