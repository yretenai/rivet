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

#include <rivet/ddl/generated/EventBase.hpp> 

namespace rivet::ddl::generated {
	struct HeroCinematicTransitionDataBase; 

	struct RIVET_DDL_SHARED Cinematic2HeroTransitionEventBase : EventBase {
		constexpr static std::string_view type_name = "Cinematic2HeroTransitionEventBase";
		constexpr static rivet::rivet_type_id type_id = 0x39de3c75;

		constexpr static std::string_view CurrentShotOnly_type_name = "CurrentShotOnly";
		constexpr static rivet::rivet_type_id CurrentShotOnly_type_id = 0x4f232549;
		constexpr static std::string_view TransitionData_type_name = "TransitionData";
		constexpr static rivet::rivet_type_id TransitionData_type_id = 0x33728871; 

		explicit Cinematic2HeroTransitionEventBase() = default;
		explicit Cinematic2HeroTransitionEventBase([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		bool CurrentShotOnly {};
		std::shared_ptr<rivet::ddl::generated::HeroCinematicTransitionDataBase> TransitionData {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<Cinematic2HeroTransitionEventBase>;
	};
} // namespace rivet::ddl::generated

// clang-format on
