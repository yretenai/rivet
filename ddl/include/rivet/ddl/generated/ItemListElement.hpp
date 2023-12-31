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
	struct RIVET_DDL_SHARED ItemListElement : rivet::structures::rivet_ddl_base {
		constexpr static std::string_view type_name = "ItemListElement";
		constexpr static rivet::rivet_type_id type_id = 0xb593c520;

		constexpr static std::string_view Item_type_name = "Item";
		constexpr static rivet::rivet_type_id Item_type_id = 0x2f8be5ae;
		constexpr static std::string_view Quantity_type_name = "Quantity";
		constexpr static rivet::rivet_type_id Quantity_type_id = 0x65f2ab46;
		constexpr static std::string_view ContainChance_type_name = "ContainChance";
		constexpr static rivet::rivet_type_id ContainChance_type_id = 0xe992ff5c; 

		explicit ItemListElement() = default;
		explicit ItemListElement([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		std::string_view Item {};
		uint32_t Quantity {};
		float ContainChance {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<ItemListElement>;
	};
} // namespace rivet::ddl::generated

// clang-format on
