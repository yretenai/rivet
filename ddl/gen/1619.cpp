// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/AssetReferenceDef.hpp>
#include <rivet/ddl/generated/CharacterOptionData.hpp> 

#include <rivet/ddl/generated/HeroCharacterData.hpp>

namespace rivet::ddl::generated {
	HeroCharacterData::HeroCharacterData([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		DisplayName = serialized->get_string(DisplayName_type_id);
		HeroType = serialized->get_enum<rivet::ddl::generated::HeroTypes>(HeroType_type_id, rivet::ddl::generated::HeroTypes_values);
		Voice = serialized->get_enum<rivet::ddl::generated::x8d474ebb>(Voice_type_id, rivet::ddl::generated::x8d474ebb_values);
		ActorAsset = serialized->unwrap_into<rivet::ddl::generated::AssetReferenceDef>(ActorAsset_type_id);
		CharacterOptions = serialized->unwrap_into<rivet::ddl::generated::CharacterOptionData>(CharacterOptions_type_id); 
	}

	auto
	HeroCharacterData::get_type_id() const noexcept -> rivet::rivet_type_id {
		return type_id;
	}

	[[nodiscard]] auto
	HeroCharacterData::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	HeroCharacterData::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<HeroCharacterData> {
		if (incoming_type_id == HeroCharacterData::type_id) {
			return std::make_shared<HeroCharacterData>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
