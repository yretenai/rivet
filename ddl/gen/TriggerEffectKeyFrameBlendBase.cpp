// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/TriggerEffectKeyFrameBlendSnap.hpp>
#include <rivet/ddl/generated/TriggerEffectKeyFrameBlendLinear.hpp> 

#include <rivet/ddl/generated/TriggerEffectKeyFrameBlendBase.hpp>

namespace rivet::ddl::generated {
	TriggerEffectKeyFrameBlendBase::TriggerEffectKeyFrameBlendBase([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {

	}

	[[nodiscard]] auto
	TriggerEffectKeyFrameBlendBase::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	TriggerEffectKeyFrameBlendBase::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<TriggerEffectKeyFrameBlendBase> {
		if (incoming_type_id == TriggerEffectKeyFrameBlendBase::type_id) {
			return std::make_shared<TriggerEffectKeyFrameBlendBase>(serialized);
		}

		auto TriggerEffectKeyFrameBlendLinear_ptr = TriggerEffectKeyFrameBlendLinear::from_substruct(incoming_type_id, serialized);
		if (TriggerEffectKeyFrameBlendLinear_ptr != nullptr) {
			return TriggerEffectKeyFrameBlendLinear_ptr;
		}

		auto TriggerEffectKeyFrameBlendSnap_ptr = TriggerEffectKeyFrameBlendSnap::from_substruct(incoming_type_id, serialized);
		if (TriggerEffectKeyFrameBlendSnap_ptr != nullptr) {
			return TriggerEffectKeyFrameBlendSnap_ptr;
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
