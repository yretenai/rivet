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
	struct RIVET_DDL_SHARED ScriptActionInputPlug : rivet::structures::rivet_ddl_base {
		constexpr static std::string_view type_name = "ScriptActionInputPlug";
		constexpr static rivet::rivet_type_id type_id = 0x30d9328d;

		constexpr static std::string_view PlugName_type_name = "PlugName";
		constexpr static rivet::rivet_type_id PlugName_type_id = 0xd0cdec13;
		constexpr static std::string_view TargetId_type_name = "TargetId";
		constexpr static rivet::rivet_type_id TargetId_type_id = 0xc3642b05;
		constexpr static std::string_view TargetPlugName_type_name = "TargetPlugName";
		constexpr static rivet::rivet_type_id TargetPlugName_type_id = 0x3ec29a87; 

		explicit ScriptActionInputPlug() = default;
		explicit ScriptActionInputPlug([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		std::string_view PlugName {};
		uint64_t TargetId {};
		std::string_view TargetPlugName {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<ScriptActionInputPlug>;
	};
} // namespace rivet::ddl::generated

// clang-format on
