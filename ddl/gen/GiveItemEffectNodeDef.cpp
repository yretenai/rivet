// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/GiveItemEffectNodeDef.hpp>

namespace rivet::ddl::generated {
	GiveItemEffectNodeDef::GiveItemEffectNodeDef([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): NodalShotEffectNodeBaseDef(serialized) {
		ActorType = serialized->get_enum<rivet::ddl::generated::x684c6439>(ActorType_type_id, rivet::ddl::generated::x684c6439_values);
		ConfigAsset = serialized->get_string(ConfigAsset_type_id); 
	}

	[[nodiscard]] auto
	GiveItemEffectNodeDef::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	GiveItemEffectNodeDef::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<GiveItemEffectNodeDef> {
		if (incoming_type_id == GiveItemEffectNodeDef::type_id) {
			return std::make_shared<GiveItemEffectNodeDef>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
