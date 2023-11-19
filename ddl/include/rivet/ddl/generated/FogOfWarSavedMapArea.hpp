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
	struct DDLVector2; 

	struct RIVET_DDL_SHARED FogOfWarSavedMapArea : rivet::structures::rivet_ddl_base {
		constexpr static std::string_view type_name = "FogOfWarSavedMapArea";
		constexpr static rivet::rivet_type_id type_id = 0xa891abee;

		constexpr static std::string_view TopLeft_type_name = "TopLeft";
		constexpr static rivet::rivet_type_id TopLeft_type_id = 0x7fc08274;
		constexpr static std::string_view BotRight_type_name = "BotRight";
		constexpr static rivet::rivet_type_id BotRight_type_id = 0x53891b09;
		constexpr static std::string_view CellDimensions_type_name = "CellDimensions";
		constexpr static rivet::rivet_type_id CellDimensions_type_id = 0x59bf8ea9;
		constexpr static std::string_view ColumnCount_type_name = "ColumnCount";
		constexpr static rivet::rivet_type_id ColumnCount_type_id = 0xbc37dc3;
		constexpr static std::string_view RowCount_type_name = "RowCount";
		constexpr static rivet::rivet_type_id RowCount_type_id = 0x98b569fa;
		constexpr static std::string_view RevealedCellsBitSet_type_name = "RevealedCellsBitSet";
		constexpr static rivet::rivet_type_id RevealedCellsBitSet_type_id = 0x2cc32101; 

		explicit FogOfWarSavedMapArea() = default;
		explicit FogOfWarSavedMapArea([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		std::shared_ptr<rivet::ddl::generated::DDLVector2> TopLeft {};
		std::shared_ptr<rivet::ddl::generated::DDLVector2> BotRight {};
		std::shared_ptr<rivet::ddl::generated::DDLVector2> CellDimensions {};
		uint32_t ColumnCount {};
		uint32_t RowCount {};
		std::vector<uint8_t> RevealedCellsBitSet {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<FogOfWarSavedMapArea>;
	};
} // namespace rivet::ddl::generated

// clang-format on