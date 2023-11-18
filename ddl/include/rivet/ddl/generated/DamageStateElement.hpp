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
	struct RIVET_DDL_SHARED DamageStateElement : rivet::structures::rivet_ddl_base {
		constexpr static std::string_view type_name = "DamageStateElement";
		constexpr static rivet::rivet_type_id type_id = 0xf39bbc14;

		constexpr static std::string_view HPThreshhold_type_name = "HPThreshhold";
		constexpr static rivet::rivet_type_id HPThreshhold_type_id = 0x947e58e4;
		constexpr static std::string_view MinLookChunks_type_name = "MinLookChunks";
		constexpr static rivet::rivet_type_id MinLookChunks_type_id = 0x388e96e3;
		constexpr static std::string_view MaxLookChunks_type_name = "MaxLookChunks";
		constexpr static rivet::rivet_type_id MaxLookChunks_type_id = 0x78c1ee95;
		constexpr static std::string_view MinGenericChunks_type_name = "MinGenericChunks";
		constexpr static rivet::rivet_type_id MinGenericChunks_type_id = 0x715d6f14;
		constexpr static std::string_view MaxGenericChunks_type_name = "MaxGenericChunks";
		constexpr static rivet::rivet_type_id MaxGenericChunks_type_id = 0x20a4d449;
		constexpr static std::string_view MinLookSwaps_type_name = "MinLookSwaps";
		constexpr static rivet::rivet_type_id MinLookSwaps_type_id = 0xe2cc5bbf;
		constexpr static std::string_view MaxLookSwaps_type_name = "MaxLookSwaps";
		constexpr static rivet::rivet_type_id MaxLookSwaps_type_id = 0x72bf4b55; 

		explicit DamageStateElement() = default;
		explicit DamageStateElement([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		float HPThreshhold {};
		uint8_t MinLookChunks {};
		uint8_t MaxLookChunks {};
		uint8_t MinGenericChunks {};
		uint8_t MaxGenericChunks {};
		uint8_t MinLookSwaps {};
		uint8_t MaxLookSwaps {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<DamageStateElement>;
	};
} // namespace rivet::ddl::generated

// clang-format on
