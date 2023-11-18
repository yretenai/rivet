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
	struct TweakDef; 

	struct RIVET_DDL_SHARED GameTweakList : rivet::structures::rivet_ddl_base {
		constexpr static std::string_view type_name = "GameTweakList";
		constexpr static rivet::rivet_type_id type_id = 0xe4a5b555;

		constexpr static std::string_view Tweaks_type_name = "Tweaks";
		constexpr static rivet::rivet_type_id Tweaks_type_id = 0x5e13a800;
		constexpr static std::string_view SessionId_type_name = "SessionId";
		constexpr static rivet::rivet_type_id SessionId_type_id = 0xbbad2afa; 

		explicit GameTweakList() = default;
		explicit GameTweakList([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		std::vector<std::shared_ptr<rivet::ddl::generated::TweakDef>> Tweaks {};
		std::string_view SessionId {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<GameTweakList>;
	};
} // namespace rivet::ddl::generated

// clang-format on
