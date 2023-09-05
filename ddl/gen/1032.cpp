// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/TriggerEffectSequenceBase.hpp> 

#include <rivet/ddl/generated/TriggerEffectConfig.hpp>

namespace rivet::ddl::generated {
	TriggerEffectConfig::TriggerEffectConfig([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): ConfigBase(serialized) {
		TriggerEffectSequence = serialized->unwrap_into<rivet::ddl::generated::TriggerEffectSequenceBase>(TriggerEffectSequence_type_id); 
	}

	auto
	TriggerEffectConfig::get_type_id() const noexcept -> rivet::rivet_type_id {
		return type_id;
	}

	[[nodiscard]] auto
	TriggerEffectConfig::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	TriggerEffectConfig::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<TriggerEffectConfig> {
		if (incoming_type_id == TriggerEffectConfig::type_id) {
			return std::make_shared<TriggerEffectConfig>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
