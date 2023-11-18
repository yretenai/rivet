// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/RayTracing.hpp>

namespace rivet::ddl::generated {
	RayTracing::RayTracing([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		Enabled = serialized->get_bool(Enabled_type_id);
		Quality = serialized->get_enum<rivet::ddl::generated::x49737d1>(Quality_type_id, rivet::ddl::generated::x49737d1_values);
		SkipIfImpostored = serialized->get_bool(SkipIfImpostored_type_id);
		AmbientOcclusion = serialized->get_bool(AmbientOcclusion_type_id);
		AmbientShadows = serialized->get_bool(AmbientShadows_type_id);
		Reflections = serialized->get_bool(Reflections_type_id);
		Shadows = serialized->get_bool(Shadows_type_id);
		Blocker = serialized->get_bool(Blocker_type_id);
		UpdateEveryFrame = serialized->get_bool(UpdateEveryFrame_type_id); 
	}

	[[nodiscard]] auto
	RayTracing::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	RayTracing::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<RayTracing> {
		if (incoming_type_id == RayTracing::type_id) {
			return std::make_shared<RayTracing>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
