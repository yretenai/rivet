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

#include <rivet/ddl/generated/enums/ShadowRes.hpp>
#include <rivet/ddl/generated/enums/xc53d61ca.hpp> 

namespace rivet::ddl::generated {
	struct RIVET_DDL_SHARED VisualEffectLightAttr : rivet::structures::rivet_ddl_base {
		constexpr static std::string_view type_name = "VisualEffectLightAttr";
		constexpr static rivet::rivet_type_id type_id = 0x3cb97d00;

		constexpr static std::string_view Style_type_name = "Style";
		constexpr static rivet::rivet_type_id Style_type_id = 0x2aee74ab;
		constexpr static std::string_view Radius_type_name = "Radius";
		constexpr static rivet::rivet_type_id Radius_type_id = 0x504203d;
		constexpr static std::string_view InnerCone_type_name = "InnerCone";
		constexpr static rivet::rivet_type_id InnerCone_type_id = 0x5d7bbc1a;
		constexpr static std::string_view OuterCone_type_name = "OuterCone";
		constexpr static rivet::rivet_type_id OuterCone_type_id = 0xcc1e2b6d;
		constexpr static std::string_view CutOffDist_type_name = "CutOffDist";
		constexpr static rivet::rivet_type_id CutOffDist_type_id = 0xead45b23;
		constexpr static std::string_view CutOnDist_type_name = "CutOnDist";
		constexpr static rivet::rivet_type_id CutOnDist_type_id = 0x258b8c4f;
		constexpr static std::string_view SpecIntensity_type_name = "SpecIntensity";
		constexpr static rivet::rivet_type_id SpecIntensity_type_id = 0x85609e3f;
		constexpr static std::string_view ShadowFadeDistance_type_name = "ShadowFadeDistance";
		constexpr static rivet::rivet_type_id ShadowFadeDistance_type_id = 0x33d350f8;
		constexpr static std::string_view VolumetricFogScale_type_name = "VolumetricFogScale";
		constexpr static rivet::rivet_type_id VolumetricFogScale_type_id = 0x9321765a;
		constexpr static std::string_view BulbRadius_type_name = "BulbRadius";
		constexpr static rivet::rivet_type_id BulbRadius_type_id = 0x41e5466f;
		constexpr static std::string_view BulbLength_type_name = "BulbLength";
		constexpr static rivet::rivet_type_id BulbLength_type_id = 0x7be4b687;
		constexpr static std::string_view BulbIsRectangle_type_name = "BulbIsRectangle";
		constexpr static rivet::rivet_type_id BulbIsRectangle_type_id = 0x98f61e67;
		constexpr static std::string_view UseAtmosphereMultiplier_type_name = "UseAtmosphereMultiplier";
		constexpr static rivet::rivet_type_id UseAtmosphereMultiplier_type_id = 0x33510e45;
		constexpr static std::string_view SkipLightCapture_type_name = "SkipLightCapture";
		constexpr static rivet::rivet_type_id SkipLightCapture_type_id = 0x64ede99a;
		constexpr static std::string_view OnlyLightCapture_type_name = "OnlyLightCapture";
		constexpr static rivet::rivet_type_id OnlyLightCapture_type_id = 0x1559dec2;
		constexpr static std::string_view CastShadows_type_name = "CastShadows";
		constexpr static rivet::rivet_type_id CastShadows_type_id = 0xfc091c24;
		constexpr static std::string_view ShadowRes_type_name = "ShadowRes";
		constexpr static rivet::rivet_type_id ShadowRes_type_id = 0x4344f8a2;
		constexpr static std::string_view IES_type_name = "IES";
		constexpr static rivet::rivet_type_id IES_type_id = 0xed7ebb7a; 

		explicit VisualEffectLightAttr() = default;
		explicit VisualEffectLightAttr([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		rivet::ddl::generated::xc53d61ca Style {};
		float Radius {};
		float InnerCone {};
		float OuterCone {};
		float CutOffDist {};
		float CutOnDist {};
		float SpecIntensity {};
		float ShadowFadeDistance {};
		float VolumetricFogScale {};
		float BulbRadius {};
		float BulbLength {};
		bool BulbIsRectangle {};
		bool UseAtmosphereMultiplier {};
		bool SkipLightCapture {};
		bool OnlyLightCapture {};
		bool CastShadows {};
		rivet::ddl::generated::ShadowRes ShadowRes {};
		std::string_view IES {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<VisualEffectLightAttr>;
	};
} // namespace rivet::ddl::generated

// clang-format on
