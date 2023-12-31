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
	struct RIVET_DDL_SHARED GameUISettings : rivet::structures::rivet_ddl_base {
		constexpr static std::string_view type_name = "GameUISettings";
		constexpr static rivet::rivet_type_id type_id = 0x7af51c67;

		constexpr static std::string_view ForceNoUnload_type_name = "ForceNoUnload";
		constexpr static rivet::rivet_type_id ForceNoUnload_type_id = 0x715d45fd;
		constexpr static std::string_view EnableHUD_type_name = "EnableHUD";
		constexpr static rivet::rivet_type_id EnableHUD_type_id = 0x4752795d;
		constexpr static std::string_view EnablePauseMenu_type_name = "EnablePauseMenu";
		constexpr static rivet::rivet_type_id EnablePauseMenu_type_id = 0x689f1b10;
		constexpr static std::string_view EnableOverlay_type_name = "EnableOverlay";
		constexpr static rivet::rivet_type_id EnableOverlay_type_id = 0x6f88e9ca;
		constexpr static std::string_view Enable3DText_type_name = "Enable3DText";
		constexpr static rivet::rivet_type_id Enable3DText_type_id = 0x8d12147c;
		constexpr static std::string_view EnablePlanetMenu_type_name = "EnablePlanetMenu";
		constexpr static rivet::rivet_type_id EnablePlanetMenu_type_id = 0x5ed35619;
		constexpr static std::string_view EnableVendor_type_name = "EnableVendor";
		constexpr static rivet::rivet_type_id EnableVendor_type_id = 0x5b3edf70;
		constexpr static std::string_view EnableZurkie_type_name = "EnableZurkie";
		constexpr static rivet::rivet_type_id EnableZurkie_type_id = 0x880605d2;
		constexpr static std::string_view EnableMessages_type_name = "EnableMessages";
		constexpr static rivet::rivet_type_id EnableMessages_type_id = 0x5ebe33eb;
		constexpr static std::string_view EnableLobby_type_name = "EnableLobby";
		constexpr static rivet::rivet_type_id EnableLobby_type_id = 0xe08e939;
		constexpr static std::string_view EnableDisplayGraphicsPC_type_name = "EnableDisplayGraphicsPC";
		constexpr static rivet::rivet_type_id EnableDisplayGraphicsPC_type_id = 0x564c1500; 

		explicit GameUISettings() = default;
		explicit GameUISettings([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		bool ForceNoUnload {};
		bool EnableHUD {};
		bool EnablePauseMenu {};
		bool EnableOverlay {};
		bool Enable3DText {};
		bool EnablePlanetMenu {};
		bool EnableVendor {};
		bool EnableZurkie {};
		bool EnableMessages {};
		bool EnableLobby {};
		bool EnableDisplayGraphicsPC {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<GameUISettings>;
	};
} // namespace rivet::ddl::generated

// clang-format on
