// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/Cinematic2BlinkActionDef.hpp>
#include <rivet/ddl/generated/Cinematic2DialogActionDef.hpp>
#include <rivet/ddl/generated/Cinematic2LookAtActionDef.hpp>
#include <rivet/ddl/generated/Cinematic2TrackTagsDef.hpp> 

#include <rivet/ddl/generated/Cinematic2DialogTrackDef.hpp>

namespace rivet::ddl::generated {
	Cinematic2DialogTrackDef::Cinematic2DialogTrackDef([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		Id = serialized->get_uint64(Id_type_id);
		Name = serialized->get_string(Name_type_id);
		PlatformFilter = serialized->get_bitset<rivet::ddl::generated::xb52df7e7>(PlatformFilter_type_id, rivet::ddl::generated::xb52df7e7_values);
		Tags = serialized->unwrap_into<rivet::ddl::generated::Cinematic2TrackTagsDef>(Tags_type_id);
		Global = serialized->get_bool(Global_type_id);
		AnimFilterGroup = serialized->get_string(AnimFilterGroup_type_id);
		AnimFilterId = serialized->get_string(AnimFilterId_type_id);
		VarHeadHorizontal = serialized->get_string(VarHeadHorizontal_type_id);
		VarHeadVertical = serialized->get_string(VarHeadVertical_type_id);
		VarEyeHorizontal = serialized->get_string(VarEyeHorizontal_type_id);
		VarEyeVertical = serialized->get_string(VarEyeVertical_type_id);
		VarBlink = serialized->get_string(VarBlink_type_id);
		LookAtUnits = serialized->get_enum<rivet::ddl::generated::x96e13489>(LookAtUnits_type_id, rivet::ddl::generated::x96e13489_values);
		DialogActions = serialized->unwrap_into_many<rivet::ddl::generated::Cinematic2DialogActionDef>(DialogActions_type_id);
		LookAtActions = serialized->unwrap_into_many<rivet::ddl::generated::Cinematic2LookAtActionDef>(LookAtActions_type_id);
		BlinkActions = serialized->unwrap_into_many<rivet::ddl::generated::Cinematic2BlinkActionDef>(BlinkActions_type_id); 
	}

	[[nodiscard]] auto
	Cinematic2DialogTrackDef::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	Cinematic2DialogTrackDef::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<Cinematic2DialogTrackDef> {
		if (incoming_type_id == Cinematic2DialogTrackDef::type_id) {
			return std::make_shared<Cinematic2DialogTrackDef>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
