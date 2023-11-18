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
	struct RIVET_DDL_SHARED GameContext : rivet::structures::rivet_ddl_base {
		constexpr static std::string_view type_name = "GameContext";
		constexpr static rivet::rivet_type_id type_id = 0x243aa772;

		constexpr static std::string_view Port_type_name = "Port";
		constexpr static rivet::rivet_type_id Port_type_id = 0x73019d7c;
		constexpr static std::string_view Ip_type_name = "Ip";
		constexpr static rivet::rivet_type_id Ip_type_id = 0x908b9ef0;
		constexpr static std::string_view HostName_type_name = "HostName";
		constexpr static rivet::rivet_type_id HostName_type_id = 0xbf62d25f;
		constexpr static std::string_view AppName_type_name = "AppName";
		constexpr static rivet::rivet_type_id AppName_type_id = 0x9ce2183d;
		constexpr static std::string_view Platform_type_name = "Platform";
		constexpr static rivet::rivet_type_id Platform_type_id = 0xc3536dbb;
		constexpr static std::string_view IsTool_type_name = "IsTool";
		constexpr static rivet::rivet_type_id IsTool_type_id = 0xbfb665ba;
		constexpr static std::string_view DebugMem_type_name = "DebugMem";
		constexpr static rivet::rivet_type_id DebugMem_type_id = 0x93383dda;
		constexpr static std::string_view Host_type_name = "Host";
		constexpr static rivet::rivet_type_id Host_type_id = 0xffb7d34d;
		constexpr static std::string_view InfoString_type_name = "InfoString";
		constexpr static rivet::rivet_type_id InfoString_type_id = 0xc245c0cf; 

		explicit GameContext() = default;
		explicit GameContext([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		int32_t Port {};
		std::string_view Ip {};
		std::string_view HostName {};
		std::string_view AppName {};
		std::string_view Platform {};
		bool IsTool {};
		bool DebugMem {};
		std::string_view Host {};
		std::string_view InfoString {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<GameContext>;
	};
} // namespace rivet::ddl::generated

// clang-format on
