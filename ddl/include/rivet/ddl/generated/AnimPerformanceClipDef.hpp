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

#include <rivet/ddl/generated/enums/x16d59d74.hpp> 

namespace rivet::ddl::generated {
	struct AnimFacialExpressionDef;
	struct AnimGestureDef;
	struct AnimFacialPhonemeDef; 

	struct RIVET_DDL_SHARED AnimPerformanceClipDef : rivet::structures::rivet_ddl_base {
		constexpr static std::string_view type_name = "AnimPerformanceClipDef";
		constexpr static rivet::rivet_type_id type_id = 0xede10c00;

		constexpr static std::string_view Name_type_name = "Name";
		constexpr static rivet::rivet_type_id Name_type_id = 0x6eb3beb6;
		constexpr static std::string_view LipsyncModified_type_name = "LipsyncModified";
		constexpr static rivet::rivet_type_id LipsyncModified_type_id = 0xf4c854c3;
		constexpr static std::string_view DefaultPerformanceClip_type_name = "DefaultPerformanceClip";
		constexpr static rivet::rivet_type_id DefaultPerformanceClip_type_id = 0x97b00d81;
		constexpr static std::string_view LocalizationPath_type_name = "LocalizationPath";
		constexpr static rivet::rivet_type_id LocalizationPath_type_id = 0xc9bbd1dd;
		constexpr static std::string_view PreBlendMs_type_name = "PreBlendMs";
		constexpr static rivet::rivet_type_id PreBlendMs_type_id = 0x6d275715;
		constexpr static std::string_view PhonemeOffsetMs_type_name = "PhonemeOffsetMs";
		constexpr static rivet::rivet_type_id PhonemeOffsetMs_type_id = 0x3db15040;
		constexpr static std::string_view PhonemeSmoothing_type_name = "PhonemeSmoothing";
		constexpr static rivet::rivet_type_id PhonemeSmoothing_type_id = 0xd442fa0e;
		constexpr static std::string_view FacialPhonemes_type_name = "FacialPhonemes";
		constexpr static rivet::rivet_type_id FacialPhonemes_type_id = 0x7b10215d;
		constexpr static std::string_view FacialExpressions_type_name = "FacialExpressions";
		constexpr static rivet::rivet_type_id FacialExpressions_type_id = 0xcd0fa43a;
		constexpr static std::string_view FacialClipName_type_name = "FacialClipName";
		constexpr static rivet::rivet_type_id FacialClipName_type_id = 0x36c6177a;
		constexpr static std::string_view BodyGestures_type_name = "BodyGestures";
		constexpr static rivet::rivet_type_id BodyGestures_type_id = 0x9a327d20; 

		explicit AnimPerformanceClipDef() = default;
		explicit AnimPerformanceClipDef([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		std::string_view Name {};
		bool LipsyncModified {};
		std::string_view DefaultPerformanceClip {};
		std::string_view LocalizationPath {};
		int32_t PreBlendMs {};
		int32_t PhonemeOffsetMs {};
		rivet::ddl::generated::x16d59d74 PhonemeSmoothing {};
		std::vector<std::shared_ptr<rivet::ddl::generated::AnimFacialPhonemeDef>> FacialPhonemes {};
		std::vector<std::shared_ptr<rivet::ddl::generated::AnimFacialExpressionDef>> FacialExpressions {};
		std::string_view FacialClipName {};
		std::vector<std::shared_ptr<rivet::ddl::generated::AnimGestureDef>> BodyGestures {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<AnimPerformanceClipDef>;
	};
} // namespace rivet::ddl::generated

// clang-format on
