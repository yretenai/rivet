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
	struct WeaponUpgradeListItem; 

	struct RIVET_DDL_SHARED WeaponLevelDataListItem : rivet::structures::rivet_ddl_base {
		constexpr static std::string_view type_name = "WeaponLevelDataListItem";
		constexpr static rivet::rivet_type_id type_id = 0x89e3c4e9;

		constexpr static std::string_view XPRequired_type_name = "XPRequired";
		constexpr static rivet::rivet_type_id XPRequired_type_id = 0xd3bfaa63;
		constexpr static std::string_view UpgradeList_type_name = "UpgradeList";
		constexpr static rivet::rivet_type_id UpgradeList_type_id = 0x63d89b84; 

		explicit WeaponLevelDataListItem() = default;
		explicit WeaponLevelDataListItem([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		uint32_t XPRequired {};
		std::vector<std::shared_ptr<rivet::ddl::generated::WeaponUpgradeListItem>> UpgradeList {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<WeaponLevelDataListItem>;
	};
} // namespace rivet::ddl::generated

// clang-format on
