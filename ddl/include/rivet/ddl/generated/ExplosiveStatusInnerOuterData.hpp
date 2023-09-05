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
	struct RIVET_DDL_SHARED ExplosiveStatusInnerOuterData : rivet::structures::rivet_ddl_base {
		constexpr const static std::string_view type_name = "ExplosiveStatusInnerOuterData";
		constexpr const static rivet::rivet_type_id type_id = 0xf246b070;

		constexpr const static std::string_view InnerDamage_type_name = "InnerDamage";
		constexpr const static rivet::rivet_type_id InnerDamage_type_id = 0xd217b95b;
		constexpr const static std::string_view OuterDamage_type_name = "OuterDamage";
		constexpr const static rivet::rivet_type_id OuterDamage_type_id = 0xdc02c1e8;
		constexpr const static std::string_view InnerRadius_type_name = "InnerRadius";
		constexpr const static rivet::rivet_type_id InnerRadius_type_id = 0xf8a3836d;
		constexpr const static std::string_view OuterRadius_type_name = "OuterRadius";
		constexpr const static rivet::rivet_type_id OuterRadius_type_id = 0xf6b6fbde; 

		explicit ExplosiveStatusInnerOuterData() = default;
		explicit ExplosiveStatusInnerOuterData([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		float InnerDamage {};
		float OuterDamage {};
		float InnerRadius {};
		float OuterRadius {}; 

		auto
		get_type_id() const noexcept -> rivet::rivet_type_id override;

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<ExplosiveStatusInnerOuterData>;
	};
} // namespace rivet::ddl::generated

// clang-format on
