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
	struct RIVET_DDL_SHARED ColorGradeHueSatOpDef : rivet::structures::rivet_ddl_base {
		constexpr static std::string_view type_name = "ColorGradeHueSatOpDef";
		constexpr static rivet::rivet_type_id type_id = 0xdd5489a2;

		constexpr static std::string_view Id_type_name = "Id";
		constexpr static rivet::rivet_type_id Id_type_id = 0x8a514a8d;
		constexpr static std::string_view Name_type_name = "Name";
		constexpr static rivet::rivet_type_id Name_type_id = 0x6eb3beb6;
		constexpr static std::string_view Weight_type_name = "Weight";
		constexpr static rivet::rivet_type_id Weight_type_id = 0x39b51b26;
		constexpr static std::string_view Enabled_type_name = "Enabled";
		constexpr static rivet::rivet_type_id Enabled_type_id = 0x5113d8bc;
		constexpr static std::string_view HueInc_type_name = "HueInc";
		constexpr static rivet::rivet_type_id HueInc_type_id = 0x659caf9;
		constexpr static std::string_view SaturationInc_type_name = "SaturationInc";
		constexpr static rivet::rivet_type_id SaturationInc_type_id = 0xbf82ba63;
		constexpr static std::string_view LightnessInc_type_name = "LightnessInc";
		constexpr static rivet::rivet_type_id LightnessInc_type_id = 0x56c628bc; 

		explicit ColorGradeHueSatOpDef() = default;
		explicit ColorGradeHueSatOpDef([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		uint64_t Id {};
		std::string_view Name {};
		float Weight {};
		bool Enabled {};
		float HueInc {};
		float SaturationInc {};
		float LightnessInc {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<ColorGradeHueSatOpDef>;
	};
} // namespace rivet::ddl::generated

// clang-format on
