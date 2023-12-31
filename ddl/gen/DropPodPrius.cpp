// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/CameraShakingWithFallOffData.hpp> 

#include <rivet/ddl/generated/DropPodPrius.hpp>

namespace rivet::ddl::generated {
	DropPodPrius::DropPodPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): IntroDataPrius(serialized) {
		DropHeight = serialized->get_float(DropHeight_type_id);
		DropDuration = serialized->get_float(DropDuration_type_id);
		PostDropDelay = serialized->get_float(PostDropDelay_type_id);
		ResetDelay = serialized->get_float(ResetDelay_type_id);
		CamShake = serialized->unwrap_into<rivet::ddl::generated::CameraShakingWithFallOffData>(CamShake_type_id); 
	}

	[[nodiscard]] auto
	DropPodPrius::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	DropPodPrius::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<DropPodPrius> {
		if (incoming_type_id == DropPodPrius::type_id) {
			return std::make_shared<DropPodPrius>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
