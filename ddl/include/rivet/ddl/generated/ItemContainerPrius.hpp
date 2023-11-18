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
	struct ItemListElement; 

	struct RIVET_DDL_SHARED ItemContainerPrius : rivet::structures::rivet_ddl_base {
		constexpr static std::string_view type_name = "ItemContainerPrius";
		constexpr static rivet::rivet_type_id type_id = 0x184fa2cf;

		constexpr static std::string_view Items_type_name = "Items";
		constexpr static rivet::rivet_type_id Items_type_id = 0xf84d258c;
		constexpr static std::string_view DeleteOnSalvage_type_name = "DeleteOnSalvage";
		constexpr static rivet::rivet_type_id DeleteOnSalvage_type_id = 0x10b17970;
		constexpr static std::string_view RespawnItemsTime_type_name = "RespawnItemsTime";
		constexpr static rivet::rivet_type_id RespawnItemsTime_type_id = 0x64a943c1; 

		explicit ItemContainerPrius() = default;
		explicit ItemContainerPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		std::vector<std::shared_ptr<rivet::ddl::generated::ItemListElement>> Items {};
		bool DeleteOnSalvage {};
		float RespawnItemsTime {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<ItemContainerPrius>;
	};
} // namespace rivet::ddl::generated

// clang-format on
