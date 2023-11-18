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
	struct RIVET_DDL_SHARED SceneEditorHotkey : rivet::structures::rivet_ddl_base {
		constexpr static std::string_view type_name = "SceneEditorHotkey";
		constexpr static rivet::rivet_type_id type_id = 0x51e5f6b4;

		constexpr static std::string_view ControlName_type_name = "ControlName";
		constexpr static rivet::rivet_type_id ControlName_type_id = 0xb2f8624a;
		constexpr static std::string_view Description_type_name = "Description";
		constexpr static rivet::rivet_type_id Description_type_id = 0xe03811fd;
		constexpr static std::string_view Key1_type_name = "Key1";
		constexpr static rivet::rivet_type_id Key1_type_id = 0x1ccca4e0;
		constexpr static std::string_view Trigger1_type_name = "Trigger1";
		constexpr static rivet::rivet_type_id Trigger1_type_id = 0x6c1d1481;
		constexpr static std::string_view Key2_type_name = "Key2";
		constexpr static rivet::rivet_type_id Key2_type_id = 0x85c5f55a;
		constexpr static std::string_view Trigger2_type_name = "Trigger2";
		constexpr static rivet::rivet_type_id Trigger2_type_id = 0xf514453b; 

		explicit SceneEditorHotkey() = default;
		explicit SceneEditorHotkey([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		std::string_view ControlName {};
		std::string_view Description {};
		std::vector<std::string_view> Key1 {};
		std::vector<std::string_view> Trigger1 {};
		std::vector<std::string_view> Key2 {};
		std::vector<std::string_view> Trigger2 {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<SceneEditorHotkey>;
	};
} // namespace rivet::ddl::generated

// clang-format on
