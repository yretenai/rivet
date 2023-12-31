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
	struct RIVET_DDL_SHARED SceneSettings : rivet::structures::rivet_ddl_base {
		constexpr static std::string_view type_name = "SceneSettings";
		constexpr static rivet::rivet_type_id type_id = 0xe9b7dd0d;

		constexpr static std::string_view ModelInstMax_type_name = "ModelInstMax";
		constexpr static rivet::rivet_type_id ModelInstMax_type_id = 0x670e6acd;
		constexpr static std::string_view ModelSkinMax_type_name = "ModelSkinMax";
		constexpr static rivet::rivet_type_id ModelSkinMax_type_id = 0xe1990026;
		constexpr static std::string_view ModelSkinSubsetMax_type_name = "ModelSkinSubsetMax";
		constexpr static rivet::rivet_type_id ModelSkinSubsetMax_type_id = 0x84839ac2;
		constexpr static std::string_view ModelSkinPrevSubsetMax_type_name = "ModelSkinPrevSubsetMax";
		constexpr static rivet::rivet_type_id ModelSkinPrevSubsetMax_type_id = 0x10c6463c;
		constexpr static std::string_view GpuRegistryStaticObjMax_type_name = "GpuRegistryStaticObjMax";
		constexpr static rivet::rivet_type_id GpuRegistryStaticObjMax_type_id = 0x923f3f55;
		constexpr static std::string_view GpuRegistryPerFrameObjMax_type_name = "GpuRegistryPerFrameObjMax";
		constexpr static rivet::rivet_type_id GpuRegistryPerFrameObjMax_type_id = 0x23ffa7b8;
		constexpr static std::string_view LightMax_type_name = "LightMax";
		constexpr static rivet::rivet_type_id LightMax_type_id = 0x4dd5705;
		constexpr static std::string_view VolumeMax_type_name = "VolumeMax";
		constexpr static rivet::rivet_type_id VolumeMax_type_id = 0xce5f30bf;
		constexpr static std::string_view DynamicDecalMax_type_name = "DynamicDecalMax";
		constexpr static rivet::rivet_type_id DynamicDecalMax_type_id = 0xb91c791e;
		constexpr static std::string_view StaticDecalMax_type_name = "StaticDecalMax";
		constexpr static rivet::rivet_type_id StaticDecalMax_type_id = 0xaf51e2be;
		constexpr static std::string_view CurveMax_type_name = "CurveMax";
		constexpr static rivet::rivet_type_id CurveMax_type_id = 0x19ed3922;
		constexpr static std::string_view VisualEffectInstMax_type_name = "VisualEffectInstMax";
		constexpr static rivet::rivet_type_id VisualEffectInstMax_type_id = 0x3efd236c;
		constexpr static std::string_view ImpostorMax_type_name = "ImpostorMax";
		constexpr static rivet::rivet_type_id ImpostorMax_type_id = 0xddae0619;
		constexpr static std::string_view TerrainMax_type_name = "TerrainMax";
		constexpr static rivet::rivet_type_id TerrainMax_type_id = 0x92617421;
		constexpr static std::string_view ComponentMax_type_name = "ComponentMax";
		constexpr static rivet::rivet_type_id ComponentMax_type_id = 0xe25f3626;
		constexpr static std::string_view ComponentEntryMax_type_name = "ComponentEntryMax";
		constexpr static rivet::rivet_type_id ComponentEntryMax_type_id = 0xd59cfdf;
		constexpr static std::string_view ComponentBlockSizeMax_type_name = "ComponentBlockSizeMax";
		constexpr static rivet::rivet_type_id ComponentBlockSizeMax_type_id = 0x706324f3;
		constexpr static std::string_view ActorMax_type_name = "ActorMax";
		constexpr static rivet::rivet_type_id ActorMax_type_id = 0x29a1ee63;
		constexpr static std::string_view ActorGroupMax_type_name = "ActorGroupMax";
		constexpr static rivet::rivet_type_id ActorGroupMax_type_id = 0xad9c49ca;
		constexpr static std::string_view ScriptVarMax_type_name = "ScriptVarMax";
		constexpr static rivet::rivet_type_id ScriptVarMax_type_id = 0x717b3a5b;
		constexpr static std::string_view SignalRelayMax_type_name = "SignalRelayMax";
		constexpr static rivet::rivet_type_id SignalRelayMax_type_id = 0x1f35bf44;
		constexpr static std::string_view DecalHeapMax_type_name = "DecalHeapMax";
		constexpr static rivet::rivet_type_id DecalHeapMax_type_id = 0xfecaea6f;
		constexpr static std::string_view DeferredEventHandlerMax_type_name = "DeferredEventHandlerMax";
		constexpr static rivet::rivet_type_id DeferredEventHandlerMax_type_id = 0xc4c044fd;
		constexpr static std::string_view ModelRenderInfoRatio_type_name = "ModelRenderInfoRatio";
		constexpr static rivet::rivet_type_id ModelRenderInfoRatio_type_id = 0x134a3433;
		constexpr static std::string_view ModelCompositeMatRatio_type_name = "ModelCompositeMatRatio";
		constexpr static rivet::rivet_type_id ModelCompositeMatRatio_type_id = 0x72286098;
		constexpr static std::string_view ModelSubsetSortJobsMax_type_name = "ModelSubsetSortJobsMax";
		constexpr static rivet::rivet_type_id ModelSubsetSortJobsMax_type_id = 0xc94173ad;
		constexpr static std::string_view IncludeCurvesInSceneDatabase_type_name = "IncludeCurvesInSceneDatabase";
		constexpr static rivet::rivet_type_id IncludeCurvesInSceneDatabase_type_id = 0xa4334876; 

		explicit SceneSettings() = default;
		explicit SceneSettings([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		int32_t ModelInstMax {};
		int32_t ModelSkinMax {};
		int32_t ModelSkinSubsetMax {};
		int32_t ModelSkinPrevSubsetMax {};
		int32_t GpuRegistryStaticObjMax {};
		int32_t GpuRegistryPerFrameObjMax {};
		int32_t LightMax {};
		int32_t VolumeMax {};
		int32_t DynamicDecalMax {};
		int32_t StaticDecalMax {};
		int32_t CurveMax {};
		int32_t VisualEffectInstMax {};
		int32_t ImpostorMax {};
		int32_t TerrainMax {};
		int32_t ComponentMax {};
		int32_t ComponentEntryMax {};
		int32_t ComponentBlockSizeMax {};
		int32_t ActorMax {};
		int32_t ActorGroupMax {};
		int32_t ScriptVarMax {};
		int32_t SignalRelayMax {};
		int32_t DecalHeapMax {};
		int32_t DeferredEventHandlerMax {};
		float ModelRenderInfoRatio {};
		float ModelCompositeMatRatio {};
		int32_t ModelSubsetSortJobsMax {};
		bool IncludeCurvesInSceneDatabase {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<SceneSettings>;
	};
} // namespace rivet::ddl::generated

// clang-format on
