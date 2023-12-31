// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/ConduitActorPropertiesPrius.hpp>

namespace rivet::ddl::generated {
	ConduitActorPropertiesPrius::ConduitActorPropertiesPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		Size = serialized->get_string(Size_type_id);
		CharacterType = serialized->get_string(CharacterType_type_id);
		DamageTimerDuration = serialized->get_float(DamageTimerDuration_type_id);
		WeakspotTimerDuration = serialized->get_float(WeakspotTimerDuration_type_id);
		BlockTimerDuration = serialized->get_float(BlockTimerDuration_type_id); 
	}

	[[nodiscard]] auto
	ConduitActorPropertiesPrius::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	ConduitActorPropertiesPrius::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<ConduitActorPropertiesPrius> {
		if (incoming_type_id == ConduitActorPropertiesPrius::type_id) {
			return std::make_shared<ConduitActorPropertiesPrius>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
