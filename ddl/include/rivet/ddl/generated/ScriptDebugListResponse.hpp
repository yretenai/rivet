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
	struct ScriptDebugListEntry; 

	struct RIVET_DDL_SHARED ScriptDebugListResponse : rivet::structures::rivet_ddl_base {
		constexpr static std::string_view type_name = "ScriptDebugListResponse";
		constexpr static rivet::rivet_type_id type_id = 0x73be64fa;

		constexpr static std::string_view ListName_type_name = "ListName";
		constexpr static rivet::rivet_type_id ListName_type_id = 0x58f8e99f;
		constexpr static std::string_view VarTuid_type_name = "VarTuid";
		constexpr static rivet::rivet_type_id VarTuid_type_id = 0xbb3171e6;
		constexpr static std::string_view Entries_type_name = "Entries";
		constexpr static rivet::rivet_type_id Entries_type_id = 0x2c12d0fd; 

		explicit ScriptDebugListResponse() = default;
		explicit ScriptDebugListResponse([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		std::string_view ListName {};
		uint64_t VarTuid {};
		std::vector<std::shared_ptr<rivet::ddl::generated::ScriptDebugListEntry>> Entries {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<ScriptDebugListResponse>;
	};
} // namespace rivet::ddl::generated

// clang-format on
