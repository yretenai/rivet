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
	struct HeroReactLevelData; 

	struct RIVET_DDL_SHARED HeroReactConfig : rivet::structures::rivet_ddl_base {
		constexpr static std::string_view type_name = "HeroReactConfig";
		constexpr static rivet::rivet_type_id type_id = 0xa93c6743;

		constexpr static std::string_view AlwaysReactToMelee_type_name = "AlwaysReactToMelee";
		constexpr static rivet::rivet_type_id AlwaysReactToMelee_type_id = 0xd740c899;
		constexpr static std::string_view AlwaysReactToExplosions_type_name = "AlwaysReactToExplosions";
		constexpr static rivet::rivet_type_id AlwaysReactToExplosions_type_id = 0x9e632b7;
		constexpr static std::string_view TwitchData_type_name = "TwitchData";
		constexpr static rivet::rivet_type_id TwitchData_type_id = 0x8ff83020;
		constexpr static std::string_view KnockbackData_type_name = "KnockbackData";
		constexpr static rivet::rivet_type_id KnockbackData_type_id = 0xcc96e476;
		constexpr static std::string_view KnockdownData_type_name = "KnockdownData";
		constexpr static rivet::rivet_type_id KnockdownData_type_id = 0xa615951;
		constexpr static std::string_view InvulnerabilityPeriod_type_name = "InvulnerabilityPeriod";
		constexpr static rivet::rivet_type_id InvulnerabilityPeriod_type_id = 0x5f6c90ec; 

		explicit HeroReactConfig() = default;
		explicit HeroReactConfig([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		bool AlwaysReactToMelee {};
		bool AlwaysReactToExplosions {};
		std::shared_ptr<rivet::ddl::generated::HeroReactLevelData> TwitchData {};
		std::shared_ptr<rivet::ddl::generated::HeroReactLevelData> KnockbackData {};
		std::shared_ptr<rivet::ddl::generated::HeroReactLevelData> KnockdownData {};
		float InvulnerabilityPeriod {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<HeroReactConfig>;
	};
} // namespace rivet::ddl::generated

// clang-format on
