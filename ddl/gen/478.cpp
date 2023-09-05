// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/CameraShakingWithFallOffData.hpp>

namespace rivet::ddl::generated {
	CameraShakingWithFallOffData::CameraShakingWithFallOffData([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		InnerRadius = serialized->get_float(InnerRadius_type_id);
		OuterRadius = serialized->get_float(OuterRadius_type_id);
		FollowActor = serialized->get_bool(FollowActor_type_id);
		ShakeDataConfig = serialized->get_string(ShakeDataConfig_type_id); 
	}

	auto
	CameraShakingWithFallOffData::get_type_id() const noexcept -> rivet::rivet_type_id {
		return type_id;
	}

	[[nodiscard]] auto
	CameraShakingWithFallOffData::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	CameraShakingWithFallOffData::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<CameraShakingWithFallOffData> {
		if (incoming_type_id == CameraShakingWithFallOffData::type_id) {
			return std::make_shared<CameraShakingWithFallOffData>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
