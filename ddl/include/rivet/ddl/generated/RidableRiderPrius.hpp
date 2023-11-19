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
	struct RIVET_DDL_SHARED RidableRiderPrius : rivet::structures::rivet_ddl_base {
		constexpr static std::string_view type_name = "RidableRiderPrius";
		constexpr static rivet::rivet_type_id type_id = 0xcc1dc9aa;

		constexpr static std::string_view RidableHandle_type_name = "RidableHandle";
		constexpr static rivet::rivet_type_id RidableHandle_type_id = 0x8ac74a6d;
		constexpr static std::string_view AnimSetId_type_name = "AnimSetId";
		constexpr static rivet::rivet_type_id AnimSetId_type_id = 0xb1e9ad5;
		constexpr static std::string_view SeatIndex_type_name = "SeatIndex";
		constexpr static rivet::rivet_type_id SeatIndex_type_id = 0xf336df3; 

		explicit RidableRiderPrius() = default;
		explicit RidableRiderPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		uint32_t RidableHandle {};
		uint64_t AnimSetId {};
		int32_t SeatIndex {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<RidableRiderPrius>;
	};
} // namespace rivet::ddl::generated

// clang-format on