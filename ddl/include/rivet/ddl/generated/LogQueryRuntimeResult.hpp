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
	struct RIVET_DDL_SHARED LogQueryRuntimeResult : rivet::structures::rivet_ddl_base {
		constexpr static std::string_view type_name = "LogQueryRuntimeResult";
		constexpr static rivet::rivet_type_id type_id = 0x53283724;

		constexpr static std::string_view Success_type_name = "Success";
		constexpr static rivet::rivet_type_id Success_type_id = 0x6eeabc8a;
		constexpr static std::string_view ErrorMsg_type_name = "ErrorMsg";
		constexpr static rivet::rivet_type_id ErrorMsg_type_id = 0x4fe7e9d8;
		constexpr static std::string_view Data_type_name = "Data";
		constexpr static rivet::rivet_type_id Data_type_id = 0x9d6333d3; 

		explicit LogQueryRuntimeResult() = default;
		explicit LogQueryRuntimeResult([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		bool Success {};
		std::string_view ErrorMsg {};
		std::string_view Data {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<LogQueryRuntimeResult>;
	};
} // namespace rivet::ddl::generated

// clang-format on
