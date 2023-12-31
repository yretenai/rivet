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
	struct BuiltNodeInfo; 

	struct RIVET_DDL_SHARED GraphNodesBuilt : rivet::structures::rivet_ddl_base {
		constexpr static std::string_view type_name = "GraphNodesBuilt";
		constexpr static rivet::rivet_type_id type_id = 0xbffaea85;

		constexpr static std::string_view GraphName_type_name = "GraphName";
		constexpr static rivet::rivet_type_id GraphName_type_id = 0xe277891a;
		constexpr static std::string_view Nodes_type_name = "Nodes";
		constexpr static rivet::rivet_type_id Nodes_type_id = 0x46ec93d;
		constexpr static std::string_view SortedNodes_type_name = "SortedNodes";
		constexpr static rivet::rivet_type_id SortedNodes_type_id = 0x70d0cea;
		constexpr static std::string_view MaxDepth_type_name = "MaxDepth";
		constexpr static rivet::rivet_type_id MaxDepth_type_id = 0xe33ddbfe; 

		explicit GraphNodesBuilt() = default;
		explicit GraphNodesBuilt([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		std::string_view GraphName {};
		std::vector<std::shared_ptr<rivet::ddl::generated::BuiltNodeInfo>> Nodes {};
		std::vector<uint64_t> SortedNodes {};
		uint32_t MaxDepth {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<GraphNodesBuilt>;
	};
} // namespace rivet::ddl::generated

// clang-format on
