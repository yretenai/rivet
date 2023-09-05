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

#include <rivet/ddl/generated/WeaponGamePrius.hpp>
#include <rivet/ddl/generated/bitsets/x8b303a8b.hpp> 

namespace rivet::ddl::generated {
	struct KamehamehaChargeLevel; 

	struct RIVET_DDL_SHARED WeaponKamehamehaPrius : WeaponGamePrius {
		constexpr const static std::string_view type_name = "WeaponKamehamehaPrius";
		constexpr const static rivet::rivet_type_id type_id = 0x753cf93;

		constexpr const static std::string_view ChargeLevels_type_name = "ChargeLevels";
		constexpr const static rivet::rivet_type_id ChargeLevels_type_id = 0xc714b91b;
		constexpr const static std::string_view FiringAllowedKnockbacks_type_name = "FiringAllowedKnockbacks";
		constexpr const static rivet::rivet_type_id FiringAllowedKnockbacks_type_id = 0xe37d083a; 

		explicit WeaponKamehamehaPrius() = default;
		explicit WeaponKamehamehaPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		std::vector<std::shared_ptr<rivet::ddl::generated::KamehamehaChargeLevel>> ChargeLevels {};
		rivet::ddl::generated::x8b303a8b FiringAllowedKnockbacks {}; 

		auto
		get_type_id() const noexcept -> rivet::rivet_type_id override;

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<WeaponKamehamehaPrius>;
	};
} // namespace rivet::ddl::generated

// clang-format on
