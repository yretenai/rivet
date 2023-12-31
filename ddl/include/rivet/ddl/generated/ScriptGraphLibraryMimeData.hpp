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
	struct ScriptGraphLibraryData; 

	struct RIVET_DDL_SHARED ScriptGraphLibraryMimeData : rivet::structures::rivet_ddl_base {
		constexpr static std::string_view type_name = "ScriptGraphLibraryMimeData";
		constexpr static rivet::rivet_type_id type_id = 0xa0256dc5;

		constexpr static std::string_view ScriptGraphData_type_name = "ScriptGraphData";
		constexpr static rivet::rivet_type_id ScriptGraphData_type_id = 0xaad42c74; 

		explicit ScriptGraphLibraryMimeData() = default;
		explicit ScriptGraphLibraryMimeData([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		std::vector<std::shared_ptr<rivet::ddl::generated::ScriptGraphLibraryData>> ScriptGraphData {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<ScriptGraphLibraryMimeData>;
	};
} // namespace rivet::ddl::generated

// clang-format on
