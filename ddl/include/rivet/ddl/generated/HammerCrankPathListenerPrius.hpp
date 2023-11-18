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
	struct RIVET_DDL_SHARED HammerCrankPathListenerPrius : rivet::structures::rivet_ddl_base {
		constexpr static std::string_view type_name = "HammerCrankPathListenerPrius";
		constexpr static rivet::rivet_type_id type_id = 0x91143688;

		constexpr static std::string_view HammerCrank_type_name = "HammerCrank";
		constexpr static rivet::rivet_type_id HammerCrank_type_id = 0xfda1f175;
		constexpr static std::string_view Path_type_name = "Path";
		constexpr static rivet::rivet_type_id Path_type_id = 0x3bc44bbf;
		constexpr static std::string_view UsePathOrientation_type_name = "UsePathOrientation";
		constexpr static rivet::rivet_type_id UsePathOrientation_type_id = 0x8e302d4d; 

		explicit HammerCrankPathListenerPrius() = default;
		explicit HammerCrankPathListenerPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		uint64_t HammerCrank {};
		uint64_t Path {};
		bool UsePathOrientation {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<HammerCrankPathListenerPrius>;
	};
} // namespace rivet::ddl::generated

// clang-format on
