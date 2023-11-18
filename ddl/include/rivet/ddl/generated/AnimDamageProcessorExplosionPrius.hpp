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

#include <rivet/ddl/generated/enums/x8d7e44cf.hpp>
#include <rivet/ddl/generated/bitsets/x65d7dac2.hpp>
#include <rivet/ddl/generated/AnimDamageAttackStyleBase.hpp> 

namespace rivet::ddl::generated {
	struct DamageModifierExplosionPrius; 

	struct RIVET_DDL_SHARED AnimDamageProcessorExplosionPrius : AnimDamageAttackStyleBase {
		constexpr static std::string_view type_name = "AnimDamageProcessorExplosionPrius";
		constexpr static rivet::rivet_type_id type_id = 0x59f66d47;

		constexpr static std::string_view DamageType_type_name = "DamageType";
		constexpr static rivet::rivet_type_id DamageType_type_id = 0x840c154d;
		constexpr static std::string_view DamageFlags_type_name = "DamageFlags";
		constexpr static rivet::rivet_type_id DamageFlags_type_id = 0x93d0d934;
		constexpr static std::string_view DamageJoint_type_name = "DamageJoint";
		constexpr static rivet::rivet_type_id DamageJoint_type_id = 0x520e489;
		constexpr static std::string_view ExplosionData_type_name = "ExplosionData";
		constexpr static rivet::rivet_type_id ExplosionData_type_id = 0x7860aa8f;
		constexpr static std::string_view UseLineOfSight_type_name = "UseLineOfSight";
		constexpr static rivet::rivet_type_id UseLineOfSight_type_id = 0x454d6308;
		constexpr static std::string_view Duration_type_name = "Duration";
		constexpr static rivet::rivet_type_id Duration_type_id = 0x7c5e3db0; 

		explicit AnimDamageProcessorExplosionPrius() = default;
		explicit AnimDamageProcessorExplosionPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		rivet::ddl::generated::x8d7e44cf DamageType {};
		rivet::ddl::generated::x65d7dac2 DamageFlags {};
		std::string_view DamageJoint {};
		std::shared_ptr<rivet::ddl::generated::DamageModifierExplosionPrius> ExplosionData {};
		bool UseLineOfSight {};
		float Duration {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<AnimDamageProcessorExplosionPrius>;
	};
} // namespace rivet::ddl::generated

// clang-format on
