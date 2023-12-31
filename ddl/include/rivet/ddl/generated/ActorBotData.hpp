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
	struct RIVET_DDL_SHARED ActorBotData : rivet::structures::rivet_ddl_base {
		constexpr static std::string_view type_name = "ActorBotData";
		constexpr static rivet::rivet_type_id type_id = 0x5a76cf5a;

		constexpr static std::string_view ShouldFaceDuringAlert_type_name = "ShouldFaceDuringAlert";
		constexpr static rivet::rivet_type_id ShouldFaceDuringAlert_type_id = 0x74583334;
		constexpr static std::string_view Use180TurnDuringAlert_type_name = "Use180TurnDuringAlert";
		constexpr static rivet::rivet_type_id Use180TurnDuringAlert_type_id = 0x326fa3e0;
		constexpr static std::string_view Use180PatrolMoveIntro_type_name = "Use180PatrolMoveIntro";
		constexpr static rivet::rivet_type_id Use180PatrolMoveIntro_type_id = 0x331a5e22; 

		explicit ActorBotData() = default;
		explicit ActorBotData([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		bool ShouldFaceDuringAlert {};
		bool Use180TurnDuringAlert {};
		bool Use180PatrolMoveIntro {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<ActorBotData>;
	};
} // namespace rivet::ddl::generated

// clang-format on
