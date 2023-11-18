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
	struct RIVET_DDL_SHARED ShieldPrius : rivet::structures::rivet_ddl_base {
		constexpr static std::string_view type_name = "ShieldPrius";
		constexpr static rivet::rivet_type_id type_id = 0xd17498fa;

		constexpr static std::string_view DamagePassthroughPercent_type_name = "DamagePassthroughPercent";
		constexpr static rivet::rivet_type_id DamagePassthroughPercent_type_id = 0x9c8550c9;
		constexpr static std::string_view MaxAngle_type_name = "MaxAngle";
		constexpr static rivet::rivet_type_id MaxAngle_type_id = 0x191f829e; 

		explicit ShieldPrius() = default;
		explicit ShieldPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		float DamagePassthroughPercent {};
		float MaxAngle {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<ShieldPrius>;
	};
} // namespace rivet::ddl::generated

// clang-format on
