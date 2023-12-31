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
	struct RIVET_DDL_SHARED RidableJumpData : rivet::structures::rivet_ddl_base {
		constexpr static std::string_view type_name = "RidableJumpData";
		constexpr static rivet::rivet_type_id type_id = 0x977309de;

		constexpr static std::string_view OverrideHeight_type_name = "OverrideHeight";
		constexpr static rivet::rivet_type_id OverrideHeight_type_id = 0x99740e0c;
		constexpr static std::string_view MinJumpSpeed_type_name = "MinJumpSpeed";
		constexpr static rivet::rivet_type_id MinJumpSpeed_type_id = 0xac9b1f11;
		constexpr static std::string_view MaxJumpSpeed_type_name = "MaxJumpSpeed";
		constexpr static rivet::rivet_type_id MaxJumpSpeed_type_id = 0x3ce80ffb;
		constexpr static std::string_view MinJumpDist_type_name = "MinJumpDist";
		constexpr static rivet::rivet_type_id MinJumpDist_type_id = 0x8ff733b3;
		constexpr static std::string_view MaxJumpDist_type_name = "MaxJumpDist";
		constexpr static rivet::rivet_type_id MaxJumpDist_type_id = 0x43fa48bc; 

		explicit RidableJumpData() = default;
		explicit RidableJumpData([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		float OverrideHeight {};
		float MinJumpSpeed {};
		float MaxJumpSpeed {};
		float MinJumpDist {};
		float MaxJumpDist {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<RidableJumpData>;
	};
} // namespace rivet::ddl::generated

// clang-format on
