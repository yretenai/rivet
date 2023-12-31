// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/DamageModifierInvulnerablePrius.hpp> 

#include <rivet/ddl/generated/ActivityClueModuleSetInvincible.hpp>

namespace rivet::ddl::generated {
	ActivityClueModuleSetInvincible::ActivityClueModuleSetInvincible([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		Prius = serialized->unwrap_into<rivet::ddl::generated::DamageModifierInvulnerablePrius>(Prius_type_id); 
	}

	[[nodiscard]] auto
	ActivityClueModuleSetInvincible::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	ActivityClueModuleSetInvincible::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<ActivityClueModuleSetInvincible> {
		if (incoming_type_id == ActivityClueModuleSetInvincible::type_id) {
			return std::make_shared<ActivityClueModuleSetInvincible>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
