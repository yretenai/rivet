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
	struct RIVET_DDL_SHARED PortalManagerPrius : rivet::structures::rivet_ddl_base {
		constexpr static std::string_view type_name = "PortalManagerPrius";
		constexpr static rivet::rivet_type_id type_id = 0x31a87612;

		constexpr static std::string_view AllowPlayers_type_name = "AllowPlayers";
		constexpr static rivet::rivet_type_id AllowPlayers_type_id = 0xcb694d31;
		constexpr static std::string_view AllowBots_type_name = "AllowBots";
		constexpr static rivet::rivet_type_id AllowBots_type_id = 0xa6278caf;
		constexpr static std::string_view AllowProjectiles_type_name = "AllowProjectiles";
		constexpr static rivet::rivet_type_id AllowProjectiles_type_id = 0x27022e07; 

		explicit PortalManagerPrius() = default;
		explicit PortalManagerPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		bool AllowPlayers {};
		bool AllowBots {};
		bool AllowProjectiles {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<PortalManagerPrius>;
	};
} // namespace rivet::ddl::generated

// clang-format on