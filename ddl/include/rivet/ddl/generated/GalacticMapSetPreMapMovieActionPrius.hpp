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

#include <rivet/ddl/generated/enums/LevelEnum.hpp>
#include <rivet/ddl/generated/enums/x10228b34.hpp> 

namespace rivet::ddl::generated {
	struct RIVET_DDL_SHARED GalacticMapSetPreMapMovieActionPrius : rivet::structures::rivet_ddl_base {
		constexpr static std::string_view type_name = "GalacticMapSetPreMapMovieActionPrius";
		constexpr static rivet::rivet_type_id type_id = 0x748f98fa;

		constexpr static std::string_view ActionType_type_name = "ActionType";
		constexpr static rivet::rivet_type_id ActionType_type_id = 0x874b2194;
		constexpr static std::string_view MovieFile_type_name = "MovieFile";
		constexpr static rivet::rivet_type_id MovieFile_type_id = 0x3c6b5aca;
		constexpr static std::string_view SubtitleConfig_type_name = "SubtitleConfig";
		constexpr static rivet::rivet_type_id SubtitleConfig_type_id = 0x8437e2b0;
		constexpr static std::string_view UnlockLevelEnum_type_name = "UnlockLevelEnum";
		constexpr static rivet::rivet_type_id UnlockLevelEnum_type_id = 0x2c3d938d; 

		explicit GalacticMapSetPreMapMovieActionPrius() = default;
		explicit GalacticMapSetPreMapMovieActionPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		rivet::ddl::generated::x10228b34 ActionType {};
		std::string_view MovieFile {};
		std::string_view SubtitleConfig {};
		rivet::ddl::generated::LevelEnum UnlockLevelEnum {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<GalacticMapSetPreMapMovieActionPrius>;
	};
} // namespace rivet::ddl::generated

// clang-format on
