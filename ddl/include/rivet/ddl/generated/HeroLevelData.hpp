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
	struct RIVET_DDL_SHARED HeroLevelData : rivet::structures::rivet_ddl_base {
		constexpr const static std::string_view type_name = "HeroLevelData";
		constexpr const static rivet::rivet_type_id type_id = 0x55c53eca;

		constexpr const static std::string_view XPForLevel_type_name = "XPForLevel";
		constexpr const static rivet::rivet_type_id XPForLevel_type_id = 0xe69ffdf3;
		constexpr const static std::string_view Health_type_name = "Health";
		constexpr const static rivet::rivet_type_id Health_type_id = 0xf0a26d74; 

		explicit HeroLevelData() = default;
		explicit HeroLevelData([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		uint32_t XPForLevel {};
		float Health {}; 

		auto
		get_type_id() const noexcept -> rivet::rivet_type_id override;

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<HeroLevelData>;
	};
} // namespace rivet::ddl::generated

// clang-format on
