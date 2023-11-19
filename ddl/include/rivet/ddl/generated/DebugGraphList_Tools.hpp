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
	struct RIVET_DDL_SHARED DebugGraphList_Tools : rivet::structures::rivet_ddl_base {
		constexpr static std::string_view type_name = "DebugGraphList_Tools";
		constexpr static rivet::rivet_type_id type_id = 0xb3a1cdbf;

		constexpr static std::string_view Graphs_type_name = "Graphs";
		constexpr static rivet::rivet_type_id Graphs_type_id = 0xaa1a5a96; 

		explicit DebugGraphList_Tools() = default;
		explicit DebugGraphList_Tools([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		std::vector<std::string_view> Graphs {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<DebugGraphList_Tools>;
	};
} // namespace rivet::ddl::generated

// clang-format on