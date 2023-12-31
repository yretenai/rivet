// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/RecoilCameraShakeNone.hpp>

namespace rivet::ddl::generated {
	RecoilCameraShakeNone::RecoilCameraShakeNone([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): RecoilCameraShake(serialized) {

	}

	[[nodiscard]] auto
	RecoilCameraShakeNone::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	RecoilCameraShakeNone::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<RecoilCameraShakeNone> {
		if (incoming_type_id == RecoilCameraShakeNone::type_id) {
			return std::make_shared<RecoilCameraShakeNone>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
