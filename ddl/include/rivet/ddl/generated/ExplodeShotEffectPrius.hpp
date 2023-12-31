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

#include <rivet/ddl/generated/enums/xe1cdcd87.hpp>
#include <rivet/ddl/generated/bitsets/x65d7dac2.hpp>
#include <rivet/ddl/generated/enums/DamageTypes.hpp>
#include <rivet/ddl/generated/ScriptedShotEffectBasePrius.hpp> 

namespace rivet::ddl::generated {
	struct DDLVector3;
	struct DamageModifierExplosionPrius; 

	struct RIVET_DDL_SHARED ExplodeShotEffectPrius : ScriptedShotEffectBasePrius {
		constexpr static std::string_view type_name = "ExplodeShotEffectPrius";
		constexpr static rivet::rivet_type_id type_id = 0x7c1bd6e9;

		constexpr static std::string_view ExplodeData_type_name = "ExplodeData";
		constexpr static rivet::rivet_type_id ExplodeData_type_id = 0xc66d633c;
		constexpr static std::string_view DamageType_type_name = "DamageType";
		constexpr static rivet::rivet_type_id DamageType_type_id = 0x840c154d;
		constexpr static std::string_view DamageFlags_type_name = "DamageFlags";
		constexpr static rivet::rivet_type_id DamageFlags_type_id = 0x93d0d934;
		constexpr static std::string_view DamageOffset_type_name = "DamageOffset";
		constexpr static rivet::rivet_type_id DamageOffset_type_id = 0x81905ee2;
		constexpr static std::string_view OffsetMode_type_name = "OffsetMode";
		constexpr static rivet::rivet_type_id OffsetMode_type_id = 0xbefa1d79;
		constexpr static std::string_view Impulse_type_name = "Impulse";
		constexpr static rivet::rivet_type_id Impulse_type_id = 0xebf69433;
		constexpr static std::string_view TriggerEvent_type_name = "TriggerEvent";
		constexpr static rivet::rivet_type_id TriggerEvent_type_id = 0x55aed815; 

		explicit ExplodeShotEffectPrius() = default;
		explicit ExplodeShotEffectPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		std::shared_ptr<rivet::ddl::generated::DamageModifierExplosionPrius> ExplodeData {};
		rivet::ddl::generated::DamageTypes DamageType {};
		rivet::ddl::generated::x65d7dac2 DamageFlags {};
		std::shared_ptr<rivet::ddl::generated::DDLVector3> DamageOffset {};
		rivet::ddl::generated::xe1cdcd87 OffsetMode {};
		float Impulse {};
		bool TriggerEvent {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<ExplodeShotEffectPrius>;
	};
} // namespace rivet::ddl::generated

// clang-format on
