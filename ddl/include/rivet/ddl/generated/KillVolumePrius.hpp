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

#include <rivet/ddl/generated/enums/AllegianceRelation.hpp>
#include <rivet/ddl/generated/enums/x6bdf4ba1.hpp> 

namespace rivet::ddl::generated {
	struct RIVET_DDL_SHARED KillVolumePrius : rivet::structures::rivet_ddl_base {
		constexpr static std::string_view type_name = "KillVolumePrius";
		constexpr static rivet::rivet_type_id type_id = 0xaa57ee66;

		constexpr static std::string_view KillHeroes_type_name = "KillHeroes";
		constexpr static rivet::rivet_type_id KillHeroes_type_id = 0xcbcb4600;
		constexpr static std::string_view KillBots_type_name = "KillBots";
		constexpr static rivet::rivet_type_id KillBots_type_id = 0xdfb10270;
		constexpr static std::string_view FallToDeath_type_name = "FallToDeath";
		constexpr static rivet::rivet_type_id FallToDeath_type_id = 0x9390695a;
		constexpr static std::string_view CreditLastDamager_type_name = "CreditLastDamager";
		constexpr static rivet::rivet_type_id CreditLastDamager_type_id = 0xcb1da7a8;
		constexpr static std::string_view MaxCreditTime_type_name = "MaxCreditTime";
		constexpr static rivet::rivet_type_id MaxCreditTime_type_id = 0xfa5ecc5;
		constexpr static std::string_view SourceAllegiance_type_name = "SourceAllegiance";
		constexpr static rivet::rivet_type_id SourceAllegiance_type_id = 0x216d98dc;
		constexpr static std::string_view Relationship_type_name = "Relationship";
		constexpr static rivet::rivet_type_id Relationship_type_id = 0xe38a7c20; 

		explicit KillVolumePrius() = default;
		explicit KillVolumePrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		bool KillHeroes {};
		bool KillBots {};
		bool FallToDeath {};
		bool CreditLastDamager {};
		float MaxCreditTime {};
		rivet::ddl::generated::x6bdf4ba1 SourceAllegiance {};
		rivet::ddl::generated::AllegianceRelation Relationship {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<KillVolumePrius>;
	};
} // namespace rivet::ddl::generated

// clang-format on
