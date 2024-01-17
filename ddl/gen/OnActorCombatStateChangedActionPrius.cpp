// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/OnActorCombatStateChangedActionPrius.hpp>

namespace rivet::ddl::generated {
	OnActorCombatStateChangedActionPrius::OnActorCombatStateChangedActionPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		ActionType = serialized->get_enum<rivet::ddl::generated::x10228b34>(ActionType_type_id, rivet::ddl::generated::x10228b34_values, rivet::ddl::generated::x10228b34::Events);
		InitiallyListening = serialized->get_bool(InitiallyListening_type_id, true); 
	}

	[[nodiscard]] auto
	OnActorCombatStateChangedActionPrius::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	OnActorCombatStateChangedActionPrius::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<OnActorCombatStateChangedActionPrius> {
		if (incoming_type_id == OnActorCombatStateChangedActionPrius::type_id) {
			return std::make_shared<OnActorCombatStateChangedActionPrius>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
