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
	struct DDLVector3; 

	struct RIVET_DDL_SHARED HeroSpawnedEvent : EventBase {
		constexpr static std::string_view type_name = "HeroSpawnedEvent";
		constexpr static rivet::rivet_type_id type_id = 0x183d74d2;

		constexpr static std::string_view ActorPosition_type_name = "ActorPosition";
		constexpr static rivet::rivet_type_id ActorPosition_type_id = 0xd69ed521; 

		explicit HeroSpawnedEvent() = default;
		explicit HeroSpawnedEvent([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		std::shared_ptr<rivet::ddl::generated::DDLVector3> ActorPosition {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<HeroSpawnedEvent>;
	};
} // namespace rivet::ddl::generated

// clang-format on