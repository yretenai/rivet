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
	struct RIVET_DDL_SHARED SelectionEngineItem : rivet::structures::rivet_ddl_base {
		constexpr static std::string_view type_name = "SelectionEngineItem";
		constexpr static rivet::rivet_type_id type_id = 0x94c8af86;

		constexpr static std::string_view SelectedNodes_type_name = "SelectedNodes";
		constexpr static rivet::rivet_type_id SelectedNodes_type_id = 0xf703b56e;
		constexpr static std::string_view LastSelectedNode_type_name = "LastSelectedNode";
		constexpr static rivet::rivet_type_id LastSelectedNode_type_id = 0xe5dee6ad; 

		explicit SelectionEngineItem() = default;
		explicit SelectionEngineItem([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		std::vector<bool> SelectedNodes {};
		uint64_t LastSelectedNode {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<SelectionEngineItem>;
	};
} // namespace rivet::ddl::generated

// clang-format on
