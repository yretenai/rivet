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
	struct BreakableBlockSetData;
	struct BreakableBlockData; 

	struct RIVET_DDL_SHARED BreakablePaletteDragAndDropData : rivet::structures::rivet_ddl_base {
		constexpr static std::string_view type_name = "BreakablePaletteDragAndDropData";
		constexpr static rivet::rivet_type_id type_id = 0x27ceaa71;

		constexpr static std::string_view Blocks_type_name = "Blocks";
		constexpr static rivet::rivet_type_id Blocks_type_id = 0xf095db1f;
		constexpr static std::string_view BlockSets_type_name = "BlockSets";
		constexpr static rivet::rivet_type_id BlockSets_type_id = 0x99a2a523; 

		explicit BreakablePaletteDragAndDropData() = default;
		explicit BreakablePaletteDragAndDropData([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		std::vector<std::shared_ptr<rivet::ddl::generated::BreakableBlockData>> Blocks {};
		std::vector<std::shared_ptr<rivet::ddl::generated::BreakableBlockSetData>> BlockSets {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<BreakablePaletteDragAndDropData>;
	};
} // namespace rivet::ddl::generated

// clang-format on
