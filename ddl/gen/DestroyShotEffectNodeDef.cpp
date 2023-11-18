// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/DestroyShotEffectNodeDef.hpp>

namespace rivet::ddl::generated {
	DestroyShotEffectNodeDef::DestroyShotEffectNodeDef([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): NodalShotEffectNodeBaseDef(serialized) {

	}

	[[nodiscard]] auto
	DestroyShotEffectNodeDef::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	DestroyShotEffectNodeDef::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<DestroyShotEffectNodeDef> {
		if (incoming_type_id == DestroyShotEffectNodeDef::type_id) {
			return std::make_shared<DestroyShotEffectNodeDef>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
