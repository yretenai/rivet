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
	struct RIVET_DDL_SHARED NodeGraphLibrarySubGraphData : rivet::structures::rivet_ddl_base {
		constexpr static std::string_view type_name = "NodeGraphLibrarySubGraphData";
		constexpr static rivet::rivet_type_id type_id = 0xe7cab6b6;

		constexpr static std::string_view AssetPath_type_name = "AssetPath";
		constexpr static rivet::rivet_type_id AssetPath_type_id = 0xefa614b;
		constexpr static std::string_view GraphTuid_type_name = "GraphTuid";
		constexpr static rivet::rivet_type_id GraphTuid_type_id = 0xd597c0df; 

		explicit NodeGraphLibrarySubGraphData() = default;
		explicit NodeGraphLibrarySubGraphData([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		std::string_view AssetPath {};
		uint64_t GraphTuid {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<NodeGraphLibrarySubGraphData>;
	};
} // namespace rivet::ddl::generated

// clang-format on
