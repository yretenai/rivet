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

#include <rivet/ddl/generated/enums/KnockbackLevels.hpp>
#include <rivet/ddl/generated/enums/DamageTypes.hpp> 

namespace rivet::ddl::generated {
	struct RIVET_DDL_SHARED DamageEmitterPrius : rivet::structures::rivet_ddl_base {
		constexpr static std::string_view type_name = "DamageEmitterPrius";
		constexpr static rivet::rivet_type_id type_id = 0xcf51f212;

		constexpr static std::string_view DamageHash_type_name = "DamageHash";
		constexpr static rivet::rivet_type_id DamageHash_type_id = 0xd96a20dc;
		constexpr static std::string_view StartActive_type_name = "StartActive";
		constexpr static rivet::rivet_type_id StartActive_type_id = 0x3e035e82;
		constexpr static std::string_view DamagePerSecond_type_name = "DamagePerSecond";
		constexpr static rivet::rivet_type_id DamagePerSecond_type_id = 0x287ed02a;
		constexpr static std::string_view Type_type_name = "Type";
		constexpr static rivet::rivet_type_id Type_type_id = 0xbc4e9799;
		constexpr static std::string_view StatusAmount_type_name = "StatusAmount";
		constexpr static rivet::rivet_type_id StatusAmount_type_id = 0x37e1f098;
		constexpr static std::string_view Knockback_type_name = "Knockback";
		constexpr static rivet::rivet_type_id Knockback_type_id = 0x2e553fdd;
		constexpr static std::string_view KnockbackAmount_type_name = "KnockbackAmount";
		constexpr static rivet::rivet_type_id KnockbackAmount_type_id = 0x7b1e600b;
		constexpr static std::string_view Radius_type_name = "Radius";
		constexpr static rivet::rivet_type_id Radius_type_id = 0x504203d;
		constexpr static std::string_view DamageFriends_type_name = "DamageFriends";
		constexpr static rivet::rivet_type_id DamageFriends_type_id = 0x3be354f0;
		constexpr static std::string_view SingleShotDamage_type_name = "SingleShotDamage";
		constexpr static rivet::rivet_type_id SingleShotDamage_type_id = 0x549e508f;
		constexpr static std::string_view ExcludeHeroes_type_name = "ExcludeHeroes";
		constexpr static rivet::rivet_type_id ExcludeHeroes_type_id = 0xd5834e5c;
		constexpr static std::string_view ExcludeAttachments_type_name = "ExcludeAttachments";
		constexpr static rivet::rivet_type_id ExcludeAttachments_type_id = 0xeb282f5d;
		constexpr static std::string_view NoIgnore_type_name = "NoIgnore";
		constexpr static rivet::rivet_type_id NoIgnore_type_id = 0x9c5a9eeb;
		constexpr static std::string_view UseSweptSphere_type_name = "UseSweptSphere";
		constexpr static rivet::rivet_type_id UseSweptSphere_type_id = 0xee3d188c;
		constexpr static std::string_view StartLocator_type_name = "StartLocator";
		constexpr static rivet::rivet_type_id StartLocator_type_id = 0x45890f60;
		constexpr static std::string_view SweptSphereRange_type_name = "SweptSphereRange";
		constexpr static rivet::rivet_type_id SweptSphereRange_type_id = 0x8c892be6;
		constexpr static std::string_view DebugDraw_type_name = "DebugDraw";
		constexpr static rivet::rivet_type_id DebugDraw_type_id = 0x6020521b; 

		explicit DamageEmitterPrius() = default;
		explicit DamageEmitterPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		std::string_view DamageHash {};
		bool StartActive {};
		float DamagePerSecond {};
		rivet::ddl::generated::DamageTypes Type {};
		float StatusAmount {};
		rivet::ddl::generated::KnockbackLevels Knockback {};
		float KnockbackAmount {};
		float Radius {};
		bool DamageFriends {};
		bool SingleShotDamage {};
		bool ExcludeHeroes {};
		bool ExcludeAttachments {};
		bool NoIgnore {};
		bool UseSweptSphere {};
		std::string_view StartLocator {};
		float SweptSphereRange {};
		bool DebugDraw {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<DamageEmitterPrius>;
	};
} // namespace rivet::ddl::generated

// clang-format on