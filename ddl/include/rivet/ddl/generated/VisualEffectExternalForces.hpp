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
	struct RIVET_DDL_SHARED VisualEffectExternalForces : rivet::structures::rivet_ddl_base {
		constexpr static std::string_view type_name = "VisualEffectExternalForces";
		constexpr static rivet::rivet_type_id type_id = 0xb968e1cb;

		constexpr static std::string_view ForceFieldInfluence_type_name = "ForceFieldInfluence";
		constexpr static rivet::rivet_type_id ForceFieldInfluence_type_id = 0x558c12a6;
		constexpr static std::string_view ForceFieldRadius_type_name = "ForceFieldRadius";
		constexpr static rivet::rivet_type_id ForceFieldRadius_type_id = 0xa94827d8;
		constexpr static std::string_view InheritSpeed_type_name = "InheritSpeed";
		constexpr static rivet::rivet_type_id InheritSpeed_type_id = 0xb3eb63c4;
		constexpr static std::string_view Gravity_type_name = "Gravity";
		constexpr static rivet::rivet_type_id Gravity_type_id = 0x5bf7469f;
		constexpr static std::string_view Damp_type_name = "Damp";
		constexpr static rivet::rivet_type_id Damp_type_id = 0x6cd3ba39;
		constexpr static std::string_view Wind_type_name = "Wind";
		constexpr static rivet::rivet_type_id Wind_type_id = 0x119b944e; 

		explicit VisualEffectExternalForces() = default;
		explicit VisualEffectExternalForces([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		float ForceFieldInfluence {};
		float ForceFieldRadius {};
		float InheritSpeed {};
		float Gravity {};
		float Damp {};
		float Wind {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<VisualEffectExternalForces>;
	};
} // namespace rivet::ddl::generated

// clang-format on