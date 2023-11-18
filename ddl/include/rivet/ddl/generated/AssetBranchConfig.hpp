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
	struct RIVET_DDL_SHARED AssetBranchConfig : rivet::structures::rivet_ddl_base {
		constexpr static std::string_view type_name = "AssetBranchConfig";
		constexpr static rivet::rivet_type_id type_id = 0xb37cd148;

		constexpr static std::string_view SourceRoot_type_name = "SourceRoot";
		constexpr static rivet::rivet_type_id SourceRoot_type_id = 0x716f14e7;
		constexpr static std::string_view BuiltRoot_type_name = "BuiltRoot";
		constexpr static rivet::rivet_type_id BuiltRoot_type_id = 0x819b415;
		constexpr static std::string_view BranchName_type_name = "BranchName";
		constexpr static rivet::rivet_type_id BranchName_type_id = 0xc44d190; 

		explicit AssetBranchConfig() = default;
		explicit AssetBranchConfig([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		std::string_view SourceRoot {};
		std::string_view BuiltRoot {};
		std::string_view BranchName {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<AssetBranchConfig>;
	};
} // namespace rivet::ddl::generated

// clang-format on
