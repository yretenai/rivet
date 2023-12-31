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

#include <rivet/ddl/generated/enums/x507460e6.hpp>
#include <rivet/ddl/generated/GamePickupItemPrius.hpp> 

namespace rivet::ddl::generated {
	struct RIVET_DDL_SHARED PickupTradingCardPrius : GamePickupItemPrius {
		constexpr static std::string_view type_name = "PickupTradingCardPrius";
		constexpr static rivet::rivet_type_id type_id = 0x663f1234;

		constexpr static std::string_view CardCount_type_name = "CardCount";
		constexpr static rivet::rivet_type_id CardCount_type_id = 0x77f386d3;
		constexpr static std::string_view CardID_type_name = "CardID";
		constexpr static rivet::rivet_type_id CardID_type_id = 0x7b6ab6e3; 

		explicit PickupTradingCardPrius() = default;
		explicit PickupTradingCardPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		uint8_t CardCount {};
		rivet::ddl::generated::x507460e6 CardID {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<PickupTradingCardPrius>;
	};
} // namespace rivet::ddl::generated

// clang-format on
