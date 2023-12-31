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
	struct RIVET_DDL_SHARED DebugPlaytestSettings : rivet::structures::rivet_ddl_base {
		constexpr static std::string_view type_name = "DebugPlaytestSettings";
		constexpr static rivet::rivet_type_id type_id = 0xe06867b9;

		constexpr static std::string_view Enabled_type_name = "Enabled";
		constexpr static rivet::rivet_type_id Enabled_type_id = 0x5113d8bc;
		constexpr static std::string_view PlaytestName_type_name = "PlaytestName";
		constexpr static rivet::rivet_type_id PlaytestName_type_id = 0xbdfaa48;
		constexpr static std::string_view ForceEnableSurveyScreens_type_name = "ForceEnableSurveyScreens";
		constexpr static rivet::rivet_type_id ForceEnableSurveyScreens_type_id = 0xc4da8518; 

		explicit DebugPlaytestSettings() = default;
		explicit DebugPlaytestSettings([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		bool Enabled {};
		std::string_view PlaytestName {};
		bool ForceEnableSurveyScreens {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<DebugPlaytestSettings>;
	};
} // namespace rivet::ddl::generated

// clang-format on
