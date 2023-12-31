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
	struct RIVET_DDL_SHARED BotMovementEventsPrius : rivet::structures::rivet_ddl_base {
		constexpr static std::string_view type_name = "BotMovementEventsPrius";
		constexpr static rivet::rivet_type_id type_id = 0xf0aa4b4b;

		constexpr static std::string_view MovementSpeedThreshold_type_name = "MovementSpeedThreshold";
		constexpr static rivet::rivet_type_id MovementSpeedThreshold_type_id = 0x236125e0;
		constexpr static std::string_view DurationThreshold_type_name = "DurationThreshold";
		constexpr static rivet::rivet_type_id DurationThreshold_type_id = 0xd62465fa; 

		explicit BotMovementEventsPrius() = default;
		explicit BotMovementEventsPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		float MovementSpeedThreshold {};
		float DurationThreshold {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<BotMovementEventsPrius>;
	};
} // namespace rivet::ddl::generated

// clang-format on
