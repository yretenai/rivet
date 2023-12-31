// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/HurdleShotMotionPrius.hpp>

namespace rivet::ddl::generated {
	HurdleShotMotionPrius::HurdleShotMotionPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): BasicShotMotionPrius(serialized) {

	}

	[[nodiscard]] auto
	HurdleShotMotionPrius::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	HurdleShotMotionPrius::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<HurdleShotMotionPrius> {
		if (incoming_type_id == HurdleShotMotionPrius::type_id) {
			return std::make_shared<HurdleShotMotionPrius>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
