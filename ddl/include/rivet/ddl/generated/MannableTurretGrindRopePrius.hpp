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
	struct RIVET_DDL_SHARED MannableTurretGrindRopePrius : rivet::structures::rivet_ddl_base {
		constexpr static std::string_view type_name = "MannableTurretGrindRopePrius";
		constexpr static rivet::rivet_type_id type_id = 0x56d94a6c;

		constexpr static std::string_view Range_type_name = "Range";
		constexpr static rivet::rivet_type_id Range_type_id = 0x8ad49688;
		constexpr static std::string_view Damage_type_name = "Damage";
		constexpr static rivet::rivet_type_id Damage_type_id = 0x2fb01a0b; 

		explicit MannableTurretGrindRopePrius() = default;
		explicit MannableTurretGrindRopePrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		float Range {};
		float Damage {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<MannableTurretGrindRopePrius>;
	};
} // namespace rivet::ddl::generated

// clang-format on
