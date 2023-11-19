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
	struct RIVET_DDL_SHARED EditorDebugOptions : rivet::structures::rivet_ddl_base {
		constexpr static std::string_view type_name = "EditorDebugOptions";
		constexpr static rivet::rivet_type_id type_id = 0x897a2675;

		constexpr static std::string_view DOFVisualization_type_name = "DOFVisualization";
		constexpr static rivet::rivet_type_id DOFVisualization_type_id = 0x3b521405;
		constexpr static std::string_view LookAtVisualization_type_name = "LookAtVisualization";
		constexpr static rivet::rivet_type_id LookAtVisualization_type_id = 0xdd23ef46;
		constexpr static std::string_view CameraConeVisualization_type_name = "CameraConeVisualization";
		constexpr static rivet::rivet_type_id CameraConeVisualization_type_id = 0xe2271685;
		constexpr static std::string_view IgnoreJumpToShot_type_name = "IgnoreJumpToShot";
		constexpr static rivet::rivet_type_id IgnoreJumpToShot_type_id = 0x25a7afb0;
		constexpr static std::string_view ToggleCineDebugMenu_type_name = "ToggleCineDebugMenu";
		constexpr static rivet::rivet_type_id ToggleCineDebugMenu_type_id = 0x5e1fa050;
		constexpr static std::string_view ShowGrid_type_name = "ShowGrid";
		constexpr static rivet::rivet_type_id ShowGrid_type_id = 0x18a3dead; 

		explicit EditorDebugOptions() = default;
		explicit EditorDebugOptions([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		bool DOFVisualization {};
		bool LookAtVisualization {};
		bool CameraConeVisualization {};
		bool IgnoreJumpToShot {};
		bool ToggleCineDebugMenu {};
		bool ShowGrid {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<EditorDebugOptions>;
	};
} // namespace rivet::ddl::generated

// clang-format on