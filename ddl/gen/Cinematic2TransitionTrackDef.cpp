// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/Cinematic2TransitionVfxDef.hpp>
#include <rivet/ddl/generated/Cinematic2TransitionFadeDef.hpp>
#include <rivet/ddl/generated/Cinematic2TransitionAnimatedDef.hpp>
#include <rivet/ddl/generated/Cinematic2TrackTagsDef.hpp> 

#include <rivet/ddl/generated/Cinematic2TransitionTrackDef.hpp>

namespace rivet::ddl::generated {
	Cinematic2TransitionTrackDef::Cinematic2TransitionTrackDef([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		Id = serialized->get_uint64(Id_type_id);
		Name = serialized->get_string(Name_type_id);
		PlatformFilter = serialized->get_bitset<rivet::ddl::generated::xb52df7e7>(PlatformFilter_type_id, rivet::ddl::generated::xb52df7e7_values);
		Tags = serialized->unwrap_into<rivet::ddl::generated::Cinematic2TrackTagsDef>(Tags_type_id);
		Global = serialized->get_bool(Global_type_id);
		FadeTransitions = serialized->unwrap_into_many<rivet::ddl::generated::Cinematic2TransitionFadeDef>(FadeTransitions_type_id);
		AnimatedTransitions = serialized->unwrap_into_many<rivet::ddl::generated::Cinematic2TransitionAnimatedDef>(AnimatedTransitions_type_id);
		VfxTransitions = serialized->unwrap_into_many<rivet::ddl::generated::Cinematic2TransitionVfxDef>(VfxTransitions_type_id); 
	}

	[[nodiscard]] auto
	Cinematic2TransitionTrackDef::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	Cinematic2TransitionTrackDef::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<Cinematic2TransitionTrackDef> {
		if (incoming_type_id == Cinematic2TransitionTrackDef::type_id) {
			return std::make_shared<Cinematic2TransitionTrackDef>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
