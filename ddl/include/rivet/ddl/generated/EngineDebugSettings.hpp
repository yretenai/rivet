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
	struct RIVET_DDL_SHARED EngineDebugSettings : rivet::structures::rivet_ddl_base {
		constexpr static std::string_view type_name = "EngineDebugSettings";
		constexpr static rivet::rivet_type_id type_id = 0x62e59f3e;

		constexpr static std::string_view PrototypeMessageEnable_type_name = "PrototypeMessageEnable";
		constexpr static rivet::rivet_type_id PrototypeMessageEnable_type_id = 0x51b6dc19;
		constexpr static std::string_view DebugMessageEnable_type_name = "DebugMessageEnable";
		constexpr static rivet::rivet_type_id DebugMessageEnable_type_id = 0xf3cdfe9a;
		constexpr static std::string_view FrameTimeGraphEnable_type_name = "FrameTimeGraphEnable";
		constexpr static rivet::rivet_type_id FrameTimeGraphEnable_type_id = 0x6d98be00;
		constexpr static std::string_view FrameTimeHistogramEnable_type_name = "FrameTimeHistogramEnable";
		constexpr static rivet::rivet_type_id FrameTimeHistogramEnable_type_id = 0x5a017e46;
		constexpr static std::string_view FrameTimeHideDisplay_type_name = "FrameTimeHideDisplay";
		constexpr static rivet::rivet_type_id FrameTimeHideDisplay_type_id = 0xfc75b0bd;
		constexpr static std::string_view TileBoundaryEnable_type_name = "TileBoundaryEnable";
		constexpr static rivet::rivet_type_id TileBoundaryEnable_type_id = 0x8e5e7c68;
		constexpr static std::string_view AssetManagerDebugDraw_type_name = "AssetManagerDebugDraw";
		constexpr static rivet::rivet_type_id AssetManagerDebugDraw_type_id = 0xcaaabc5e;
		constexpr static std::string_view AssetLoadingDebugDraw_type_name = "AssetLoadingDebugDraw";
		constexpr static rivet::rivet_type_id AssetLoadingDebugDraw_type_id = 0xc99d2ca9;
		constexpr static std::string_view FailAllAssetLoads_type_name = "FailAllAssetLoads";
		constexpr static rivet::rivet_type_id FailAllAssetLoads_type_id = 0xeaa35dfc;
		constexpr static std::string_view FailAssetsAsMissing_type_name = "FailAssetsAsMissing";
		constexpr static rivet::rivet_type_id FailAssetsAsMissing_type_id = 0x778f6a85;
		constexpr static std::string_view VerifyModelsHaveNoPhysicsOnDestruction_type_name = "VerifyModelsHaveNoPhysicsOnDestruction";
		constexpr static rivet::rivet_type_id VerifyModelsHaveNoPhysicsOnDestruction_type_id = 0x589b4add;
		constexpr static std::string_view ScriptDebugPort_type_name = "ScriptDebugPort";
		constexpr static rivet::rivet_type_id ScriptDebugPort_type_id = 0xe8309ad3;
		constexpr static std::string_view ScriptSignalsPerFrameMax_type_name = "ScriptSignalsPerFrameMax";
		constexpr static rivet::rivet_type_id ScriptSignalsPerFrameMax_type_id = 0xbfb3645f;
		constexpr static std::string_view EnableTopAsserts_type_name = "EnableTopAsserts";
		constexpr static rivet::rivet_type_id EnableTopAsserts_type_id = 0xa55fe23a;
		constexpr static std::string_view ExtraTextureMemAllocChecks_type_name = "ExtraTextureMemAllocChecks";
		constexpr static rivet::rivet_type_id ExtraTextureMemAllocChecks_type_id = 0x94c84ece;
		constexpr static std::string_view StallGameAfterLoadBeforeUpdates_type_name = "StallGameAfterLoadBeforeUpdates";
		constexpr static rivet::rivet_type_id StallGameAfterLoadBeforeUpdates_type_id = 0x67edc53f;
		constexpr static std::string_view ErrorActorsEnable_type_name = "ErrorActorsEnable";
		constexpr static rivet::rivet_type_id ErrorActorsEnable_type_id = 0x99cd3063;
		constexpr static std::string_view AssetLoadTextPosX_type_name = "AssetLoadTextPosX";
		constexpr static rivet::rivet_type_id AssetLoadTextPosX_type_id = 0x243d08a6;
		constexpr static std::string_view AssetLoadTextPosY_type_name = "AssetLoadTextPosY";
		constexpr static rivet::rivet_type_id AssetLoadTextPosY_type_id = 0x533a3830;
		constexpr static std::string_view DebugMenuEnable_type_name = "DebugMenuEnable";
		constexpr static rivet::rivet_type_id DebugMenuEnable_type_id = 0xfce261bd;
		constexpr static std::string_view DebugMenuEasyDebugDelay_type_name = "DebugMenuEasyDebugDelay";
		constexpr static rivet::rivet_type_id DebugMenuEasyDebugDelay_type_id = 0x2c621a25;
		constexpr static std::string_view TargetVertexDensityLow_type_name = "TargetVertexDensityLow";
		constexpr static rivet::rivet_type_id TargetVertexDensityLow_type_id = 0x6e3fc7f3;
		constexpr static std::string_view TargetVertexDensityHigh_type_name = "TargetVertexDensityHigh";
		constexpr static rivet::rivet_type_id TargetVertexDensityHigh_type_id = 0xa69e8cbf;
		constexpr static std::string_view TargetTexelsPerMeterLow_type_name = "TargetTexelsPerMeterLow";
		constexpr static rivet::rivet_type_id TargetTexelsPerMeterLow_type_id = 0x5afa5e35;
		constexpr static std::string_view TargetTexelsPerMeterHigh_type_name = "TargetTexelsPerMeterHigh";
		constexpr static rivet::rivet_type_id TargetTexelsPerMeterHigh_type_id = 0xd4ad2ea3;
		constexpr static std::string_view EnvProbeLookupRangeLow_type_name = "EnvProbeLookupRangeLow";
		constexpr static rivet::rivet_type_id EnvProbeLookupRangeLow_type_id = 0x68f0cbe9;
		constexpr static std::string_view EnvProbeLookupRangeHigh_type_name = "EnvProbeLookupRangeHigh";
		constexpr static rivet::rivet_type_id EnvProbeLookupRangeHigh_type_id = 0x5bfabac9; 

		explicit EngineDebugSettings() = default;
		explicit EngineDebugSettings([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		bool PrototypeMessageEnable {};
		bool DebugMessageEnable {};
		bool FrameTimeGraphEnable {};
		bool FrameTimeHistogramEnable {};
		bool FrameTimeHideDisplay {};
		bool TileBoundaryEnable {};
		bool AssetManagerDebugDraw {};
		bool AssetLoadingDebugDraw {};
		bool FailAllAssetLoads {};
		bool FailAssetsAsMissing {};
		bool VerifyModelsHaveNoPhysicsOnDestruction {};
		uint16_t ScriptDebugPort {};
		uint32_t ScriptSignalsPerFrameMax {};
		bool EnableTopAsserts {};
		bool ExtraTextureMemAllocChecks {};
		bool StallGameAfterLoadBeforeUpdates {};
		bool ErrorActorsEnable {};
		uint32_t AssetLoadTextPosX {};
		uint32_t AssetLoadTextPosY {};
		bool DebugMenuEnable {};
		bool DebugMenuEasyDebugDelay {};
		float TargetVertexDensityLow {};
		float TargetVertexDensityHigh {};
		float TargetTexelsPerMeterLow {};
		float TargetTexelsPerMeterHigh {};
		uint16_t EnvProbeLookupRangeLow {};
		uint16_t EnvProbeLookupRangeHigh {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<EngineDebugSettings>;
	};
} // namespace rivet::ddl::generated

// clang-format on
