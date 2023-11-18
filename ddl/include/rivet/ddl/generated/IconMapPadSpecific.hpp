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

#include <rivet/ddl/generated/IconMapBase.hpp> 

namespace rivet::ddl::generated {
	struct IconMapOverride;
	struct IconMapBase; 

	struct RIVET_DDL_SHARED IconMapPadSpecific : IconMapBase {
		constexpr static std::string_view type_name = "IconMapPadSpecific";
		constexpr static rivet::rivet_type_id type_id = 0x7de43456;

		constexpr static std::string_view DefaultIconMap_type_name = "DefaultIconMap";
		constexpr static rivet::rivet_type_id DefaultIconMap_type_id = 0x1a9fdab1;
		constexpr static std::string_view X360Override_type_name = "X360Override";
		constexpr static rivet::rivet_type_id X360Override_type_id = 0x7e1ead8f;
		constexpr static std::string_view XOneOverride_type_name = "XOneOverride";
		constexpr static rivet::rivet_type_id XOneOverride_type_id = 0x1820af3e;
		constexpr static std::string_view DualShockOverride_type_name = "DualShockOverride";
		constexpr static rivet::rivet_type_id DualShockOverride_type_id = 0xdb7472dd;
		constexpr static std::string_view DualSenseOverride_type_name = "DualSenseOverride";
		constexpr static rivet::rivet_type_id DualSenseOverride_type_id = 0x6b39f689;
		constexpr static std::string_view SteamDeckOverride_type_name = "SteamDeckOverride";
		constexpr static rivet::rivet_type_id SteamDeckOverride_type_id = 0x7d523c20;
		constexpr static std::string_view SwitchProOverride_type_name = "SwitchProOverride";
		constexpr static rivet::rivet_type_id SwitchProOverride_type_id = 0xd81eb57a;
		constexpr static std::string_view GenericOverride_type_name = "GenericOverride";
		constexpr static rivet::rivet_type_id GenericOverride_type_id = 0xb1987712;
		constexpr static std::string_view MkbOverride_type_name = "MkbOverride";
		constexpr static rivet::rivet_type_id MkbOverride_type_id = 0x38ded677;
		constexpr static std::string_view SteamOverride_type_name = "SteamOverride";
		constexpr static rivet::rivet_type_id SteamOverride_type_id = 0xbca286cb; 

		explicit IconMapPadSpecific() = default;
		explicit IconMapPadSpecific([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		std::shared_ptr<rivet::ddl::generated::IconMapBase> DefaultIconMap {};
		std::shared_ptr<rivet::ddl::generated::IconMapOverride> X360Override {};
		std::shared_ptr<rivet::ddl::generated::IconMapOverride> XOneOverride {};
		std::shared_ptr<rivet::ddl::generated::IconMapOverride> DualShockOverride {};
		std::shared_ptr<rivet::ddl::generated::IconMapOverride> DualSenseOverride {};
		std::shared_ptr<rivet::ddl::generated::IconMapOverride> SteamDeckOverride {};
		std::shared_ptr<rivet::ddl::generated::IconMapOverride> SwitchProOverride {};
		std::shared_ptr<rivet::ddl::generated::IconMapOverride> GenericOverride {};
		std::shared_ptr<rivet::ddl::generated::IconMapOverride> MkbOverride {};
		std::shared_ptr<rivet::ddl::generated::IconMapOverride> SteamOverride {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<IconMapPadSpecific>;
	};
} // namespace rivet::ddl::generated

// clang-format on
