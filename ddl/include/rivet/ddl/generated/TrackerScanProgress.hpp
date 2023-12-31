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
	struct RIVET_DDL_SHARED TrackerScanProgress : rivet::structures::rivet_ddl_base {
		constexpr static std::string_view type_name = "TrackerScanProgress";
		constexpr static rivet::rivet_type_id type_id = 0x2cbb094d;

		constexpr static std::string_view Scanning_type_name = "Scanning";
		constexpr static rivet::rivet_type_id Scanning_type_id = 0x565f758c;
		constexpr static std::string_view Directory_type_name = "Directory";
		constexpr static rivet::rivet_type_id Directory_type_id = 0xc485dbd6;
		constexpr static std::string_view CountScannedFiles_type_name = "CountScannedFiles";
		constexpr static rivet::rivet_type_id CountScannedFiles_type_id = 0xb9c7d3aa; 

		explicit TrackerScanProgress() = default;
		explicit TrackerScanProgress([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		bool Scanning {};
		std::string_view Directory {};
		uint32_t CountScannedFiles {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<TrackerScanProgress>;
	};
} // namespace rivet::ddl::generated

// clang-format on
