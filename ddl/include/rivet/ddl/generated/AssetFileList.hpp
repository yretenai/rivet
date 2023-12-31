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
	struct RIVET_DDL_SHARED AssetFileList : rivet::structures::rivet_ddl_base {
		constexpr static std::string_view type_name = "AssetFileList";
		constexpr static rivet::rivet_type_id type_id = 0x577be0ad;

		constexpr static std::string_view AssetPaths_type_name = "AssetPaths";
		constexpr static rivet::rivet_type_id AssetPaths_type_id = 0x280c42ff;
		constexpr static std::string_view Force_type_name = "Force";
		constexpr static rivet::rivet_type_id Force_type_id = 0x8e3b4fe9; 

		explicit AssetFileList() = default;
		explicit AssetFileList([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		std::vector<std::string_view> AssetPaths {};
		bool Force {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<AssetFileList>;
	};
} // namespace rivet::ddl::generated

// clang-format on
