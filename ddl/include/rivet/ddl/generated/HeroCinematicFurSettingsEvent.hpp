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
	struct RIVET_DDL_SHARED HeroCinematicFurSettingsEvent : EventBase {
		constexpr static std::string_view type_name = "HeroCinematicFurSettingsEvent";
		constexpr static rivet::rivet_type_id type_id = 0x1b75c629;

		constexpr static std::string_view FurWetnessEnabled_type_name = "FurWetnessEnabled";
		constexpr static rivet::rivet_type_id FurWetnessEnabled_type_id = 0xf51fc5db;
		constexpr static std::string_view FurWindEnabled_type_name = "FurWindEnabled";
		constexpr static rivet::rivet_type_id FurWindEnabled_type_id = 0x2609d20c;
		constexpr static std::string_view FurWetnessUpdateEnabled_type_name = "FurWetnessUpdateEnabled";
		constexpr static rivet::rivet_type_id FurWetnessUpdateEnabled_type_id = 0x43fe2735;
		constexpr static std::string_view FurWindUpdateEnabled_type_name = "FurWindUpdateEnabled";
		constexpr static rivet::rivet_type_id FurWindUpdateEnabled_type_id = 0x64b8c31a; 

		explicit HeroCinematicFurSettingsEvent() = default;
		explicit HeroCinematicFurSettingsEvent([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		bool FurWetnessEnabled {};
		bool FurWindEnabled {};
		bool FurWetnessUpdateEnabled {};
		bool FurWindUpdateEnabled {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<HeroCinematicFurSettingsEvent>;
	};
} // namespace rivet::ddl::generated

// clang-format on
