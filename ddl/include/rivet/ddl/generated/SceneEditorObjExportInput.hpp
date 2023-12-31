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
	struct RIVET_DDL_SHARED SceneEditorObjExportInput : rivet::structures::rivet_ddl_base {
		constexpr static std::string_view type_name = "SceneEditorObjExportInput";
		constexpr static rivet::rivet_type_id type_id = 0x467d8176;

		constexpr static std::string_view ZonePath_type_name = "ZonePath";
		constexpr static rivet::rivet_type_id ZonePath_type_id = 0x3643be77;
		constexpr static std::string_view LodScale_type_name = "LodScale";
		constexpr static rivet::rivet_type_id LodScale_type_id = 0x1d595b30; 

		explicit SceneEditorObjExportInput() = default;
		explicit SceneEditorObjExportInput([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		std::string_view ZonePath {};
		float LodScale {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<SceneEditorObjExportInput>;
	};
} // namespace rivet::ddl::generated

// clang-format on
