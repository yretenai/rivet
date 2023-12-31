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
	struct DDLMatrix4; 

	struct RIVET_DDL_SHARED BugItCaptureData : rivet::structures::rivet_ddl_base {
		constexpr static std::string_view type_name = "BugItCaptureData";
		constexpr static rivet::rivet_type_id type_id = 0xfe161c52;

		constexpr static std::string_view lvl_type_name = "lvl";
		constexpr static rivet::rivet_type_id lvl_type_id = 0x91f5777c;
		constexpr static std::string_view chk_type_name = "chk";
		constexpr static rivet::rivet_type_id chk_type_id = 0xd08c9a3d;
		constexpr static std::string_view region_type_name = "region";
		constexpr static rivet::rivet_type_id region_type_id = 0x36b6ba27;
		constexpr static std::string_view campos_type_name = "campos";
		constexpr static rivet::rivet_type_id campos_type_id = 0x14f0d99b;
		constexpr static std::string_view camrot_type_name = "camrot";
		constexpr static rivet::rivet_type_id camrot_type_id = 0x89109856;
		constexpr static std::string_view camup_type_name = "camup";
		constexpr static rivet::rivet_type_id camup_type_id = 0x1fa2ddf;
		constexpr static std::string_view camright_type_name = "camright";
		constexpr static rivet::rivet_type_id camright_type_id = 0xd3727ecb;
		constexpr static std::string_view heropos_type_name = "heropos";
		constexpr static rivet::rivet_type_id heropos_type_id = 0x2c9472f5;
		constexpr static std::string_view herofwd_type_name = "herofwd";
		constexpr static rivet::rivet_type_id herofwd_type_id = 0x35f7b0a9;
		constexpr static std::string_view zoneIds_type_name = "zoneIds";
		constexpr static rivet::rivet_type_id zoneIds_type_id = 0x7fad4147;
		constexpr static std::string_view zoneTransforms_type_name = "zoneTransforms";
		constexpr static rivet::rivet_type_id zoneTransforms_type_id = 0xa075da1b;
		constexpr static std::string_view activeZoneId_type_name = "activeZoneId";
		constexpr static rivet::rivet_type_id activeZoneId_type_id = 0x2e8e0ffa; 

		explicit BugItCaptureData() = default;
		explicit BugItCaptureData([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		std::string_view lvl {};
		std::string_view chk {};
		std::string_view region {};
		std::vector<float> campos {};
		std::vector<float> camrot {};
		std::vector<float> camup {};
		std::vector<float> camright {};
		std::vector<float> heropos {};
		std::vector<float> herofwd {};
		std::vector<uint64_t> zoneIds {};
		std::vector<std::shared_ptr<rivet::ddl::generated::DDLMatrix4>> zoneTransforms {};
		uint64_t activeZoneId {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<BugItCaptureData>;
	};
} // namespace rivet::ddl::generated

// clang-format on
