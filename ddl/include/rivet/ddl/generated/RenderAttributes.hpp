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

#include <rivet/ddl/generated/enums/xfe5100b1.hpp>
#include <rivet/ddl/generated/enums/OrientStyle.hpp>
#include <rivet/ddl/generated/enums/QuadStyle.hpp>
#include <rivet/ddl/generated/enums/CompositeStyle.hpp>
#include <rivet/ddl/generated/enums/FFOrientStyle.hpp>
#include <rivet/ddl/generated/enums/SortStyle.hpp>
#include <rivet/ddl/generated/enums/FrameGrabStyle.hpp>
#include <rivet/ddl/generated/enums/BlendStyle.hpp>
#include <rivet/ddl/generated/enums/TemporalAAStyle.hpp>
#include <rivet/ddl/generated/enums/PhotoModeStatus.hpp> 

namespace rivet::ddl::generated {
	struct RIVET_DDL_SHARED RenderAttributes : rivet::structures::rivet_ddl_base {
		constexpr static std::string_view type_name = "RenderAttributes";
		constexpr static rivet::rivet_type_id type_id = 0x8633b21a;

		constexpr static std::string_view ActivationChance_type_name = "ActivationChance";
		constexpr static rivet::rivet_type_id ActivationChance_type_id = 0x6240a1e;
		constexpr static std::string_view PhotoModeStatus_type_name = "PhotoModeStatus";
		constexpr static rivet::rivet_type_id PhotoModeStatus_type_id = 0x8dc8128;
		constexpr static std::string_view Roundness_type_name = "Roundness";
		constexpr static rivet::rivet_type_id Roundness_type_id = 0xb8d1185;
		constexpr static std::string_view RandomizeInstance_type_name = "RandomizeInstance";
		constexpr static rivet::rivet_type_id RandomizeInstance_type_id = 0x49dc16;
		constexpr static std::string_view RandomizeSubsets_type_name = "RandomizeSubsets";
		constexpr static rivet::rivet_type_id RandomizeSubsets_type_id = 0x89a7e355;
		constexpr static std::string_view OrientOverride_type_name = "OrientOverride";
		constexpr static rivet::rivet_type_id OrientOverride_type_id = 0x6b4c0b50;
		constexpr static std::string_view TrackParticle_type_name = "TrackParticle";
		constexpr static rivet::rivet_type_id TrackParticle_type_id = 0x3dfd6642;
		constexpr static std::string_view SunDistance2D_type_name = "SunDistance2D";
		constexpr static rivet::rivet_type_id SunDistance2D_type_id = 0xcaf598e4;
		constexpr static std::string_view TemporalAAStyle_type_name = "TemporalAAStyle";
		constexpr static rivet::rivet_type_id TemporalAAStyle_type_id = 0xd219660a;
		constexpr static std::string_view FrameGrabStyle_type_name = "FrameGrabStyle";
		constexpr static rivet::rivet_type_id FrameGrabStyle_type_id = 0x3a08c00f;
		constexpr static std::string_view CompositeStyle_type_name = "CompositeStyle";
		constexpr static rivet::rivet_type_id CompositeStyle_type_id = 0x40250330;
		constexpr static std::string_view BlendStyle_type_name = "BlendStyle";
		constexpr static rivet::rivet_type_id BlendStyle_type_id = 0xb34024ea;
		constexpr static std::string_view QuadStyle_type_name = "QuadStyle";
		constexpr static rivet::rivet_type_id QuadStyle_type_id = 0xed66a9ae;
		constexpr static std::string_view SortStyle_type_name = "SortStyle";
		constexpr static rivet::rivet_type_id SortStyle_type_id = 0x7b0b2803;
		constexpr static std::string_view FFOrientStyle_type_name = "FFOrientStyle";
		constexpr static rivet::rivet_type_id FFOrientStyle_type_id = 0xe1e68a34;
		constexpr static std::string_view OrientStyle_type_name = "OrientStyle";
		constexpr static rivet::rivet_type_id OrientStyle_type_id = 0xc0645650;
		constexpr static std::string_view OffsetStyle_type_name = "OffsetStyle";
		constexpr static rivet::rivet_type_id OffsetStyle_type_id = 0x894bd445;
		constexpr static std::string_view ShadowCastingDistance_type_name = "ShadowCastingDistance";
		constexpr static rivet::rivet_type_id ShadowCastingDistance_type_id = 0x4889122c;
		constexpr static std::string_view SunLensFlareOccluder_type_name = "SunLensFlareOccluder";
		constexpr static rivet::rivet_type_id SunLensFlareOccluder_type_id = 0x2a5ed15b;
		constexpr static std::string_view DimensionsAsRatios_type_name = "DimensionsAsRatios";
		constexpr static rivet::rivet_type_id DimensionsAsRatios_type_id = 0x1debc24a;
		constexpr static std::string_view AttachBeamEnds_type_name = "AttachBeamEnds";
		constexpr static rivet::rivet_type_id AttachBeamEnds_type_id = 0xb5239643;
		constexpr static std::string_view DynamicScaling_type_name = "DynamicScaling";
		constexpr static rivet::rivet_type_id DynamicScaling_type_id = 0xd726cd51;
		constexpr static std::string_view IgnoreHighContrast_type_name = "IgnoreHighContrast";
		constexpr static rivet::rivet_type_id IgnoreHighContrast_type_id = 0x6a2faa5e;
		constexpr static std::string_view IgnorePost_type_name = "IgnorePost";
		constexpr static rivet::rivet_type_id IgnorePost_type_id = 0x59173345;
		constexpr static std::string_view WaterFoam_type_name = "WaterFoam";
		constexpr static rivet::rivet_type_id WaterFoam_type_id = 0x9d6a901a;
		constexpr static std::string_view ApplyAlpha_type_name = "ApplyAlpha";
		constexpr static rivet::rivet_type_id ApplyAlpha_type_id = 0xed5290af;
		constexpr static std::string_view ApplyTint_type_name = "ApplyTint";
		constexpr static rivet::rivet_type_id ApplyTint_type_id = 0x4b5f8937;
		constexpr static std::string_view Lit_type_name = "Lit";
		constexpr static rivet::rivet_type_id Lit_type_id = 0x778ea754;
		constexpr static std::string_view BaseScale_type_name = "BaseScale";
		constexpr static rivet::rivet_type_id BaseScale_type_id = 0x643c2b67;
		constexpr static std::string_view AssetName_type_name = "AssetName";
		constexpr static rivet::rivet_type_id AssetName_type_id = 0x5b8d9442; 

		explicit RenderAttributes() = default;
		explicit RenderAttributes([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		float ActivationChance {};
		rivet::ddl::generated::PhotoModeStatus PhotoModeStatus {};
		uint32_t Roundness {};
		bool RandomizeInstance {};
		bool RandomizeSubsets {};
		bool OrientOverride {};
		bool TrackParticle {};
		float SunDistance2D {};
		rivet::ddl::generated::TemporalAAStyle TemporalAAStyle {};
		rivet::ddl::generated::FrameGrabStyle FrameGrabStyle {};
		rivet::ddl::generated::CompositeStyle CompositeStyle {};
		rivet::ddl::generated::BlendStyle BlendStyle {};
		rivet::ddl::generated::QuadStyle QuadStyle {};
		rivet::ddl::generated::SortStyle SortStyle {};
		rivet::ddl::generated::FFOrientStyle FFOrientStyle {};
		rivet::ddl::generated::OrientStyle OrientStyle {};
		rivet::ddl::generated::xfe5100b1 OffsetStyle {};
		float ShadowCastingDistance {};
		bool SunLensFlareOccluder {};
		bool DimensionsAsRatios {};
		bool AttachBeamEnds {};
		bool DynamicScaling {};
		bool IgnoreHighContrast {};
		bool IgnorePost {};
		bool WaterFoam {};
		bool ApplyAlpha {};
		bool ApplyTint {};
		bool Lit {};
		float BaseScale {};
		std::string_view AssetName {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<RenderAttributes>;
	};
} // namespace rivet::ddl::generated

// clang-format on