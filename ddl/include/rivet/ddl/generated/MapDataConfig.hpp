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

#include <rivet/ddl/generated/ConfigBase.hpp> 

namespace rivet::ddl::generated {
	struct MapElementTypeArray; 

	struct RIVET_DDL_SHARED MapDataConfig : ConfigBase {
		constexpr static std::string_view type_name = "MapDataConfig";
		constexpr static rivet::rivet_type_id type_id = 0x8f710d4c;

		constexpr static std::string_view LevelData_type_name = "LevelData";
		constexpr static rivet::rivet_type_id LevelData_type_id = 0xe16e3538; 

		explicit MapDataConfig() = default;
		explicit MapDataConfig([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		std::vector<std::shared_ptr<rivet::ddl::generated::MapElementTypeArray>> LevelData {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<MapDataConfig>;
	};
} // namespace rivet::ddl::generated

// clang-format on
