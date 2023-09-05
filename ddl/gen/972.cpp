// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/BattleBrewEmitterWrapper.hpp> 

#include <rivet/ddl/generated/BattleBrewEffectData.hpp>

namespace rivet::ddl::generated {
	BattleBrewEffectData::BattleBrewEffectData([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		BrewName = serialized->get_string(BrewName_type_id);
		Emitters = serialized->unwrap_into_many<rivet::ddl::generated::BattleBrewEmitterWrapper>(Emitters_type_id); 
	}

	auto
	BattleBrewEffectData::get_type_id() const noexcept -> rivet::rivet_type_id {
		return type_id;
	}

	[[nodiscard]] auto
	BattleBrewEffectData::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	BattleBrewEffectData::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<BattleBrewEffectData> {
		if (incoming_type_id == BattleBrewEffectData::type_id) {
			return std::make_shared<BattleBrewEffectData>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
