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
	struct AudioChannelsLoc;
	struct AudioChannelsNonLoc;
	struct VaultMetaData; 

	struct RIVET_DDL_SHARED MovieDef : rivet::structures::rivet_ddl_base {
		constexpr static std::string_view type_name = "MovieDef";
		constexpr static rivet::rivet_type_id type_id = 0x275a693d;

		constexpr static std::string_view VaultMetaData_type_name = "VaultMetaData";
		constexpr static rivet::rivet_type_id VaultMetaData_type_id = 0x37889aa;
		constexpr static std::string_view IconPath_type_name = "IconPath";
		constexpr static rivet::rivet_type_id IconPath_type_id = 0xbf5b007f;
		constexpr static std::string_view BikFilename_type_name = "BikFilename";
		constexpr static rivet::rivet_type_id BikFilename_type_id = 0xbd78ab57;
		constexpr static std::string_view UnlocalizedTrack_type_name = "UnlocalizedTrack";
		constexpr static rivet::rivet_type_id UnlocalizedTrack_type_id = 0x7b9c358b;
		constexpr static std::string_view LocalizedTracks_type_name = "LocalizedTracks";
		constexpr static rivet::rivet_type_id LocalizedTracks_type_id = 0x6e34b8d9; 

		explicit MovieDef() = default;
		explicit MovieDef([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		std::shared_ptr<rivet::ddl::generated::VaultMetaData> VaultMetaData {};
		std::string_view IconPath {};
		std::string_view BikFilename {};
		std::shared_ptr<rivet::ddl::generated::AudioChannelsNonLoc> UnlocalizedTrack {};
		std::vector<std::shared_ptr<rivet::ddl::generated::AudioChannelsLoc>> LocalizedTracks {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<MovieDef>;
	};
} // namespace rivet::ddl::generated

// clang-format on
