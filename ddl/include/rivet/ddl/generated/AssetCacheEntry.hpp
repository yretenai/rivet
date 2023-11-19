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
	struct RIVET_DDL_SHARED AssetCacheEntry : rivet::structures::rivet_ddl_base {
		constexpr static std::string_view type_name = "AssetCacheEntry";
		constexpr static rivet::rivet_type_id type_id = 0xec94a6c2;

		constexpr static std::string_view AssetPath_type_name = "AssetPath";
		constexpr static rivet::rivet_type_id AssetPath_type_id = 0xefa614b;
		constexpr static std::string_view ErrorCode_type_name = "ErrorCode";
		constexpr static rivet::rivet_type_id ErrorCode_type_id = 0x6b51563c;
		constexpr static std::string_view LastError_type_name = "LastError";
		constexpr static rivet::rivet_type_id LastError_type_id = 0xd5efb83e;
		constexpr static std::string_view Size_type_name = "Size";
		constexpr static rivet::rivet_type_id Size_type_id = 0xc750e4da;
		constexpr static std::string_view LastAccessed_type_name = "LastAccessed";
		constexpr static rivet::rivet_type_id LastAccessed_type_id = 0x49dbc8c6;
		constexpr static std::string_view LastModified_type_name = "LastModified";
		constexpr static rivet::rivet_type_id LastModified_type_id = 0x7757eb4f;
		constexpr static std::string_view LastSaved_type_name = "LastSaved";
		constexpr static rivet::rivet_type_id LastSaved_type_id = 0x71d1d76a; 

		explicit AssetCacheEntry() = default;
		explicit AssetCacheEntry([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		std::string_view AssetPath {};
		int32_t ErrorCode {};
		std::string_view LastError {};
		int64_t Size {};
		int64_t LastAccessed {};
		int64_t LastModified {};
		int64_t LastSaved {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<AssetCacheEntry>;
	};
} // namespace rivet::ddl::generated

// clang-format on