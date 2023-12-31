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

#include <rivet/ddl/generated/enums/x2c2b51d.hpp> 

namespace rivet::ddl::generated {
	struct RIVET_DDL_SHARED ZurkonPrius : rivet::structures::rivet_ddl_base {
		constexpr static std::string_view type_name = "ZurkonPrius";
		constexpr static rivet::rivet_type_id type_id = 0xd3055b42;

		constexpr static std::string_view FamilyType_type_name = "FamilyType";
		constexpr static rivet::rivet_type_id FamilyType_type_id = 0x7cc10157;
		constexpr static std::string_view ShotConfigAssetId_type_name = "ShotConfigAssetId";
		constexpr static rivet::rivet_type_id ShotConfigAssetId_type_id = 0x5329bd21;
		constexpr static std::string_view VOConfigAssetId_type_name = "VOConfigAssetId";
		constexpr static rivet::rivet_type_id VOConfigAssetId_type_id = 0xac5bca76;
		constexpr static std::string_view OwnerHandle_type_name = "OwnerHandle";
		constexpr static rivet::rivet_type_id OwnerHandle_type_id = 0x6151ad8f;
		constexpr static std::string_view WeaponHandle_type_name = "WeaponHandle";
		constexpr static rivet::rivet_type_id WeaponHandle_type_id = 0xf2200196;
		constexpr static std::string_view NumShots_type_name = "NumShots";
		constexpr static rivet::rivet_type_id NumShots_type_id = 0x108d4906;
		constexpr static std::string_view HitPoints_type_name = "HitPoints";
		constexpr static rivet::rivet_type_id HitPoints_type_id = 0xc518cd0a;
		constexpr static std::string_view Range_type_name = "Range";
		constexpr static rivet::rivet_type_id Range_type_id = 0x8ad49688;
		constexpr static std::string_view FiringInterval_type_name = "FiringInterval";
		constexpr static rivet::rivet_type_id FiringInterval_type_id = 0xefcca1c6;
		constexpr static std::string_view IsRespawn_type_name = "IsRespawn";
		constexpr static rivet::rivet_type_id IsRespawn_type_id = 0xcb474a3; 

		explicit ZurkonPrius() = default;
		explicit ZurkonPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		rivet::ddl::generated::x2c2b51d FamilyType {};
		uint64_t ShotConfigAssetId {};
		uint64_t VOConfigAssetId {};
		uint32_t OwnerHandle {};
		uint32_t WeaponHandle {};
		uint32_t NumShots {};
		float HitPoints {};
		float Range {};
		float FiringInterval {};
		bool IsRespawn {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<ZurkonPrius>;
	};
} // namespace rivet::ddl::generated

// clang-format on
