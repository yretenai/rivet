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
	struct RIVET_DDL_SHARED FreezeShatterData : rivet::structures::rivet_ddl_base {
		constexpr static std::string_view type_name = "FreezeShatterData";
		constexpr static rivet::rivet_type_id type_id = 0xeaa51682;

		constexpr static std::string_view ShotConfig_type_name = "ShotConfig";
		constexpr static rivet::rivet_type_id ShotConfig_type_id = 0xb171e6ae;
		constexpr static std::string_view DamageRange_type_name = "DamageRange";
		constexpr static rivet::rivet_type_id DamageRange_type_id = 0xb52c2c7;
		constexpr static std::string_view Knockback_type_name = "Knockback";
		constexpr static rivet::rivet_type_id Knockback_type_id = 0x2e553fdd;
		constexpr static std::string_view KnockbackAmount_type_name = "KnockbackAmount";
		constexpr static rivet::rivet_type_id KnockbackAmount_type_id = 0x7b1e600b; 

		explicit FreezeShatterData() = default;
		explicit FreezeShatterData([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		std::string_view ShotConfig {};
		float DamageRange {};
		rivet::ddl::generated::KnockbackLevels Knockback {};
		float KnockbackAmount {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<FreezeShatterData>;
	};
} // namespace rivet::ddl::generated

// clang-format on
