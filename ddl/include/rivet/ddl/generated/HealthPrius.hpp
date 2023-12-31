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

#include <rivet/ddl/generated/bitsets/x7b898c1.hpp> 

namespace rivet::ddl::generated {
	struct RIVET_DDL_SHARED HealthPrius : rivet::structures::rivet_ddl_base {
		constexpr static std::string_view type_name = "HealthPrius";
		constexpr static rivet::rivet_type_id type_id = 0x2e39fb24;

		constexpr static std::string_view MaxHitPoints_type_name = "MaxHitPoints";
		constexpr static rivet::rivet_type_id MaxHitPoints_type_id = 0x597fdb96;
		constexpr static std::string_view InjuredHitPoints_type_name = "InjuredHitPoints";
		constexpr static rivet::rivet_type_id InjuredHitPoints_type_id = 0xd16b16f;
		constexpr static std::string_view Flags_type_name = "Flags";
		constexpr static rivet::rivet_type_id Flags_type_id = 0x12568d7b; 

		explicit HealthPrius() = default;
		explicit HealthPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		float MaxHitPoints {};
		float InjuredHitPoints {};
		rivet::ddl::generated::x7b898c1 Flags {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<HealthPrius>;
	};
} // namespace rivet::ddl::generated

// clang-format on
