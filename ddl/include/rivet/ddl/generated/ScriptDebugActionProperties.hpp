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
	struct ScriptDebugActionProperty; 

	struct RIVET_DDL_SHARED ScriptDebugActionProperties : rivet::structures::rivet_ddl_base {
		constexpr static std::string_view type_name = "ScriptDebugActionProperties";
		constexpr static rivet::rivet_type_id type_id = 0x8ca470d8;

		constexpr static std::string_view ActionTuid_type_name = "ActionTuid";
		constexpr static rivet::rivet_type_id ActionTuid_type_id = 0x6256417e;
		constexpr static std::string_view ZoneId_type_name = "ZoneId";
		constexpr static rivet::rivet_type_id ZoneId_type_id = 0xc0e0f909;
		constexpr static std::string_view Properties_type_name = "Properties";
		constexpr static rivet::rivet_type_id Properties_type_id = 0x5cf56ffe; 

		explicit ScriptDebugActionProperties() = default;
		explicit ScriptDebugActionProperties([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		uint64_t ActionTuid {};
		uint64_t ZoneId {};
		std::vector<std::shared_ptr<rivet::ddl::generated::ScriptDebugActionProperty>> Properties {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<ScriptDebugActionProperties>;
	};
} // namespace rivet::ddl::generated

// clang-format on
