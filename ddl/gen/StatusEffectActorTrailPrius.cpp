// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/StatusEffectActorTrailPrius.hpp>

namespace rivet::ddl::generated {
	StatusEffectActorTrailPrius::StatusEffectActorTrailPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): StatusEffectBasePrius(serialized) {
		DropOnGround = serialized->get_bool(DropOnGround_type_id, true); 
	}

	[[nodiscard]] auto
	StatusEffectActorTrailPrius::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	StatusEffectActorTrailPrius::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<StatusEffectActorTrailPrius> {
		if (incoming_type_id == StatusEffectActorTrailPrius::type_id) {
			return std::make_shared<StatusEffectActorTrailPrius>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
