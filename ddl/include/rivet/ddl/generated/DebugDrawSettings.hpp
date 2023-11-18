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
	struct RIVET_DDL_SHARED DebugDrawSettings : rivet::structures::rivet_ddl_base {
		constexpr static std::string_view type_name = "DebugDrawSettings";
		constexpr static rivet::rivet_type_id type_id = 0x7214ba62;

		constexpr static std::string_view DebugDrawEnable_type_name = "DebugDrawEnable";
		constexpr static rivet::rivet_type_id DebugDrawEnable_type_id = 0x86e9664a;
		constexpr static std::string_view DebugDrawEntryCount_type_name = "DebugDrawEntryCount";
		constexpr static rivet::rivet_type_id DebugDrawEntryCount_type_id = 0xe0e23594;
		constexpr static std::string_view DebugDrawStringMemSize_type_name = "DebugDrawStringMemSize";
		constexpr static rivet::rivet_type_id DebugDrawStringMemSize_type_id = 0xe83bed81; 

		explicit DebugDrawSettings() = default;
		explicit DebugDrawSettings([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		bool DebugDrawEnable {};
		uint32_t DebugDrawEntryCount {};
		uint32_t DebugDrawStringMemSize {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<DebugDrawSettings>;
	};
} // namespace rivet::ddl::generated

// clang-format on
