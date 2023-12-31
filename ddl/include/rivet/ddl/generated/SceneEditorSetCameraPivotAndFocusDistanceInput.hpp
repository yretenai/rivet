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
	struct DDLVector3; 

	struct RIVET_DDL_SHARED SceneEditorSetCameraPivotAndFocusDistanceInput : rivet::structures::rivet_ddl_base {
		constexpr static std::string_view type_name = "SceneEditorSetCameraPivotAndFocusDistanceInput";
		constexpr static rivet::rivet_type_id type_id = 0xbce49dd8;

		constexpr static std::string_view FocusDistance_type_name = "FocusDistance";
		constexpr static rivet::rivet_type_id FocusDistance_type_id = 0x546334a6;
		constexpr static std::string_view Pivot_type_name = "Pivot";
		constexpr static rivet::rivet_type_id Pivot_type_id = 0x85fcb535; 

		explicit SceneEditorSetCameraPivotAndFocusDistanceInput() = default;
		explicit SceneEditorSetCameraPivotAndFocusDistanceInput([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		float FocusDistance {};
		std::shared_ptr<rivet::ddl::generated::DDLVector3> Pivot {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<SceneEditorSetCameraPivotAndFocusDistanceInput>;
	};
} // namespace rivet::ddl::generated

// clang-format on
