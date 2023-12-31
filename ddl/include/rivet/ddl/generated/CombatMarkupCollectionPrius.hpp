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
	struct RIVET_DDL_SHARED CombatMarkupCollectionPrius : rivet::structures::rivet_ddl_base {
		constexpr static std::string_view type_name = "CombatMarkupCollectionPrius";
		constexpr static rivet::rivet_type_id type_id = 0xbab0a3f1;

		constexpr static std::string_view CombatAreaList_type_name = "CombatAreaList";
		constexpr static rivet::rivet_type_id CombatAreaList_type_id = 0xd0e6d92d;
		constexpr static std::string_view DefensiveAreaList_type_name = "DefensiveAreaList";
		constexpr static rivet::rivet_type_id DefensiveAreaList_type_id = 0x6d69d342;
		constexpr static std::string_view IdleAreaList_type_name = "IdleAreaList";
		constexpr static rivet::rivet_type_id IdleAreaList_type_id = 0x97972686;
		constexpr static std::string_view ExtraActorGroups_type_name = "ExtraActorGroups";
		constexpr static rivet::rivet_type_id ExtraActorGroups_type_id = 0x98426ac; 

		explicit CombatMarkupCollectionPrius() = default;
		explicit CombatMarkupCollectionPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		std::vector<uint64_t> CombatAreaList {};
		std::vector<uint64_t> DefensiveAreaList {};
		std::vector<uint64_t> IdleAreaList {};
		std::vector<uint64_t> ExtraActorGroups {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<CombatMarkupCollectionPrius>;
	};
} // namespace rivet::ddl::generated

// clang-format on
