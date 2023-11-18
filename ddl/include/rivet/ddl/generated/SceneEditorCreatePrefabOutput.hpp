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
	struct SceneNode; 

	struct RIVET_DDL_SHARED SceneEditorCreatePrefabOutput : rivet::structures::rivet_ddl_base {
		constexpr static std::string_view type_name = "SceneEditorCreatePrefabOutput";
		constexpr static rivet::rivet_type_id type_id = 0x585ece51;

		constexpr static std::string_view UndoBatchId_type_name = "UndoBatchId";
		constexpr static rivet::rivet_type_id UndoBatchId_type_id = 0xb6192522;
		constexpr static std::string_view PrefabInstance_type_name = "PrefabInstance";
		constexpr static rivet::rivet_type_id PrefabInstance_type_id = 0x29607f07; 

		explicit SceneEditorCreatePrefabOutput() = default;
		explicit SceneEditorCreatePrefabOutput([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		uint64_t UndoBatchId {};
		std::shared_ptr<rivet::ddl::generated::SceneNode> PrefabInstance {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<SceneEditorCreatePrefabOutput>;
	};
} // namespace rivet::ddl::generated

// clang-format on
