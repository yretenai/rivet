// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/ContinueShotMotionEffectPrius.hpp>

namespace rivet::ddl::generated {
	ContinueShotMotionEffectPrius::ContinueShotMotionEffectPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): ScriptedShotEffectBasePrius(serialized) {

	}

	auto
	ContinueShotMotionEffectPrius::get_type_id() const noexcept -> rivet::rivet_type_id {
		return type_id;
	}

	[[nodiscard]] auto
	ContinueShotMotionEffectPrius::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	ContinueShotMotionEffectPrius::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<ContinueShotMotionEffectPrius> {
		if (incoming_type_id == ContinueShotMotionEffectPrius::type_id) {
			return std::make_shared<ContinueShotMotionEffectPrius>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
