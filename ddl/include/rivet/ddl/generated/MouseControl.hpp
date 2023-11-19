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
	struct RIVET_DDL_SHARED MouseControl : rivet::structures::rivet_ddl_base {
		constexpr static std::string_view type_name = "MouseControl";
		constexpr static rivet::rivet_type_id type_id = 0x33c5244d;

		constexpr static std::string_view InvertX_type_name = "InvertX";
		constexpr static rivet::rivet_type_id InvertX_type_id = 0xb3aa100e;
		constexpr static std::string_view InvertY_type_name = "InvertY";
		constexpr static rivet::rivet_type_id InvertY_type_id = 0xc4ad2098;
		constexpr static std::string_view SensitivityFactorX_type_name = "SensitivityFactorX";
		constexpr static rivet::rivet_type_id SensitivityFactorX_type_id = 0x40962efe;
		constexpr static std::string_view SensitivityFactorY_type_name = "SensitivityFactorY";
		constexpr static rivet::rivet_type_id SensitivityFactorY_type_id = 0x37911e68; 

		explicit MouseControl() = default;
		explicit MouseControl([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		bool InvertX {};
		bool InvertY {};
		float SensitivityFactorX {};
		float SensitivityFactorY {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<MouseControl>;
	};
} // namespace rivet::ddl::generated

// clang-format on