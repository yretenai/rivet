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
	struct RIVET_DDL_SHARED MoverBumpBreakerPrius : rivet::structures::rivet_ddl_base {
		constexpr static std::string_view type_name = "MoverBumpBreakerPrius";
		constexpr static rivet::rivet_type_id type_id = 0x3a797a92;

		constexpr static std::string_view BreakFromBots_type_name = "BreakFromBots";
		constexpr static rivet::rivet_type_id BreakFromBots_type_id = 0xab8f1ae0;
		constexpr static std::string_view BreakFromHeroes_type_name = "BreakFromHeroes";
		constexpr static rivet::rivet_type_id BreakFromHeroes_type_id = 0xa9e62072;
		constexpr static std::string_view BreakFromStanding_type_name = "BreakFromStanding";
		constexpr static rivet::rivet_type_id BreakFromStanding_type_id = 0xff9882c9; 

		explicit MoverBumpBreakerPrius() = default;
		explicit MoverBumpBreakerPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		bool BreakFromBots {};
		bool BreakFromHeroes {};
		bool BreakFromStanding {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<MoverBumpBreakerPrius>;
	};
} // namespace rivet::ddl::generated

// clang-format on
