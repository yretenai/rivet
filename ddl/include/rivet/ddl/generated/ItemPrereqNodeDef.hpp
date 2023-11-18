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

#include <rivet/ddl/generated/PrereqNodeBaseDef.hpp> 

namespace rivet::ddl::generated {
	struct RIVET_DDL_SHARED ItemPrereqNodeDef : PrereqNodeBaseDef {
		constexpr static std::string_view type_name = "ItemPrereqNodeDef";
		constexpr static rivet::rivet_type_id type_id = 0xf18cf588;

		constexpr static std::string_view RequiredItemConfig_type_name = "RequiredItemConfig";
		constexpr static rivet::rivet_type_id RequiredItemConfig_type_id = 0xbfc49322;
		constexpr static std::string_view RequiredItemCount_type_name = "RequiredItemCount";
		constexpr static rivet::rivet_type_id RequiredItemCount_type_id = 0xaf5e9e14; 

		explicit ItemPrereqNodeDef() = default;
		explicit ItemPrereqNodeDef([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		std::string_view RequiredItemConfig {};
		uint32_t RequiredItemCount {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<ItemPrereqNodeDef>;
	};
} // namespace rivet::ddl::generated

// clang-format on
