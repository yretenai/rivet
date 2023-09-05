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
	struct DDLVector3; 

	struct RIVET_DDL_SHARED HeroDecalShadowData : rivet::structures::rivet_ddl_base {
		constexpr const static std::string_view type_name = "HeroDecalShadowData";
		constexpr const static rivet::rivet_type_id type_id = 0x71461558;

		constexpr const static std::string_view DecalShadowShader_type_name = "DecalShadowShader";
		constexpr const static rivet::rivet_type_id DecalShadowShader_type_id = 0xe224f023;
		constexpr const static std::string_view DecalModel_type_name = "DecalModel";
		constexpr const static rivet::rivet_type_id DecalModel_type_id = 0x2aa1d346;
		constexpr const static std::string_view MaterialMappingName_type_name = "MaterialMappingName";
		constexpr const static rivet::rivet_type_id MaterialMappingName_type_id = 0x981e6927;
		constexpr const static std::string_view AlphaTextureConstantName_type_name = "AlphaTextureConstantName";
		constexpr const static rivet::rivet_type_id AlphaTextureConstantName_type_id = 0x9c924dec;
		constexpr const static std::string_view Tint_type_name = "Tint";
		constexpr const static rivet::rivet_type_id Tint_type_id = 0x1e992bc4;
		constexpr const static std::string_view BlendTime_type_name = "BlendTime";
		constexpr const static rivet::rivet_type_id BlendTime_type_id = 0xf805a3f6;
		constexpr const static std::string_view MinDistance_type_name = "MinDistance";
		constexpr const static rivet::rivet_type_id MinDistance_type_id = 0x448e693a;
		constexpr const static std::string_view MaxDistance_type_name = "MaxDistance";
		constexpr const static rivet::rivet_type_id MaxDistance_type_id = 0x88831235; 

		explicit HeroDecalShadowData() = default;
		explicit HeroDecalShadowData([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		std::string_view DecalShadowShader {};
		std::string_view DecalModel {};
		std::string_view MaterialMappingName {};
		std::string_view AlphaTextureConstantName {};
		std::shared_ptr<rivet::ddl::generated::DDLVector3> Tint {};
		float BlendTime {};
		float MinDistance {};
		float MaxDistance {}; 

		auto
		get_type_id() const noexcept -> rivet::rivet_type_id override;

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<HeroDecalShadowData>;
	};
} // namespace rivet::ddl::generated

// clang-format on
