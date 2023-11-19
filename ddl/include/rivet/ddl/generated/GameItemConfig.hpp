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

#include <rivet/ddl/generated/ItemConfig.hpp> 

namespace rivet::ddl::generated {
	struct GameItemData; 

	struct RIVET_DDL_SHARED GameItemConfig : ItemConfig {
		constexpr static std::string_view type_name = "GameItemConfig";
		constexpr static rivet::rivet_type_id type_id = 0xf1864f6d;

		constexpr static std::string_view GameItemData_type_name = "GameItemData";
		constexpr static rivet::rivet_type_id GameItemData_type_id = 0x7ccdfa11; 

		explicit GameItemConfig() = default;
		explicit GameItemConfig([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		std::shared_ptr<rivet::ddl::generated::GameItemData> GameItemData {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<GameItemConfig>;
	};
} // namespace rivet::ddl::generated

// clang-format on