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
	struct RIVET_DDL_SHARED ShieldSectionData : rivet::structures::rivet_ddl_base {
		constexpr static std::string_view type_name = "ShieldSectionData";
		constexpr static rivet::rivet_type_id type_id = 0x8f67c90;

		constexpr static std::string_view DamageJoint_type_name = "DamageJoint";
		constexpr static rivet::rivet_type_id DamageJoint_type_id = 0x520e489;
		constexpr static std::string_view Locator_type_name = "Locator";
		constexpr static rivet::rivet_type_id Locator_type_id = 0x7bac1d57;
		constexpr static std::string_view UndamagedLook_type_name = "UndamagedLook";
		constexpr static rivet::rivet_type_id UndamagedLook_type_id = 0xe926019b;
		constexpr static std::string_view DamagedLook_type_name = "DamagedLook";
		constexpr static rivet::rivet_type_id DamagedLook_type_id = 0x59c8353a;
		constexpr static std::string_view UndamagedLookV3_type_name = "UndamagedLookV3";
		constexpr static rivet::rivet_type_id UndamagedLookV3_type_id = 0xb68311a5;
		constexpr static std::string_view DamagedLookV3_type_name = "DamagedLookV3";
		constexpr static rivet::rivet_type_id DamagedLookV3_type_id = 0x202bd856; 

		explicit ShieldSectionData() = default;
		explicit ShieldSectionData([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		std::string_view DamageJoint {};
		std::string_view Locator {};
		std::string_view UndamagedLook {};
		std::string_view DamagedLook {};
		std::string_view UndamagedLookV3 {};
		std::string_view DamagedLookV3 {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<ShieldSectionData>;
	};
} // namespace rivet::ddl::generated

// clang-format on
