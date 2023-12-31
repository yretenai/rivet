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
	struct SessionPivot;
	struct SessionPropertyPanelState;
	struct SceneEditorPrefs; 

	struct RIVET_DDL_SHARED SessionPersistentData : rivet::structures::rivet_ddl_base {
		constexpr static std::string_view type_name = "SessionPersistentData";
		constexpr static rivet::rivet_type_id type_id = 0xe1bcb8d1;

		constexpr static std::string_view SceneEditorPrefs_type_name = "SceneEditorPrefs";
		constexpr static rivet::rivet_type_id SceneEditorPrefs_type_id = 0x958bdf12;
		constexpr static std::string_view PropPanelState_type_name = "PropPanelState";
		constexpr static rivet::rivet_type_id PropPanelState_type_id = 0x226554c4;
		constexpr static std::string_view AssetPivot_type_name = "AssetPivot";
		constexpr static rivet::rivet_type_id AssetPivot_type_id = 0x3f19bd1a;
		constexpr static std::string_view ObjectPivot_type_name = "ObjectPivot";
		constexpr static rivet::rivet_type_id ObjectPivot_type_id = 0x10824b23; 

		explicit SessionPersistentData() = default;
		explicit SessionPersistentData([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		std::shared_ptr<rivet::ddl::generated::SceneEditorPrefs> SceneEditorPrefs {};
		std::shared_ptr<rivet::ddl::generated::SessionPropertyPanelState> PropPanelState {};
		std::vector<std::shared_ptr<rivet::ddl::generated::SessionPivot>> AssetPivot {};
		std::vector<std::shared_ptr<rivet::ddl::generated::SessionPivot>> ObjectPivot {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<SessionPersistentData>;
	};
} // namespace rivet::ddl::generated

// clang-format on
