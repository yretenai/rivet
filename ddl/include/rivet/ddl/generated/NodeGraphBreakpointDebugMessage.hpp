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
	struct RIVET_DDL_SHARED NodeGraphBreakpointDebugMessage : rivet::structures::rivet_ddl_base {
		constexpr static std::string_view type_name = "NodeGraphBreakpointDebugMessage";
		constexpr static rivet::rivet_type_id type_id = 0xf2439c56;

		constexpr static std::string_view AssetId_type_name = "AssetId";
		constexpr static rivet::rivet_type_id AssetId_type_id = 0xb6e788d7;
		constexpr static std::string_view NodeId_type_name = "NodeId";
		constexpr static rivet::rivet_type_id NodeId_type_id = 0x371a59e0; 

		explicit NodeGraphBreakpointDebugMessage() = default;
		explicit NodeGraphBreakpointDebugMessage([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		uint64_t AssetId {};
		uint64_t NodeId {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<NodeGraphBreakpointDebugMessage>;
	};
} // namespace rivet::ddl::generated

// clang-format on
