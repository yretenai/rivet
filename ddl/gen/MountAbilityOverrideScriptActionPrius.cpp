// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/MountAbilityOverrideScriptActionPrius.hpp>

namespace rivet::ddl::generated {
	MountAbilityOverrideScriptActionPrius::MountAbilityOverrideScriptActionPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		ActionType = serialized->get_enum<rivet::ddl::generated::x10228b34>(ActionType_type_id, rivet::ddl::generated::x10228b34_values);
		EnableAbilitySquare = serialized->get_bool(EnableAbilitySquare_type_id);
		EnableAbilityX = serialized->get_bool(EnableAbilityX_type_id);
		EnableAbilityTriangle = serialized->get_bool(EnableAbilityTriangle_type_id);
		EnableAbilityCircle = serialized->get_bool(EnableAbilityCircle_type_id);
		EnableAbilityR1 = serialized->get_bool(EnableAbilityR1_type_id);
		EnableAbilityL1 = serialized->get_bool(EnableAbilityL1_type_id);
		EnableAbilityR2 = serialized->get_bool(EnableAbilityR2_type_id);
		EnableAbilityL2 = serialized->get_bool(EnableAbilityL2_type_id); 
	}

	[[nodiscard]] auto
	MountAbilityOverrideScriptActionPrius::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	MountAbilityOverrideScriptActionPrius::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<MountAbilityOverrideScriptActionPrius> {
		if (incoming_type_id == MountAbilityOverrideScriptActionPrius::type_id) {
			return std::make_shared<MountAbilityOverrideScriptActionPrius>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated