// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#pragma once

// clang-format off

#include <cstdint>
#include <string_view>
#include <array>

#include <rivet/hash/type_id.hpp>
#include <rivet/rivet_keywords.hpp>

namespace rivet::ddl::generated {
	constexpr static std::string_view EditorRenderMode_type_name = "EditorRenderMode";
	constexpr static rivet::rivet_type_id EditorRenderMode_type_id = 0x5ebdec9a;

	constexpr static std::array<std::string_view, 44> EditorRenderMode_values = {
		"kSeperatorLighting",
		"kFullLighting",
		"kGrayscale",
		"kLightingOnly",
		"kLightGridDiffuse",
		"kEnvProbeSpecular",
		"kEnvProbeDefault",
		"kDefaultLighting",
		"kDiffuseLight",
		"kSpecularLight",
		"kGrayscaleLighting",
		"kEnvProbeLookup",
		"kLightingNoShadows",
		"kCsmShadowAccum",
		"kWireframe",
		"kWireOverlay",
		"kAmbientOcclusion",
		"kDepth",
		"kSeperatorTexture",
		"kPbrValidity",
		"kDiffReflectance",
		"kSpecReflectance",
		"kGlossiness",
		"kNormals",
		"kTangents",
		"kSeperatorDebug",
		"kRayTracingResponse",
		"kCollision",
		"kDeprecatedAsset",
		"kAVMaterial",
		"kAVMaterialIndex",
		"kMaterialIndex",
		"kMipmaps",
		"kTexelDensity",
		"kVertexDensity",
		"kGeomLodLevel",
		"kLightCountDensity",
		"kSubsetCount",
		"kDistantLightingDbg",
		"kDepthEqualOverdraw",
		"kEmissive",
		"kVertexColors",
		"kStencilBuffer",
		"kMaterialDebug", 
	};

	enum class EditorRenderMode : uint64_t {
		Lighting_Visualization,
		Full_Lighting,
		Grayscale,
		Lighting_Only,
		Light_Grid_Diffuse,
		Env_Probe_Specular,
		Env_Probe_Default,
		Default_Lighting,
		Diffuse_Light,
		Specular_Light,
		Grayscale_Lighting,
		Env_Probe_Lookup,
		LightingNoShadows,
		CSM_Shadow_Accum,
		Wireframe,
		Wire_Overlay,
		Ambient_Occlusion,
		Depth,
		Texture_Visualization,
		PBR_Validity,
		Diff_Reflectance,
		Spec_Reflectance,
		Glossiness,
		Normals,
		Aniso_Tangents,
		Debug_Visualization,
		RayTracingResponse,
		Collision_Data,
		Deprecated_Asset,
		AVMaterial,
		AVMaterialIndex,
		Material_Index,
		Mipmap_Usage,
		Texel_Density,
		Vertex_Density,
		Geom_LoD_Level,
		Light_Count_Density,
		Model_Subset_Count,
		Distant_Lighting_Debug,
		DepthEqualOverdraw,
		Emissive,
		Vertex_Colors,
		Stencils,
		Material_Debug, 
	};
} // namespace rivet::ddl::generated

// clang-format on
