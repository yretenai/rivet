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
	struct SkinItemOverride; 

	struct RIVET_DDL_SHARED ItemLoadoutListElement : rivet::structures::rivet_ddl_base {
		constexpr const static std::string_view type_name = "ItemLoadoutListElement";
		constexpr const static rivet::rivet_type_id type_id = 0x180f64cf;

		constexpr const static std::string_view Item_type_name = "Item";
		constexpr const static rivet::rivet_type_id Item_type_id = 0x2f8be5ae;
		constexpr const static std::string_view Count_type_name = "Count";
		constexpr const static rivet::rivet_type_id Count_type_id = 0x9c8a88a3;
		constexpr const static std::string_view ItemProgression_type_name = "ItemProgression";
		constexpr const static rivet::rivet_type_id ItemProgression_type_id = 0x8e3fd75b;
		constexpr const static std::string_view AutoEquip_type_name = "AutoEquip";
		constexpr const static rivet::rivet_type_id AutoEquip_type_id = 0xdf49d3af;
		constexpr const static std::string_view EquipTarget_type_name = "EquipTarget";
		constexpr const static rivet::rivet_type_id EquipTarget_type_id = 0xb7aa52a3;
		constexpr const static std::string_view SkinItemOverrideList_type_name = "SkinItemOverrideList";
		constexpr const static rivet::rivet_type_id SkinItemOverrideList_type_id = 0xd07b8f26; 

		explicit ItemLoadoutListElement() = default;
		explicit ItemLoadoutListElement([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		std::string_view Item {};
		uint32_t Count {};
		float ItemProgression {};
		bool AutoEquip {};
		std::string_view EquipTarget {};
		std::vector<std::shared_ptr<rivet::ddl::generated::SkinItemOverride>> SkinItemOverrideList {}; 

		auto
		get_type_id() const noexcept -> rivet::rivet_type_id override;

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<ItemLoadoutListElement>;
	};
} // namespace rivet::ddl::generated

// clang-format on
