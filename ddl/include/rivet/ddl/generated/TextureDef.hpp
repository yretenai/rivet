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

#include <rivet/ddl/generated/enums/x96db4657.hpp>
#include <rivet/ddl/generated/enums/x51a4a4a4.hpp>
#include <rivet/ddl/generated/enums/x7ada9111.hpp>
#include <rivet/ddl/generated/enums/x704d6a8.hpp>
#include <rivet/ddl/generated/enums/xa4e99a36.hpp>
#include <rivet/ddl/generated/enums/x597b7f4.hpp>
#include <rivet/ddl/generated/enums/x771ceda9.hpp>
#include <rivet/ddl/generated/enums/x9f6b8de9.hpp>
#include <rivet/ddl/generated/enums/x58cf7ca5.hpp> 

namespace rivet::ddl::generated {
	struct TextureArray;
	struct TextureMipGen;
	struct TextureMipGenAlpha;
	struct VaultMetaData; 

	struct RIVET_DDL_SHARED TextureDef : rivet::structures::rivet_ddl_base {
		constexpr static std::string_view type_name = "TextureDef";
		constexpr static rivet::rivet_type_id type_id = 0xa9b5ff24;

		constexpr static std::string_view VaultMetaData_type_name = "VaultMetaData";
		constexpr static rivet::rivet_type_id VaultMetaData_type_id = 0x37889aa;
		constexpr static std::string_view IconPath_type_name = "IconPath";
		constexpr static rivet::rivet_type_id IconPath_type_id = 0xbf5b007f;
		constexpr static std::string_view SourcePath_type_name = "SourcePath";
		constexpr static rivet::rivet_type_id SourcePath_type_id = 0x6ccf66b3;
		constexpr static std::string_view DCCSourcePaths_type_name = "DCCSourcePaths";
		constexpr static rivet::rivet_type_id DCCSourcePaths_type_id = 0xaae77202;
		constexpr static std::string_view Type_type_name = "Type";
		constexpr static rivet::rivet_type_id Type_type_id = 0xbc4e9799;
		constexpr static std::string_view ContentType_type_name = "ContentType";
		constexpr static rivet::rivet_type_id ContentType_type_id = 0x59b0e6c3;
		constexpr static std::string_view Quality_type_name = "Quality";
		constexpr static rivet::rivet_type_id Quality_type_id = 0x7d586828;
		constexpr static std::string_view Filter_type_name = "Filter";
		constexpr static rivet::rivet_type_id Filter_type_id = 0x41bc117a;
		constexpr static std::string_view FormatOverride_type_name = "FormatOverride";
		constexpr static rivet::rivet_type_id FormatOverride_type_id = 0x73c18e;
		constexpr static std::string_view DepthOverride_type_name = "DepthOverride";
		constexpr static rivet::rivet_type_id DepthOverride_type_id = 0xb6dae0b0;
		constexpr static std::string_view AddressModeU_type_name = "AddressModeU";
		constexpr static rivet::rivet_type_id AddressModeU_type_id = 0xaab64da5;
		constexpr static std::string_view AddressModeV_type_name = "AddressModeV";
		constexpr static rivet::rivet_type_id AddressModeV_type_id = 0x33bf1c1f;
		constexpr static std::string_view AddressModeW_type_name = "AddressModeW";
		constexpr static rivet::rivet_type_id AddressModeW_type_id = 0x44b82c89;
		constexpr static std::string_view UseGPUCompressor_type_name = "UseGPUCompressor";
		constexpr static rivet::rivet_type_id UseGPUCompressor_type_id = 0xd7054ef1;
		constexpr static std::string_view MipBias_type_name = "MipBias";
		constexpr static rivet::rivet_type_id MipBias_type_id = 0x633f3547;
		constexpr static std::string_view NoUpscalerBias_type_name = "NoUpscalerBias";
		constexpr static rivet::rivet_type_id NoUpscalerBias_type_id = 0x87c1103f;
		constexpr static std::string_view MipMaxCount_type_name = "MipMaxCount";
		constexpr static rivet::rivet_type_id MipMaxCount_type_id = 0x5a5854dd;
		constexpr static std::string_view MipMinSize_type_name = "MipMinSize";
		constexpr static rivet::rivet_type_id MipMinSize_type_id = 0x1aa6c8af;
		constexpr static std::string_view MipGen_type_name = "MipGen";
		constexpr static rivet::rivet_type_id MipGen_type_id = 0x3980e18;
		constexpr static std::string_view MipGenAlpha_type_name = "MipGenAlpha";
		constexpr static rivet::rivet_type_id MipGenAlpha_type_id = 0xbf61f088;
		constexpr static std::string_view SourcePathRotation_type_name = "SourcePathRotation";
		constexpr static rivet::rivet_type_id SourcePathRotation_type_id = 0xb94bbb78;
		constexpr static std::string_view SourcePathNormal_type_name = "SourcePathNormal";
		constexpr static rivet::rivet_type_id SourcePathNormal_type_id = 0x7224e353;
		constexpr static std::string_view TextureArray_type_name = "TextureArray";
		constexpr static rivet::rivet_type_id TextureArray_type_id = 0x97d4df1a;
		constexpr static std::string_view NonPowerOfTwo_type_name = "NonPowerOfTwo";
		constexpr static rivet::rivet_type_id NonPowerOfTwo_type_id = 0x8d6bd151;
		constexpr static std::string_view SizeClamp_type_name = "SizeClamp";
		constexpr static rivet::rivet_type_id SizeClamp_type_id = 0xd5bf714d;
		constexpr static std::string_view SizeReduction_type_name = "SizeReduction";
		constexpr static rivet::rivet_type_id SizeReduction_type_id = 0x7c94e5e2;
		constexpr static std::string_view DisableStreaming_type_name = "DisableStreaming";
		constexpr static rivet::rivet_type_id DisableStreaming_type_id = 0xda36016c;
		constexpr static std::string_view DisableMidMips_type_name = "DisableMidMips";
		constexpr static rivet::rivet_type_id DisableMidMips_type_id = 0x4eaf8a0;
		constexpr static std::string_view DisableSizeCap_type_name = "DisableSizeCap";
		constexpr static rivet::rivet_type_id DisableSizeCap_type_id = 0x7657009d;
		constexpr static std::string_view ExposureBias_type_name = "ExposureBias";
		constexpr static rivet::rivet_type_id ExposureBias_type_id = 0x719ebadd;
		constexpr static std::string_view PreMultiplyAlpha_type_name = "PreMultiplyAlpha";
		constexpr static rivet::rivet_type_id PreMultiplyAlpha_type_id = 0xdcfd925d;
		constexpr static std::string_view Deprecated_type_name = "Deprecated";
		constexpr static rivet::rivet_type_id Deprecated_type_id = 0x257fff01;
		constexpr static std::string_view FlipNormalsX_type_name = "FlipNormalsX";
		constexpr static rivet::rivet_type_id FlipNormalsX_type_id = 0x3dff7da3;
		constexpr static std::string_view FlipNormalsY_type_name = "FlipNormalsY";
		constexpr static rivet::rivet_type_id FlipNormalsY_type_id = 0x4af84d35;
		constexpr static std::string_view GlossNormalMap_type_name = "GlossNormalMap";
		constexpr static rivet::rivet_type_id GlossNormalMap_type_id = 0x8fc7a334;
		constexpr static std::string_view ToksvigScale_type_name = "ToksvigScale";
		constexpr static rivet::rivet_type_id ToksvigScale_type_id = 0x36577553;
		constexpr static std::string_view HighResDefaultIBL_type_name = "HighResDefaultIBL";
		constexpr static rivet::rivet_type_id HighResDefaultIBL_type_id = 0xb2a5135e;
		constexpr static std::string_view IBLLightMask_type_name = "IBLLightMask";
		constexpr static rivet::rivet_type_id IBLLightMask_type_id = 0xa8fdaeb4;
		constexpr static std::string_view AutomateIBLLights_type_name = "AutomateIBLLights";
		constexpr static rivet::rivet_type_id AutomateIBLLights_type_id = 0x1030af97;
		constexpr static std::string_view Clamp_type_name = "Clamp";
		constexpr static rivet::rivet_type_id Clamp_type_id = 0xb950bb3b;
		constexpr static std::string_view Shift_type_name = "Shift";
		constexpr static rivet::rivet_type_id Shift_type_id = 0xbc58f784; 

		explicit TextureDef() = default;
		explicit TextureDef([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		std::shared_ptr<rivet::ddl::generated::VaultMetaData> VaultMetaData {};
		std::string_view IconPath {};
		std::string_view SourcePath {};
		std::vector<std::string_view> DCCSourcePaths {};
		rivet::ddl::generated::x58cf7ca5 Type {};
		rivet::ddl::generated::x9f6b8de9 ContentType {};
		rivet::ddl::generated::x771ceda9 Quality {};
		rivet::ddl::generated::x597b7f4 Filter {};
		rivet::ddl::generated::xa4e99a36 FormatOverride {};
		rivet::ddl::generated::x704d6a8 DepthOverride {};
		rivet::ddl::generated::x7ada9111 AddressModeU {};
		rivet::ddl::generated::x7ada9111 AddressModeV {};
		rivet::ddl::generated::x7ada9111 AddressModeW {};
		bool UseGPUCompressor {};
		float MipBias {};
		bool NoUpscalerBias {};
		uint32_t MipMaxCount {};
		uint32_t MipMinSize {};
		std::shared_ptr<rivet::ddl::generated::TextureMipGen> MipGen {};
		std::shared_ptr<rivet::ddl::generated::TextureMipGenAlpha> MipGenAlpha {};
		std::string_view SourcePathRotation {};
		std::string_view SourcePathNormal {};
		std::shared_ptr<rivet::ddl::generated::TextureArray> TextureArray {};
		rivet::ddl::generated::x51a4a4a4 NonPowerOfTwo {};
		uint32_t SizeClamp {};
		uint32_t SizeReduction {};
		bool DisableStreaming {};
		bool DisableMidMips {};
		bool DisableSizeCap {};
		float ExposureBias {};
		bool PreMultiplyAlpha {};
		bool Deprecated {};
		bool FlipNormalsX {};
		bool FlipNormalsY {};
		std::string_view GlossNormalMap {};
		float ToksvigScale {};
		bool HighResDefaultIBL {};
		std::string_view IBLLightMask {};
		bool AutomateIBLLights {};
		rivet::ddl::generated::x96db4657 Clamp {};
		uint32_t Shift {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<TextureDef>;
	};
} // namespace rivet::ddl::generated

// clang-format on
