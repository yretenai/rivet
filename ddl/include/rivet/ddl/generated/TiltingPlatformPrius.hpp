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
	struct RIVET_DDL_SHARED TiltingPlatformPrius : rivet::structures::rivet_ddl_base {
		constexpr static std::string_view type_name = "TiltingPlatformPrius";
		constexpr static rivet::rivet_type_id type_id = 0xd424cef3;

		constexpr static std::string_view ResetRotAccel_type_name = "ResetRotAccel";
		constexpr static rivet::rivet_type_id ResetRotAccel_type_id = 0x7447643;
		constexpr static std::string_view MaxRotAccel_type_name = "MaxRotAccel";
		constexpr static rivet::rivet_type_id MaxRotAccel_type_id = 0xa8145c17;
		constexpr static std::string_view MaxAngle_type_name = "MaxAngle";
		constexpr static rivet::rivet_type_id MaxAngle_type_id = 0x191f829e;
		constexpr static std::string_view PlatformRadius_type_name = "PlatformRadius";
		constexpr static rivet::rivet_type_id PlatformRadius_type_id = 0xd6ec12d0;
		constexpr static std::string_view MaxRotSpeed_type_name = "MaxRotSpeed";
		constexpr static rivet::rivet_type_id MaxRotSpeed_type_id = 0xface9404; 

		explicit TiltingPlatformPrius() = default;
		explicit TiltingPlatformPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		float ResetRotAccel {};
		float MaxRotAccel {};
		float MaxAngle {};
		float PlatformRadius {};
		float MaxRotSpeed {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<TiltingPlatformPrius>;
	};
} // namespace rivet::ddl::generated

// clang-format on
