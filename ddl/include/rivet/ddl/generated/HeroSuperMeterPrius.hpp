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
	struct HeroSuperMeterData;
	struct HeroSuperMeterBuildUpData;
	struct HeroSuperMeterDebugData; 

	struct RIVET_DDL_SHARED HeroSuperMeterPrius : rivet::structures::rivet_ddl_base {
		constexpr const static std::string_view type_name = "HeroSuperMeterPrius";
		constexpr const static rivet::rivet_type_id type_id = 0x998091ad;

		constexpr const static std::string_view MeterData_type_name = "MeterData";
		constexpr const static rivet::rivet_type_id MeterData_type_id = 0xbe5a19b1;
		constexpr const static std::string_view BuildUpData_type_name = "BuildUpData";
		constexpr const static rivet::rivet_type_id BuildUpData_type_id = 0x7fea9125;
		constexpr const static std::string_view DebugData_type_name = "DebugData";
		constexpr const static rivet::rivet_type_id DebugData_type_id = 0xbd211c77; 

		explicit HeroSuperMeterPrius() = default;
		explicit HeroSuperMeterPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		std::shared_ptr<rivet::ddl::generated::HeroSuperMeterData> MeterData {};
		std::shared_ptr<rivet::ddl::generated::HeroSuperMeterBuildUpData> BuildUpData {};
		std::shared_ptr<rivet::ddl::generated::HeroSuperMeterDebugData> DebugData {}; 

		auto
		get_type_id() const noexcept -> rivet::rivet_type_id override;

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<HeroSuperMeterPrius>;
	};
} // namespace rivet::ddl::generated

// clang-format on
