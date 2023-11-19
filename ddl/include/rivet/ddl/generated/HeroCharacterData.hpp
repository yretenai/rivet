// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#pragma once

// clang-format off

#include <cstdint>
#include <memory>
#include <string_view>
#include <vector>

#include <rivet/hash/type_id.hpp>
#include <rivet/rivet_array.hpp>
#include <rivet/rivet_keywords.hpp>
#include <rivet/structures/rivet_serialization.hpp>

#include <rivet/ddl/generated/enums/Voice.hpp>
#include <rivet/ddl/generated/enums/HeroTypes.hpp> 

namespace rivet::ddl::generated {
	struct CharacterOptionData;
	struct AssetReferenceDef; 

	struct RIVET_DDL_SHARED HeroCharacterData : rivet::structures::rivet_ddl_base {
		constexpr static std::string_view type_name = "HeroCharacterData";
		constexpr static rivet::rivet_type_id type_id = 0x95bc5fd6;

		constexpr static std::string_view DisplayName_type_name = "DisplayName";
		constexpr static rivet::rivet_type_id DisplayName_type_id = 0xeaf33243;
		constexpr static std::string_view HeroType_type_name = "HeroType";
		constexpr static rivet::rivet_type_id HeroType_type_id = 0x1583d108;
		constexpr static std::string_view Voice_type_name = "Voice";
		constexpr static rivet::rivet_type_id Voice_type_id = 0xfea894fa;
		constexpr static std::string_view ActorAsset_type_name = "ActorAsset";
		constexpr static rivet::rivet_type_id ActorAsset_type_id = 0x75356989;
		constexpr static std::string_view CharacterOptions_type_name = "CharacterOptions";
		constexpr static rivet::rivet_type_id CharacterOptions_type_id = 0x4f11ccb; 

		explicit HeroCharacterData() = default;
		explicit HeroCharacterData([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		std::string_view DisplayName {};
		rivet::ddl::generated::HeroTypes HeroType {};
		rivet::ddl::generated::Voice Voice {};
		std::shared_ptr<rivet::ddl::generated::AssetReferenceDef> ActorAsset {};
		std::shared_ptr<rivet::ddl::generated::CharacterOptionData> CharacterOptions {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<HeroCharacterData>;
	};
} // namespace rivet::ddl::generated

// clang-format on