// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/DuckTarget.hpp>
#include <rivet/ddl/generated/WwiseState.hpp>
#include <rivet/ddl/generated/WwiseAuxSend.hpp> 

#include <rivet/ddl/generated/SoundEnvironmentControllerPrius.hpp>

namespace rivet::ddl::generated {
	SoundEnvironmentControllerPrius::SoundEnvironmentControllerPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		TriggerPosition = serialized->get_enum<rivet::ddl::generated::xb62b6a7f>(TriggerPosition_type_id, rivet::ddl::generated::xb62b6a7f_values);
		FadeIn = serialized->get_float(FadeIn_type_id);
		FadeOut = serialized->get_float(FadeOut_type_id);
		Priority = serialized->get_uint32(Priority_type_id);
		IsAdditive = serialized->get_bool(IsAdditive_type_id);
		WwiseAuxSends = serialized->unwrap_into_many<rivet::ddl::generated::WwiseAuxSend>(WwiseAuxSends_type_id);
		WwiseStates = serialized->unwrap_into_many<rivet::ddl::generated::WwiseState>(WwiseStates_type_id);
		DuckTargets = serialized->unwrap_into_many<rivet::ddl::generated::DuckTarget>(DuckTargets_type_id);
		ChildEmitters = serialized->get_uint64s(ChildEmitters_type_id);
		SateliteEmitters = serialized->get_uint64s(SateliteEmitters_type_id);
		Volumes = serialized->get_uint64s(Volumes_type_id); 
	}

	[[nodiscard]] auto
	SoundEnvironmentControllerPrius::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	SoundEnvironmentControllerPrius::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<SoundEnvironmentControllerPrius> {
		if (incoming_type_id == SoundEnvironmentControllerPrius::type_id) {
			return std::make_shared<SoundEnvironmentControllerPrius>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
