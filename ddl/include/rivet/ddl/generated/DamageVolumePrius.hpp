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

#include <rivet/ddl/generated/bitsets/TargetType.hpp>
#include <rivet/ddl/generated/enums/x6bdf4ba1.hpp>
#include <rivet/ddl/generated/bitsets/x65d7dac2.hpp>
#include <rivet/ddl/generated/enums/AllegianceRelation.hpp>
#include <rivet/ddl/generated/enums/KnockbackLevels.hpp>
#include <rivet/ddl/generated/enums/x8d7e44cf.hpp> 

namespace rivet::ddl::generated {
	struct RIVET_DDL_SHARED DamageVolumePrius : rivet::structures::rivet_ddl_base {
		constexpr static std::string_view type_name = "DamageVolumePrius";
		constexpr static rivet::rivet_type_id type_id = 0x2a0ca56;

		constexpr static std::string_view StartActive_type_name = "StartActive";
		constexpr static rivet::rivet_type_id StartActive_type_id = 0x3e035e82;
		constexpr static std::string_view StartComponentEnabled_type_name = "StartComponentEnabled";
		constexpr static rivet::rivet_type_id StartComponentEnabled_type_id = 0x2c5d7e8a;
		constexpr static std::string_view DamagePerSecond_type_name = "DamagePerSecond";
		constexpr static rivet::rivet_type_id DamagePerSecond_type_id = 0x287ed02a;
		constexpr static std::string_view DamageInterval_type_name = "DamageInterval";
		constexpr static rivet::rivet_type_id DamageInterval_type_id = 0x420d2682;
		constexpr static std::string_view IgnoreDuration_type_name = "IgnoreDuration";
		constexpr static rivet::rivet_type_id IgnoreDuration_type_id = 0x2ee45555;
		constexpr static std::string_view Type_type_name = "Type";
		constexpr static rivet::rivet_type_id Type_type_id = 0xbc4e9799;
		constexpr static std::string_view StatusAmount_type_name = "StatusAmount";
		constexpr static rivet::rivet_type_id StatusAmount_type_id = 0x37e1f098;
		constexpr static std::string_view StatusLastsForever_type_name = "StatusLastsForever";
		constexpr static rivet::rivet_type_id StatusLastsForever_type_id = 0x104df5b7;
		constexpr static std::string_view Knockback_type_name = "Knockback";
		constexpr static rivet::rivet_type_id Knockback_type_id = 0x2e553fdd;
		constexpr static std::string_view KnockbackAmount_type_name = "KnockbackAmount";
		constexpr static rivet::rivet_type_id KnockbackAmount_type_id = 0x7b1e600b;
		constexpr static std::string_view DamageFlags_type_name = "DamageFlags";
		constexpr static rivet::rivet_type_id DamageFlags_type_id = 0x93d0d934;
		constexpr static std::string_view SourceAllegiance_type_name = "SourceAllegiance";
		constexpr static rivet::rivet_type_id SourceAllegiance_type_id = 0x216d98dc;
		constexpr static std::string_view Relationship_type_name = "Relationship";
		constexpr static rivet::rivet_type_id Relationship_type_id = 0xe38a7c20;
		constexpr static std::string_view TargetTypes_type_name = "TargetTypes";
		constexpr static rivet::rivet_type_id TargetTypes_type_id = 0x85109145;
		constexpr static std::string_view DamageHeroes_type_name = "DamageHeroes";
		constexpr static rivet::rivet_type_id DamageHeroes_type_id = 0x8f161bf5;
		constexpr static std::string_view DamageBots_type_name = "DamageBots";
		constexpr static rivet::rivet_type_id DamageBots_type_id = 0x796db299;
		constexpr static std::string_view Radius_type_name = "Radius";
		constexpr static rivet::rivet_type_id Radius_type_id = 0x504203d;
		constexpr static std::string_view AlwaysUseRadius_type_name = "AlwaysUseRadius";
		constexpr static rivet::rivet_type_id AlwaysUseRadius_type_id = 0x2b3260f4;
		constexpr static std::string_view TargetableOnly_type_name = "TargetableOnly";
		constexpr static rivet::rivet_type_id TargetableOnly_type_id = 0xc779ff5c;
		constexpr static std::string_view TestBSpheresOnly_type_name = "TestBSpheresOnly";
		constexpr static rivet::rivet_type_id TestBSpheresOnly_type_id = 0x73f028d8;
		constexpr static std::string_view NoSpawnRewards_type_name = "NoSpawnRewards";
		constexpr static rivet::rivet_type_id NoSpawnRewards_type_id = 0x8c940ca0;
		constexpr static std::string_view RadialHitDir_type_name = "RadialHitDir";
		constexpr static rivet::rivet_type_id RadialHitDir_type_id = 0x7738f229;
		constexpr static std::string_view DamageString_type_name = "DamageString";
		constexpr static rivet::rivet_type_id DamageString_type_id = 0x4624269b; 

		explicit DamageVolumePrius() = default;
		explicit DamageVolumePrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		bool StartActive {};
		bool StartComponentEnabled {};
		float DamagePerSecond {};
		float DamageInterval {};
		float IgnoreDuration {};
		rivet::ddl::generated::x8d7e44cf Type {};
		float StatusAmount {};
		bool StatusLastsForever {};
		rivet::ddl::generated::KnockbackLevels Knockback {};
		float KnockbackAmount {};
		rivet::ddl::generated::x65d7dac2 DamageFlags {};
		rivet::ddl::generated::x6bdf4ba1 SourceAllegiance {};
		rivet::ddl::generated::AllegianceRelation Relationship {};
		rivet::ddl::generated::TargetType TargetTypes {};
		bool DamageHeroes {};
		bool DamageBots {};
		float Radius {};
		bool AlwaysUseRadius {};
		bool TargetableOnly {};
		bool TestBSpheresOnly {};
		bool NoSpawnRewards {};
		bool RadialHitDir {};
		std::string_view DamageString {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<DamageVolumePrius>;
	};
} // namespace rivet::ddl::generated

// clang-format on
