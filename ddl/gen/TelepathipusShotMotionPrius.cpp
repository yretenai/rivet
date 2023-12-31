// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/TelepathipusShotMotionPrius.hpp>

namespace rivet::ddl::generated {
	TelepathipusShotMotionPrius::TelepathipusShotMotionPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): ShotMotionPredatorLauncherPrius(serialized) {

	}

	[[nodiscard]] auto
	TelepathipusShotMotionPrius::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	TelepathipusShotMotionPrius::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<TelepathipusShotMotionPrius> {
		if (incoming_type_id == TelepathipusShotMotionPrius::type_id) {
			return std::make_shared<TelepathipusShotMotionPrius>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
