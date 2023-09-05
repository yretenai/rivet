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
	struct HeroSuperMeterDecayData; 

	struct RIVET_DDL_SHARED HeroSuperMeterBuildUpData : rivet::structures::rivet_ddl_base {
		constexpr const static std::string_view type_name = "HeroSuperMeterBuildUpData";
		constexpr const static rivet::rivet_type_id type_id = 0xaa02d2d;

		constexpr const static std::string_view PerDamageRate_type_name = "PerDamageRate";
		constexpr const static rivet::rivet_type_id PerDamageRate_type_id = 0x3c99607b;
		constexpr const static std::string_view CanAccrueWhileUsing_type_name = "CanAccrueWhileUsing";
		constexpr const static rivet::rivet_type_id CanAccrueWhileUsing_type_id = 0x5af3ac07;
		constexpr const static std::string_view InCombat_type_name = "InCombat";
		constexpr const static rivet::rivet_type_id InCombat_type_id = 0xb031a93c;
		constexpr const static std::string_view OutOfCombat_type_name = "OutOfCombat";
		constexpr const static rivet::rivet_type_id OutOfCombat_type_id = 0xbbbcb05f; 

		explicit HeroSuperMeterBuildUpData() = default;
		explicit HeroSuperMeterBuildUpData([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		float PerDamageRate {};
		bool CanAccrueWhileUsing {};
		std::shared_ptr<rivet::ddl::generated::HeroSuperMeterDecayData> InCombat {};
		std::shared_ptr<rivet::ddl::generated::HeroSuperMeterDecayData> OutOfCombat {}; 

		auto
		get_type_id() const noexcept -> rivet::rivet_type_id override;

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<HeroSuperMeterBuildUpData>;
	};
} // namespace rivet::ddl::generated

// clang-format on
