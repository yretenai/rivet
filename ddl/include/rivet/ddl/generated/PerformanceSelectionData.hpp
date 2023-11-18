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
	struct PerformanceSelectionIndices; 

	struct RIVET_DDL_SHARED PerformanceSelectionData : rivet::structures::rivet_ddl_base {
		constexpr static std::string_view type_name = "PerformanceSelectionData";
		constexpr static rivet::rivet_type_id type_id = 0xc8debb2;

		constexpr static std::string_view Visemes_type_name = "Visemes";
		constexpr static rivet::rivet_type_id Visemes_type_id = 0x1fc67dfc;
		constexpr static std::string_view Expressions_type_name = "Expressions";
		constexpr static rivet::rivet_type_id Expressions_type_id = 0xe10d9e10;
		constexpr static std::string_view BodyGestures_type_name = "BodyGestures";
		constexpr static rivet::rivet_type_id BodyGestures_type_id = 0x9a327d20;
		constexpr static std::string_view ExpressionEnvelopes_type_name = "ExpressionEnvelopes";
		constexpr static rivet::rivet_type_id ExpressionEnvelopes_type_id = 0x9f5d1bff;
		constexpr static std::string_view BodyGestureEnvelopes_type_name = "BodyGestureEnvelopes";
		constexpr static rivet::rivet_type_id BodyGestureEnvelopes_type_id = 0x53f690ae;
		constexpr static std::string_view PhonemeEnvelopes_type_name = "PhonemeEnvelopes";
		constexpr static rivet::rivet_type_id PhonemeEnvelopes_type_id = 0xf1544dde;
		constexpr static std::string_view PerformanceClips_type_name = "PerformanceClips";
		constexpr static rivet::rivet_type_id PerformanceClips_type_id = 0xdd623106; 

		explicit PerformanceSelectionData() = default;
		explicit PerformanceSelectionData([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		std::vector<uint32_t> Visemes {};
		std::vector<uint32_t> Expressions {};
		std::vector<uint32_t> BodyGestures {};
		std::vector<uint32_t> ExpressionEnvelopes {};
		std::vector<uint32_t> BodyGestureEnvelopes {};
		std::vector<std::shared_ptr<rivet::ddl::generated::PerformanceSelectionIndices>> PhonemeEnvelopes {};
		std::vector<std::shared_ptr<rivet::ddl::generated::PerformanceSelectionIndices>> PerformanceClips {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<PerformanceSelectionData>;
	};
} // namespace rivet::ddl::generated

// clang-format on
