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
	struct RIVET_DDL_SHARED PreDecideLootEntry : rivet::structures::rivet_ddl_base {
		constexpr static std::string_view type_name = "PreDecideLootEntry";
		constexpr static rivet::rivet_type_id type_id = 0x94b5bb66;

		constexpr static std::string_view LootActor_type_name = "LootActor";
		constexpr static rivet::rivet_type_id LootActor_type_id = 0x79b3b63e;
		constexpr static std::string_view PickChance_type_name = "PickChance";
		constexpr static rivet::rivet_type_id PickChance_type_id = 0x7bb5a4de;
		constexpr static std::string_view ChangeMaterialConst_type_name = "ChangeMaterialConst";
		constexpr static rivet::rivet_type_id ChangeMaterialConst_type_id = 0x57b45b9f;
		constexpr static std::string_view MaterialConstName_type_name = "MaterialConstName";
		constexpr static rivet::rivet_type_id MaterialConstName_type_id = 0xacdadd83;
		constexpr static std::string_view MaterialConstValue_type_name = "MaterialConstValue";
		constexpr static rivet::rivet_type_id MaterialConstValue_type_id = 0x525539b5;
		constexpr static std::string_view LootIdNum_type_name = "LootIdNum";
		constexpr static rivet::rivet_type_id LootIdNum_type_id = 0xc0cd522e; 

		explicit PreDecideLootEntry() = default;
		explicit PreDecideLootEntry([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		std::string_view LootActor {};
		float PickChance {};
		bool ChangeMaterialConst {};
		std::string_view MaterialConstName {};
		float MaterialConstValue {};
		uint8_t LootIdNum {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<PreDecideLootEntry>;
	};
} // namespace rivet::ddl::generated

// clang-format on
