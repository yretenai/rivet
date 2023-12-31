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

namespace rivet::ddl::generated {
	struct StreamingVideoMaterialOverride; 

	struct RIVET_DDL_SHARED StreamingVideoPrius : rivet::structures::rivet_ddl_base {
		constexpr static std::string_view type_name = "StreamingVideoPrius";
		constexpr static rivet::rivet_type_id type_id = 0x43959a94;

		constexpr static std::string_view Config_type_name = "Config";
		constexpr static rivet::rivet_type_id Config_type_id = 0xeaf2611b;
		constexpr static std::string_view PreloadVideo_type_name = "PreloadVideo";
		constexpr static rivet::rivet_type_id PreloadVideo_type_id = 0x7b8d9392;
		constexpr static std::string_view PlayOnActivation_type_name = "PlayOnActivation";
		constexpr static rivet::rivet_type_id PlayOnActivation_type_id = 0xa94769d6;
		constexpr static std::string_view ActivationDelay_type_name = "ActivationDelay";
		constexpr static rivet::rivet_type_id ActivationDelay_type_id = 0xa0d7730b;
		constexpr static std::string_view MaterialOverride_type_name = "MaterialOverride";
		constexpr static rivet::rivet_type_id MaterialOverride_type_id = 0xffafa5a1;
		constexpr static std::string_view ExtraMaterialOverrides_type_name = "ExtraMaterialOverrides";
		constexpr static rivet::rivet_type_id ExtraMaterialOverrides_type_id = 0xc4e9061f;
		constexpr static std::string_view TextureToReplace_type_name = "TextureToReplace";
		constexpr static rivet::rivet_type_id TextureToReplace_type_id = 0x2176bd2a;
		constexpr static std::string_view MaterialTexture_type_name = "MaterialTexture";
		constexpr static rivet::rivet_type_id MaterialTexture_type_id = 0x263188db; 

		explicit StreamingVideoPrius() = default;
		explicit StreamingVideoPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		std::string_view Config {};
		bool PreloadVideo {};
		bool PlayOnActivation {};
		float ActivationDelay {};
		std::shared_ptr<rivet::ddl::generated::StreamingVideoMaterialOverride> MaterialOverride {};
		std::vector<std::shared_ptr<rivet::ddl::generated::StreamingVideoMaterialOverride>> ExtraMaterialOverrides {};
		std::string_view TextureToReplace {};
		std::string_view MaterialTexture {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<StreamingVideoPrius>;
	};
} // namespace rivet::ddl::generated

// clang-format on
