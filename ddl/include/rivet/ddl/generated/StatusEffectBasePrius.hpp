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
	struct RIVET_DDL_SHARED StatusEffectBasePrius : rivet::structures::rivet_ddl_base {
		constexpr const static std::string_view type_name = "StatusEffectBasePrius";
		constexpr const static rivet::rivet_type_id type_id = 0xfb28bffa;

		constexpr const static std::string_view DecayTime_type_name = "DecayTime";
		constexpr const static rivet::rivet_type_id DecayTime_type_id = 0x9ea6158b;
		constexpr const static std::string_view SourceComponent_type_name = "SourceComponent";
		constexpr const static rivet::rivet_type_id SourceComponent_type_id = 0xa50480cb;
		constexpr const static std::string_view SourceActor_type_name = "SourceActor";
		constexpr const static rivet::rivet_type_id SourceActor_type_id = 0x54c7dd3e;
		constexpr const static std::string_view SourceDamageHash_type_name = "SourceDamageHash";
		constexpr const static rivet::rivet_type_id SourceDamageHash_type_id = 0x290bb426;
		constexpr const static std::string_view SourceWeaponId_type_name = "SourceWeaponId";
		constexpr const static rivet::rivet_type_id SourceWeaponId_type_id = 0xfc928207;
		constexpr const static std::string_view SourceWeaponMacroType_type_name = "SourceWeaponMacroType";
		constexpr const static rivet::rivet_type_id SourceWeaponMacroType_type_id = 0xedb347f;
		constexpr const static std::string_view Shader_type_name = "Shader";
		constexpr const static rivet::rivet_type_id Shader_type_id = 0xc18bd04f;
		constexpr const static std::string_view ShaderTValRampUpTime_type_name = "ShaderTValRampUpTime";
		constexpr const static rivet::rivet_type_id ShaderTValRampUpTime_type_id = 0xab42d6b2;
		constexpr const static std::string_view ShaderTValRampDownTime_type_name = "ShaderTValRampDownTime";
		constexpr const static rivet::rivet_type_id ShaderTValRampDownTime_type_id = 0xc26ea8f1;
		constexpr const static std::string_view ShaderTValRampDownEndTime_type_name = "ShaderTValRampDownEndTime";
		constexpr const static rivet::rivet_type_id ShaderTValRampDownEndTime_type_id = 0x4b74497e; 

		explicit StatusEffectBasePrius() = default;
		explicit StatusEffectBasePrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		float DecayTime {};
		uint32_t SourceComponent {};
		uint32_t SourceActor {};
		uint32_t SourceDamageHash {};
		uint16_t SourceWeaponId {};
		uint8_t SourceWeaponMacroType {};
		std::string_view Shader {};
		float ShaderTValRampUpTime {};
		float ShaderTValRampDownTime {};
		float ShaderTValRampDownEndTime {}; 

		auto
		get_type_id() const noexcept -> rivet::rivet_type_id override;

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<StatusEffectBasePrius>;
	};
} // namespace rivet::ddl::generated

// clang-format on
