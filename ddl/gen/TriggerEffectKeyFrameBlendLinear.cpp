// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/TriggerEffectKeyFrameBlendLinear.hpp>

namespace rivet::ddl::generated {
	TriggerEffectKeyFrameBlendLinear::TriggerEffectKeyFrameBlendLinear([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): TriggerEffectKeyFrameBlendBase(serialized) {

	}

	[[nodiscard]] auto
	TriggerEffectKeyFrameBlendLinear::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	TriggerEffectKeyFrameBlendLinear::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<TriggerEffectKeyFrameBlendLinear> {
		if (incoming_type_id == TriggerEffectKeyFrameBlendLinear::type_id) {
			return std::make_shared<TriggerEffectKeyFrameBlendLinear>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated