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
	struct LookGroupEngineItem;
	struct LookEngineItem; 

	struct RIVET_DDL_SHARED LookStateEngineItem : rivet::structures::rivet_ddl_base {
		constexpr static std::string_view type_name = "LookStateEngineItem";
		constexpr static rivet::rivet_type_id type_id = 0x6d87d6e8;

		constexpr static std::string_view ModelAssetPath_type_name = "ModelAssetPath";
		constexpr static rivet::rivet_type_id ModelAssetPath_type_id = 0xb8b499c3;
		constexpr static std::string_view Looks_type_name = "Looks";
		constexpr static rivet::rivet_type_id Looks_type_id = 0xec785832;
		constexpr static std::string_view LookGroups_type_name = "LookGroups";
		constexpr static rivet::rivet_type_id LookGroups_type_id = 0xb6c4ab29; 

		explicit LookStateEngineItem() = default;
		explicit LookStateEngineItem([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		std::string_view ModelAssetPath {};
		std::vector<std::shared_ptr<rivet::ddl::generated::LookEngineItem>> Looks {};
		std::vector<std::shared_ptr<rivet::ddl::generated::LookGroupEngineItem>> LookGroups {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<LookStateEngineItem>;
	};
} // namespace rivet::ddl::generated

// clang-format on
