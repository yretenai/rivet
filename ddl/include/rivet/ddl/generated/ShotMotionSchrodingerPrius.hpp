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

#include <rivet/ddl/generated/BasicShotMotionPrius.hpp> 

namespace rivet::ddl::generated {
	struct RIVET_DDL_SHARED ShotMotionSchrodingerPrius : BasicShotMotionPrius {
		constexpr static std::string_view type_name = "ShotMotionSchrodingerPrius";
		constexpr static rivet::rivet_type_id type_id = 0xac996ff4;

		constexpr static std::string_view IntroAnim_type_name = "IntroAnim";
		constexpr static rivet::rivet_type_id IntroAnim_type_id = 0xf227a2c3;
		constexpr static std::string_view InAirAnim_type_name = "InAirAnim";
		constexpr static rivet::rivet_type_id InAirAnim_type_id = 0xf91d895d;
		constexpr static std::string_view AttackAnim_type_name = "AttackAnim";
		constexpr static rivet::rivet_type_id AttackAnim_type_id = 0x28523c32; 

		explicit ShotMotionSchrodingerPrius() = default;
		explicit ShotMotionSchrodingerPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		std::string_view IntroAnim {};
		std::string_view InAirAnim {};
		std::string_view AttackAnim {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<ShotMotionSchrodingerPrius>;
	};
} // namespace rivet::ddl::generated

// clang-format on
