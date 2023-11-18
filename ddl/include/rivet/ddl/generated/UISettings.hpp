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
	struct RIVET_DDL_SHARED UISettings : rivet::structures::rivet_ddl_base {
		constexpr static std::string_view type_name = "UISettings";
		constexpr static rivet::rivet_type_id type_id = 0x23fcd035;

		constexpr static std::string_view MultiThreaded_type_name = "MultiThreaded";
		constexpr static rivet::rivet_type_id MultiThreaded_type_id = 0x708b9c41;
		constexpr static std::string_view ThreadStackSize_type_name = "ThreadStackSize";
		constexpr static rivet::rivet_type_id ThreadStackSize_type_id = 0x9ca308f7;
		constexpr static std::string_view ShowViewMenu_type_name = "ShowViewMenu";
		constexpr static rivet::rivet_type_id ShowViewMenu_type_id = 0xd7693087;
		constexpr static std::string_view DebugPOIs_type_name = "DebugPOIs";
		constexpr static rivet::rivet_type_id DebugPOIs_type_id = 0xc9d88ea3;
		constexpr static std::string_view DebugSkipAutoLoad_type_name = "DebugSkipAutoLoad";
		constexpr static rivet::rivet_type_id DebugSkipAutoLoad_type_id = 0xa54e7213; 

		explicit UISettings() = default;
		explicit UISettings([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		bool MultiThreaded {};
		uint32_t ThreadStackSize {};
		bool ShowViewMenu {};
		bool DebugPOIs {};
		bool DebugSkipAutoLoad {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<UISettings>;
	};
} // namespace rivet::ddl::generated

// clang-format on
