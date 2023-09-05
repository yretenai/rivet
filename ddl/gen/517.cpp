// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/TriggerConduitEventEffectPrius.hpp>

namespace rivet::ddl::generated {
	TriggerConduitEventEffectPrius::TriggerConduitEventEffectPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): ScriptedShotEffectBasePrius(serialized) {
		ActorType = serialized->get_enum<rivet::ddl::generated::x4891b54>(ActorType_type_id, rivet::ddl::generated::x4891b54_values);
		Event = serialized->get_field(Event_type_id);
		Broadcast = serialized->get_bool(Broadcast_type_id); 
	}

	auto
	TriggerConduitEventEffectPrius::get_type_id() const noexcept -> rivet::rivet_type_id {
		return type_id;
	}

	[[nodiscard]] auto
	TriggerConduitEventEffectPrius::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	TriggerConduitEventEffectPrius::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<TriggerConduitEventEffectPrius> {
		if (incoming_type_id == TriggerConduitEventEffectPrius::type_id) {
			return std::make_shared<TriggerConduitEventEffectPrius>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
