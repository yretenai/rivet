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
	struct RIVET_DDL_SHARED Cinematic2RunGameOptions : rivet::structures::rivet_ddl_base {
		constexpr static std::string_view type_name = "Cinematic2RunGameOptions";
		constexpr static rivet::rivet_type_id type_id = 0x7f2c615a;

		constexpr static std::string_view LevelPath_type_name = "LevelPath";
		constexpr static rivet::rivet_type_id LevelPath_type_id = 0x47c94d54;
		constexpr static std::string_view AdditionalCineArgs_type_name = "AdditionalCineArgs";
		constexpr static rivet::rivet_type_id AdditionalCineArgs_type_id = 0xfdd14662;
		constexpr static std::string_view Checkpoint_type_name = "Checkpoint";
		constexpr static rivet::rivet_type_id Checkpoint_type_id = 0xd436a987; 

		explicit Cinematic2RunGameOptions() = default;
		explicit Cinematic2RunGameOptions([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		std::string_view LevelPath {};
		std::string_view AdditionalCineArgs {};
		std::string_view Checkpoint {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<Cinematic2RunGameOptions>;
	};
} // namespace rivet::ddl::generated

// clang-format on
