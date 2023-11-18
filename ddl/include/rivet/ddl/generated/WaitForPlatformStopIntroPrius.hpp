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
	struct RIVET_DDL_SHARED WaitForPlatformStopIntroPrius : rivet::structures::rivet_ddl_base {
		constexpr static std::string_view type_name = "WaitForPlatformStopIntroPrius";
		constexpr static rivet::rivet_type_id type_id = 0xbadb3141;

		constexpr static std::string_view Platform_type_name = "Platform";
		constexpr static rivet::rivet_type_id Platform_type_id = 0xc3536dbb;
		constexpr static std::string_view OptionalStopDest_type_name = "OptionalStopDest";
		constexpr static rivet::rivet_type_id OptionalStopDest_type_id = 0x70193b39; 

		explicit WaitForPlatformStopIntroPrius() = default;
		explicit WaitForPlatformStopIntroPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		uint64_t Platform {};
		int32_t OptionalStopDest {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<WaitForPlatformStopIntroPrius>;
	};
} // namespace rivet::ddl::generated

// clang-format on
