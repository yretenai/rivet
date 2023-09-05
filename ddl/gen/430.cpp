// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/ArcShotMotionGamePrius.hpp>
#include <rivet/ddl/generated/TargetedArcShotMotionPrius.hpp> 

#include <rivet/ddl/generated/ArcShotMotionPrius.hpp>

namespace rivet::ddl::generated {
	ArcShotMotionPrius::ArcShotMotionPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): BasicShotMotionPrius(serialized) {

	}

	auto
	ArcShotMotionPrius::get_type_id() const noexcept -> rivet::rivet_type_id {
		return type_id;
	}

	[[nodiscard]] auto
	ArcShotMotionPrius::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	ArcShotMotionPrius::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<ArcShotMotionPrius> {
		if (incoming_type_id == ArcShotMotionPrius::type_id) {
			return std::make_shared<ArcShotMotionPrius>(serialized);
		}

		auto ArcShotMotionGamePrius_ptr = ArcShotMotionGamePrius::from_substruct(incoming_type_id, serialized);
		if (ArcShotMotionGamePrius_ptr != nullptr) {
			return ArcShotMotionGamePrius_ptr;
		}

		auto TargetedArcShotMotionPrius_ptr = TargetedArcShotMotionPrius::from_substruct(incoming_type_id, serialized);
		if (TargetedArcShotMotionPrius_ptr != nullptr) {
			return TargetedArcShotMotionPrius_ptr;
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
