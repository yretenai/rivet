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

#include <rivet/ddl/generated/enums/xca7a7360.hpp>
#include <rivet/ddl/generated/enums/xa7ea7084.hpp> 

namespace rivet::ddl::generated {
	struct DDLVector3;
	struct CommonLootData; 

	struct RIVET_DDL_SHARED BotLootDropPrius : rivet::structures::rivet_ddl_base {
		constexpr static std::string_view type_name = "BotLootDropPrius";
		constexpr static rivet::rivet_type_id type_id = 0x89e83109;

		constexpr static std::string_view Enabled_type_name = "Enabled";
		constexpr static rivet::rivet_type_id Enabled_type_id = 0x5113d8bc;
		constexpr static std::string_view DropLootForKillerType_type_name = "DropLootForKillerType";
		constexpr static rivet::rivet_type_id DropLootForKillerType_type_id = 0xbda9e40e;
		constexpr static std::string_view LootData_type_name = "LootData";
		constexpr static rivet::rivet_type_id LootData_type_id = 0xbcec9320;
		constexpr static std::string_view TypeOfOffset_type_name = "TypeOfOffset";
		constexpr static rivet::rivet_type_id TypeOfOffset_type_id = 0xd7aaeba;
		constexpr static std::string_view Offset_type_name = "Offset";
		constexpr static rivet::rivet_type_id Offset_type_id = 0x677284b7;
		constexpr static std::string_view MaxNumSpawns_type_name = "MaxNumSpawns";
		constexpr static rivet::rivet_type_id MaxNumSpawns_type_id = 0xf17d6753;
		constexpr static std::string_view LootBlossom_type_name = "LootBlossom";
		constexpr static rivet::rivet_type_id LootBlossom_type_id = 0x7e229231;
		constexpr static std::string_view MinLootSpeed_type_name = "MinLootSpeed";
		constexpr static rivet::rivet_type_id MinLootSpeed_type_id = 0x3ef41847;
		constexpr static std::string_view MaxLootSpeed_type_name = "MaxLootSpeed";
		constexpr static rivet::rivet_type_id MaxLootSpeed_type_id = 0xae8708ad;
		constexpr static std::string_view NoPickupTime_type_name = "NoPickupTime";
		constexpr static rivet::rivet_type_id NoPickupTime_type_id = 0x68cab92d; 

		explicit BotLootDropPrius() = default;
		explicit BotLootDropPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		bool Enabled {};
		rivet::ddl::generated::xa7ea7084 DropLootForKillerType {};
		std::shared_ptr<rivet::ddl::generated::CommonLootData> LootData {};
		rivet::ddl::generated::xca7a7360 TypeOfOffset {};
		std::shared_ptr<rivet::ddl::generated::DDLVector3> Offset {};
		int32_t MaxNumSpawns {};
		bool LootBlossom {};
		float MinLootSpeed {};
		float MaxLootSpeed {};
		float NoPickupTime {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<BotLootDropPrius>;
	};
} // namespace rivet::ddl::generated

// clang-format on
