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
	struct BotIndexMoveContainer;
	struct BotComboEntry; 

	struct RIVET_DDL_SHARED BotConfigCombo : ConfigBase {
		constexpr static std::string_view type_name = "BotConfigCombo";
		constexpr static rivet::rivet_type_id type_id = 0xb0fc7b99;

		constexpr static std::string_view Combos_type_name = "Combos";
		constexpr static rivet::rivet_type_id Combos_type_id = 0xb3ce15d2;
		constexpr static std::string_view IndexMoveList_type_name = "IndexMoveList";
		constexpr static rivet::rivet_type_id IndexMoveList_type_id = 0x62c1f51f;
		constexpr static std::string_view IndexMoveListProcessed_type_name = "IndexMoveListProcessed";
		constexpr static rivet::rivet_type_id IndexMoveListProcessed_type_id = 0xa8a72066; 

		explicit BotConfigCombo() = default;
		explicit BotConfigCombo([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		std::vector<std::shared_ptr<rivet::ddl::generated::BotComboEntry>> Combos {};
		std::vector<std::shared_ptr<rivet::ddl::generated::BotIndexMoveContainer>> IndexMoveList {};
		bool IndexMoveListProcessed {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<BotConfigCombo>;
	};
} // namespace rivet::ddl::generated

// clang-format on
