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
	struct RIVET_DDL_SHARED DirectionFilterConfig : rivet::structures::rivet_ddl_base {
		constexpr static std::string_view type_name = "DirectionFilterConfig";
		constexpr static rivet::rivet_type_id type_id = 0x53757f0b;

		constexpr static std::string_view DriverName_type_name = "DriverName";
		constexpr static rivet::rivet_type_id DriverName_type_id = 0x7a8704f5;
		constexpr static std::string_view IndexCount_type_name = "IndexCount";
		constexpr static rivet::rivet_type_id IndexCount_type_id = 0x698b9d17;
		constexpr static std::string_view Front_type_name = "Front";
		constexpr static rivet::rivet_type_id Front_type_id = 0xe7a8ae37;
		constexpr static std::string_view Back_type_name = "Back";
		constexpr static rivet::rivet_type_id Back_type_id = 0x5d5e0187;
		constexpr static std::string_view Left_type_name = "Left";
		constexpr static rivet::rivet_type_id Left_type_id = 0x4af727d8;
		constexpr static std::string_view Right_type_name = "Right";
		constexpr static rivet::rivet_type_id Right_type_id = 0xad99b9d5; 

		explicit DirectionFilterConfig() = default;
		explicit DirectionFilterConfig([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		std::string_view DriverName {};
		uint8_t IndexCount {};
		bool Front {};
		bool Back {};
		bool Left {};
		bool Right {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<DirectionFilterConfig>;
	};
} // namespace rivet::ddl::generated

// clang-format on
