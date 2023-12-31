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

namespace rivet::ddl::generated {
	struct RIVET_DDL_SHARED GeyserFlowData : rivet::structures::rivet_ddl_base {
		constexpr static std::string_view type_name = "GeyserFlowData";
		constexpr static rivet::rivet_type_id type_id = 0x73a680dd;

		constexpr static std::string_view FlowVel_type_name = "FlowVel";
		constexpr static rivet::rivet_type_id FlowVel_type_id = 0xd2e39292;
		constexpr static std::string_view FlowDuration_type_name = "FlowDuration";
		constexpr static rivet::rivet_type_id FlowDuration_type_id = 0x8bdfffe6;
		constexpr static std::string_view TaperVel_type_name = "TaperVel";
		constexpr static rivet::rivet_type_id TaperVel_type_id = 0x3581c75a;
		constexpr static std::string_view TaperDuration_type_name = "TaperDuration";
		constexpr static rivet::rivet_type_id TaperDuration_type_id = 0xf405d909;
		constexpr static std::string_view PostTaperDuration_type_name = "PostTaperDuration";
		constexpr static rivet::rivet_type_id PostTaperDuration_type_id = 0xc0434ad5;
		constexpr static std::string_view ChecksPerSecond_type_name = "ChecksPerSecond";
		constexpr static rivet::rivet_type_id ChecksPerSecond_type_id = 0x8bbb0eea;
		constexpr static std::string_view Gravity_type_name = "Gravity";
		constexpr static rivet::rivet_type_id Gravity_type_id = 0x5bf7469f;
		constexpr static std::string_view Damage_type_name = "Damage";
		constexpr static rivet::rivet_type_id Damage_type_id = 0x2fb01a0b;
		constexpr static std::string_view Knockback_type_name = "Knockback";
		constexpr static rivet::rivet_type_id Knockback_type_id = 0x2e553fdd;
		constexpr static std::string_view KnockbackAmount_type_name = "KnockbackAmount";
		constexpr static rivet::rivet_type_id KnockbackAmount_type_id = 0x7b1e600b;
		constexpr static std::string_view MaterialInner_type_name = "MaterialInner";
		constexpr static rivet::rivet_type_id MaterialInner_type_id = 0x9ac4db76;
		constexpr static std::string_view RadiusInner_type_name = "RadiusInner";
		constexpr static rivet::rivet_type_id RadiusInner_type_id = 0xe92f5c40;
		constexpr static std::string_view MaterialOuter_type_name = "MaterialOuter";
		constexpr static rivet::rivet_type_id MaterialOuter_type_id = 0x832dd8ee;
		constexpr static std::string_view RadiusOuter_type_name = "RadiusOuter";
		constexpr static rivet::rivet_type_id RadiusOuter_type_id = 0xf0c65fd8; 

		explicit GeyserFlowData() = default;
		explicit GeyserFlowData([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		float FlowVel {};
		float FlowDuration {};
		float TaperVel {};
		float TaperDuration {};
		float PostTaperDuration {};
		float ChecksPerSecond {};
		float Gravity {};
		float Damage {};
		rivet::ddl::generated::KnockbackLevels Knockback {};
		float KnockbackAmount {};
		std::string_view MaterialInner {};
		float RadiusInner {};
		std::string_view MaterialOuter {};
		float RadiusOuter {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<GeyserFlowData>;
	};
} // namespace rivet::ddl::generated

// clang-format on
