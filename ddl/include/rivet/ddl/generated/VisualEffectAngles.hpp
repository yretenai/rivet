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
	struct RIVET_DDL_SHARED VisualEffectAngles : rivet::structures::rivet_ddl_base {
		constexpr static std::string_view type_name = "VisualEffectAngles";
		constexpr static rivet::rivet_type_id type_id = 0x1cadd810;

		constexpr static std::string_view Roll_type_name = "Roll";
		constexpr static rivet::rivet_type_id Roll_type_id = 0x1e25f27e;
		constexpr static std::string_view Pitch_type_name = "Pitch";
		constexpr static rivet::rivet_type_id Pitch_type_id = 0x3ecc7218;
		constexpr static std::string_view Yaw_type_name = "Yaw";
		constexpr static rivet::rivet_type_id Yaw_type_id = 0x3cb31d7d; 

		explicit VisualEffectAngles() = default;
		explicit VisualEffectAngles([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		float Roll {};
		float Pitch {};
		float Yaw {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<VisualEffectAngles>;
	};
} // namespace rivet::ddl::generated

// clang-format on
