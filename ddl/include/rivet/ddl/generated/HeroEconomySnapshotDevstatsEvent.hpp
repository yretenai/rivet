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
	struct RIVET_DDL_SHARED HeroEconomySnapshotDevstatsEvent : EventBase {
		constexpr static std::string_view type_name = "HeroEconomySnapshotDevstatsEvent";
		constexpr static rivet::rivet_type_id type_id = 0xb0a71e40;

		constexpr static std::string_view ParentEventId_type_name = "ParentEventId";
		constexpr static rivet::rivet_type_id ParentEventId_type_id = 0x6dca4420;
		constexpr static std::string_view CareerRaritanium_type_name = "CareerRaritanium";
		constexpr static rivet::rivet_type_id CareerRaritanium_type_id = 0x876a54ce; 

		explicit HeroEconomySnapshotDevstatsEvent() = default;
		explicit HeroEconomySnapshotDevstatsEvent([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		std::string_view ParentEventId {};
		float CareerRaritanium {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<HeroEconomySnapshotDevstatsEvent>;
	};
} // namespace rivet::ddl::generated

// clang-format on
