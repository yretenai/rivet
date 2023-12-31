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
	struct DrawStats; 

	struct RIVET_DDL_SHARED RenderThreadStats : rivet::structures::rivet_ddl_base {
		constexpr static std::string_view type_name = "RenderThreadStats";
		constexpr static rivet::rivet_type_id type_id = 0x30c0ebdc;

		constexpr static std::string_view FrameIndex_type_name = "FrameIndex";
		constexpr static rivet::rivet_type_id FrameIndex_type_id = 0x139905da;
		constexpr static std::string_view IsDebugMode_type_name = "IsDebugMode";
		constexpr static rivet::rivet_type_id IsDebugMode_type_id = 0xb1a1d7af;
		constexpr static std::string_view CpuFrameMicros_type_name = "CpuFrameMicros";
		constexpr static rivet::rivet_type_id CpuFrameMicros_type_id = 0x1210d284;
		constexpr static std::string_view CpuPresentMicros_type_name = "CpuPresentMicros";
		constexpr static rivet::rivet_type_id CpuPresentMicros_type_id = 0x91759f76;
		constexpr static std::string_view GpuFrameMicros_type_name = "GpuFrameMicros";
		constexpr static rivet::rivet_type_id GpuFrameMicros_type_id = 0xbbc5d9f;
		constexpr static std::string_view GpuBusyMicros_type_name = "GpuBusyMicros";
		constexpr static rivet::rivet_type_id GpuBusyMicros_type_id = 0xe18dea6b;
		constexpr static std::string_view CpuLayerMicros_type_name = "CpuLayerMicros";
		constexpr static rivet::rivet_type_id CpuLayerMicros_type_id = 0x5aa2e977;
		constexpr static std::string_view GpuLayerMicros_type_name = "GpuLayerMicros";
		constexpr static rivet::rivet_type_id GpuLayerMicros_type_id = 0x430e666c;
		constexpr static std::string_view ModelGBuffer_type_name = "ModelGBuffer";
		constexpr static rivet::rivet_type_id ModelGBuffer_type_id = 0x82ae3b72;
		constexpr static std::string_view ModelShadow_type_name = "ModelShadow";
		constexpr static rivet::rivet_type_id ModelShadow_type_id = 0x4b7d1aab;
		constexpr static std::string_view ModelForward_type_name = "ModelForward";
		constexpr static rivet::rivet_type_id ModelForward_type_id = 0x3176ed86;
		constexpr static std::string_view ModelAlpha_type_name = "ModelAlpha";
		constexpr static rivet::rivet_type_id ModelAlpha_type_id = 0xba6514ab;
		constexpr static std::string_view ModelVelocityDepth_type_name = "ModelVelocityDepth";
		constexpr static rivet::rivet_type_id ModelVelocityDepth_type_id = 0x5c0de56a;
		constexpr static std::string_view ModelDebug_type_name = "ModelDebug";
		constexpr static rivet::rivet_type_id ModelDebug_type_id = 0x6206a66;
		constexpr static std::string_view Decals_type_name = "Decals";
		constexpr static rivet::rivet_type_id Decals_type_id = 0x2dcfa762;
		constexpr static std::string_view ModelTessMaterialCount_type_name = "ModelTessMaterialCount";
		constexpr static rivet::rivet_type_id ModelTessMaterialCount_type_id = 0xd9864c5b;
		constexpr static std::string_view ModelSortedTriangleCount_type_name = "ModelSortedTriangleCount";
		constexpr static rivet::rivet_type_id ModelSortedTriangleCount_type_id = 0xb364f735;
		constexpr static std::string_view ModelSkinnedVertexCount_type_name = "ModelSkinnedVertexCount";
		constexpr static rivet::rivet_type_id ModelSkinnedVertexCount_type_id = 0xd284df19;
		constexpr static std::string_view ModelSkinnedEntryCount_type_name = "ModelSkinnedEntryCount";
		constexpr static rivet::rivet_type_id ModelSkinnedEntryCount_type_id = 0x6fcd336e;
		constexpr static std::string_view DecalSkinnedVertexCount_type_name = "DecalSkinnedVertexCount";
		constexpr static rivet::rivet_type_id DecalSkinnedVertexCount_type_id = 0xf957f46a;
		constexpr static std::string_view DecalSkinnedEntryCount_type_name = "DecalSkinnedEntryCount";
		constexpr static rivet::rivet_type_id DecalSkinnedEntryCount_type_id = 0x8bcd2d4;
		constexpr static std::string_view VfxModels_type_name = "VfxModels";
		constexpr static rivet::rivet_type_id VfxModels_type_id = 0x7cf69211;
		constexpr static std::string_view VfxQuads_type_name = "VfxQuads";
		constexpr static rivet::rivet_type_id VfxQuads_type_id = 0x2211959a;
		constexpr static std::string_view VfxTrails_type_name = "VfxTrails";
		constexpr static rivet::rivet_type_id VfxTrails_type_id = 0xfe9b9b27;
		constexpr static std::string_view VfxSwipes_type_name = "VfxSwipes";
		constexpr static rivet::rivet_type_id VfxSwipes_type_id = 0x2cff2fb6;
		constexpr static std::string_view VfxSplines_type_name = "VfxSplines";
		constexpr static rivet::rivet_type_id VfxSplines_type_id = 0x31b34fb;
		constexpr static std::string_view VfxFrameGrabCount_type_name = "VfxFrameGrabCount";
		constexpr static rivet::rivet_type_id VfxFrameGrabCount_type_id = 0x22a693f4;
		constexpr static std::string_view VfxStartCompositeCount_type_name = "VfxStartCompositeCount";
		constexpr static rivet::rivet_type_id VfxStartCompositeCount_type_id = 0x7a6e49bd;
		constexpr static std::string_view UIHandlerMicros_type_name = "UIHandlerMicros";
		constexpr static rivet::rivet_type_id UIHandlerMicros_type_id = 0xab1b66b7;
		constexpr static std::string_view UIRenderUpdateMicros_type_name = "UIRenderUpdateMicros";
		constexpr static rivet::rivet_type_id UIRenderUpdateMicros_type_id = 0xbbb5bd;
		constexpr static std::string_view GpuDeptMicros_type_name = "GpuDeptMicros";
		constexpr static rivet::rivet_type_id GpuDeptMicros_type_id = 0xaf0bbe7e;
		constexpr static std::string_view GpuStarvationMicros_type_name = "GpuStarvationMicros";
		constexpr static rivet::rivet_type_id GpuStarvationMicros_type_id = 0x6618b0dc; 

		explicit RenderThreadStats() = default;
		explicit RenderThreadStats([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		uint32_t FrameIndex {};
		uint32_t IsDebugMode {};
		uint32_t CpuFrameMicros {};
		uint32_t CpuPresentMicros {};
		uint32_t GpuFrameMicros {};
		uint32_t GpuBusyMicros {};
		std::vector<uint32_t> CpuLayerMicros {};
		std::vector<uint32_t> GpuLayerMicros {};
		std::shared_ptr<rivet::ddl::generated::DrawStats> ModelGBuffer {};
		std::shared_ptr<rivet::ddl::generated::DrawStats> ModelShadow {};
		std::shared_ptr<rivet::ddl::generated::DrawStats> ModelForward {};
		std::shared_ptr<rivet::ddl::generated::DrawStats> ModelAlpha {};
		std::shared_ptr<rivet::ddl::generated::DrawStats> ModelVelocityDepth {};
		std::shared_ptr<rivet::ddl::generated::DrawStats> ModelDebug {};
		std::shared_ptr<rivet::ddl::generated::DrawStats> Decals {};
		uint32_t ModelTessMaterialCount {};
		uint32_t ModelSortedTriangleCount {};
		uint32_t ModelSkinnedVertexCount {};
		uint32_t ModelSkinnedEntryCount {};
		uint32_t DecalSkinnedVertexCount {};
		uint32_t DecalSkinnedEntryCount {};
		std::shared_ptr<rivet::ddl::generated::DrawStats> VfxModels {};
		std::shared_ptr<rivet::ddl::generated::DrawStats> VfxQuads {};
		std::shared_ptr<rivet::ddl::generated::DrawStats> VfxTrails {};
		std::shared_ptr<rivet::ddl::generated::DrawStats> VfxSwipes {};
		std::shared_ptr<rivet::ddl::generated::DrawStats> VfxSplines {};
		uint32_t VfxFrameGrabCount {};
		uint32_t VfxStartCompositeCount {};
		uint32_t UIHandlerMicros {};
		uint32_t UIRenderUpdateMicros {};
		std::vector<uint32_t> GpuDeptMicros {};
		uint32_t GpuStarvationMicros {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<RenderThreadStats>;
	};
} // namespace rivet::ddl::generated

// clang-format on
