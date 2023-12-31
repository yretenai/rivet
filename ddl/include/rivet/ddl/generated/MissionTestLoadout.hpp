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
	struct RIVET_DDL_SHARED MissionTestLoadout : rivet::structures::rivet_ddl_base {
		constexpr static std::string_view type_name = "MissionTestLoadout";
		constexpr static rivet::rivet_type_id type_id = 0xd8a9ea6a;

		constexpr static std::string_view Mission_type_name = "Mission";
		constexpr static rivet::rivet_type_id Mission_type_id = 0x918d9104;
		constexpr static std::string_view Loadout_type_name = "Loadout";
		constexpr static rivet::rivet_type_id Loadout_type_id = 0x7f8fad7a; 

		explicit MissionTestLoadout() = default;
		explicit MissionTestLoadout([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		std::string_view Mission {};
		std::string_view Loadout {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<MissionTestLoadout>;
	};
} // namespace rivet::ddl::generated

// clang-format on
