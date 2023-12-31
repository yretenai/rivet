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

#include <rivet/ddl/generated/enums/xf02da14.hpp> 

namespace rivet::ddl::generated {
	struct RIVET_DDL_SHARED LevelListSelectionElement : rivet::structures::rivet_ddl_base {
		constexpr static std::string_view type_name = "LevelListSelectionElement";
		constexpr static rivet::rivet_type_id type_id = 0x93fa8992;

		constexpr static std::string_view Type_type_name = "Type";
		constexpr static rivet::rivet_type_id Type_type_id = 0xbc4e9799;
		constexpr static std::string_view AssetPath_type_name = "AssetPath";
		constexpr static rivet::rivet_type_id AssetPath_type_id = 0xefa614b;
		constexpr static std::string_view Id_type_name = "Id";
		constexpr static rivet::rivet_type_id Id_type_id = 0x8a514a8d;
		constexpr static std::string_view ItemName_type_name = "ItemName";
		constexpr static rivet::rivet_type_id ItemName_type_id = 0xae6e0e80;
		constexpr static std::string_view ModelItemId_type_name = "ModelItemId";
		constexpr static rivet::rivet_type_id ModelItemId_type_id = 0x8bf32ff7; 

		explicit LevelListSelectionElement() = default;
		explicit LevelListSelectionElement([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		rivet::ddl::generated::xf02da14 Type {};
		std::string_view AssetPath {};
		uint64_t Id {};
		std::string_view ItemName {};
		uint64_t ModelItemId {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<LevelListSelectionElement>;
	};
} // namespace rivet::ddl::generated

// clang-format on
