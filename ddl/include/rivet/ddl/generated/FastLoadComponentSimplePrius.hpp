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
	struct RIVET_DDL_SHARED FastLoadComponentSimplePrius : rivet::structures::rivet_ddl_base {
		constexpr static std::string_view type_name = "FastLoadComponentSimplePrius";
		constexpr static rivet::rivet_type_id type_id = 0x7bd817f0;

		constexpr static std::string_view Alpha_type_name = "Alpha";
		constexpr static rivet::rivet_type_id Alpha_type_id = 0xc9b3f5ab;
		constexpr static std::string_view Bravo_type_name = "Bravo";
		constexpr static rivet::rivet_type_id Bravo_type_id = 0x10c87448;
		constexpr static std::string_view Charlies_type_name = "Charlies";
		constexpr static rivet::rivet_type_id Charlies_type_id = 0xded4afe3;
		constexpr static std::string_view Echo_type_name = "Echo";
		constexpr static rivet::rivet_type_id Echo_type_id = 0x2794f082;
		constexpr static std::string_view Foxtrot_type_name = "Foxtrot";
		constexpr static rivet::rivet_type_id Foxtrot_type_id = 0x42c59aa0; 

		explicit FastLoadComponentSimplePrius() = default;
		explicit FastLoadComponentSimplePrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		uint32_t Alpha {};
		bool Bravo {};
		std::vector<int32_t> Charlies {};
		uint64_t Echo {};
		int32_t Foxtrot {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<FastLoadComponentSimplePrius>;
	};
} // namespace rivet::ddl::generated

// clang-format on
