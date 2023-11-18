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
	struct RIVET_DDL_SHARED PythonSymbols : rivet::structures::rivet_ddl_base {
		constexpr static std::string_view type_name = "PythonSymbols";
		constexpr static rivet::rivet_type_id type_id = 0x74385198;

		constexpr static std::string_view Functions_type_name = "Functions";
		constexpr static rivet::rivet_type_id Functions_type_id = 0xc151b200;
		constexpr static std::string_view Selects_type_name = "Selects";
		constexpr static rivet::rivet_type_id Selects_type_id = 0x81cb9c69;
		constexpr static std::string_view Structs_type_name = "Structs";
		constexpr static rivet::rivet_type_id Structs_type_id = 0xc688332b;
		constexpr static std::string_view Type_type_name = "Type";
		constexpr static rivet::rivet_type_id Type_type_id = 0xbc4e9799; 

		explicit PythonSymbols() = default;
		explicit PythonSymbols([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		std::vector<std::string_view> Functions {};
		std::vector<std::string_view> Selects {};
		std::vector<std::string_view> Structs {};
		std::string_view Type {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<PythonSymbols>;
	};
} // namespace rivet::ddl::generated

// clang-format on
