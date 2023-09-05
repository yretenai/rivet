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
	struct RIVET_DDL_SHARED AimAssistCentering : rivet::structures::rivet_ddl_base {
		constexpr const static std::string_view type_name = "AimAssistCentering";
		constexpr const static rivet::rivet_type_id type_id = 0xe95b5831;

		constexpr const static std::string_view Enable_type_name = "Enable";
		constexpr const static rivet::rivet_type_id Enable_type_id = 0xcdd88655;
		constexpr const static std::string_view StickMin_type_name = "StickMin";
		constexpr const static rivet::rivet_type_id StickMin_type_id = 0xdee2a17d;
		constexpr const static std::string_view StickMax_type_name = "StickMax";
		constexpr const static rivet::rivet_type_id StickMax_type_id = 0xe2ef9e24;
		constexpr const static std::string_view FactorMin_type_name = "FactorMin";
		constexpr const static rivet::rivet_type_id FactorMin_type_id = 0xc102c0af;
		constexpr const static std::string_view FactorMax_type_name = "FactorMax";
		constexpr const static rivet::rivet_type_id FactorMax_type_id = 0xfd0ffff6;
		constexpr const static std::string_view FactorCurve_type_name = "FactorCurve";
		constexpr const static rivet::rivet_type_id FactorCurve_type_id = 0x4685e461;
		constexpr const static std::string_view MinBoxValue_type_name = "MinBoxValue";
		constexpr const static rivet::rivet_type_id MinBoxValue_type_id = 0x2febb899;
		constexpr const static std::string_view MaxBoxValue_type_name = "MaxBoxValue";
		constexpr const static rivet::rivet_type_id MaxBoxValue_type_id = 0xe3e6c396; 

		explicit AimAssistCentering() = default;
		explicit AimAssistCentering([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		bool Enable {};
		float StickMin {};
		float StickMax {};
		float FactorMin {};
		float FactorMax {};
		float FactorCurve {};
		float MinBoxValue {};
		float MaxBoxValue {}; 

		auto
		get_type_id() const noexcept -> rivet::rivet_type_id override;

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<AimAssistCentering>;
	};
} // namespace rivet::ddl::generated

// clang-format on
