// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/Cinematic2TransitionBaseDef.hpp>

namespace rivet::ddl::generated {
	Cinematic2TransitionBaseDef::Cinematic2TransitionBaseDef([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		Id = serialized->get_uint64(Id_type_id);
		ShotId = serialized->get_uint64(ShotId_type_id);
		Duration = serialized->get_float(Duration_type_id);
		StartType = serialized->get_enum<rivet::ddl::generated::x10205e3>(StartType_type_id, rivet::ddl::generated::x10205e3_values);
		SmoothingType = serialized->get_enum<rivet::ddl::generated::x53914cb6>(SmoothingType_type_id, rivet::ddl::generated::x53914cb6_values); 
	}

	[[nodiscard]] auto
	Cinematic2TransitionBaseDef::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	Cinematic2TransitionBaseDef::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<Cinematic2TransitionBaseDef> {
		if (incoming_type_id == Cinematic2TransitionBaseDef::type_id) {
			return std::make_shared<Cinematic2TransitionBaseDef>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
