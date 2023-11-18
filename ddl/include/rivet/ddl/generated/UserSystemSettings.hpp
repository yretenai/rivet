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
	struct RIVET_DDL_SHARED UserSystemSettings : rivet::structures::rivet_ddl_base {
		constexpr static std::string_view type_name = "UserSystemSettings";
		constexpr static rivet::rivet_type_id type_id = 0xa8fe65f6;

		constexpr static std::string_view MaxPerUserBindingsConfigCount_type_name = "MaxPerUserBindingsConfigCount";
		constexpr static rivet::rivet_type_id MaxPerUserBindingsConfigCount_type_id = 0x287bdb12;
		constexpr static std::string_view MaxPerUserControlGroupCount_type_name = "MaxPerUserControlGroupCount";
		constexpr static rivet::rivet_type_id MaxPerUserControlGroupCount_type_id = 0xec0fc20;
		constexpr static std::string_view MaxPerUserControlCount_type_name = "MaxPerUserControlCount";
		constexpr static rivet::rivet_type_id MaxPerUserControlCount_type_id = 0x8fc95308;
		constexpr static std::string_view MaxPerUserFinalizeStepCount_type_name = "MaxPerUserFinalizeStepCount";
		constexpr static rivet::rivet_type_id MaxPerUserFinalizeStepCount_type_id = 0x345cdef5;
		constexpr static std::string_view MaxPlayingUsers_type_name = "MaxPlayingUsers";
		constexpr static rivet::rivet_type_id MaxPlayingUsers_type_id = 0x8d01af3a;
		constexpr static std::string_view UsePureUserName_type_name = "UsePureUserName";
		constexpr static rivet::rivet_type_id UsePureUserName_type_id = 0xf74f691b;
		constexpr static std::string_view SetSignedInAsPlaying_type_name = "SetSignedInAsPlaying";
		constexpr static rivet::rivet_type_id SetSignedInAsPlaying_type_id = 0x8c914232;
		constexpr static std::string_view GuestsEnabled_type_name = "GuestsEnabled";
		constexpr static rivet::rivet_type_id GuestsEnabled_type_id = 0x4e21d3d8;
		constexpr static std::string_view AllocInstanceId_type_name = "AllocInstanceId";
		constexpr static rivet::rivet_type_id AllocInstanceId_type_id = 0xabdb326f;
		constexpr static std::string_view FinalUseKeyboard_type_name = "FinalUseKeyboard";
		constexpr static rivet::rivet_type_id FinalUseKeyboard_type_id = 0x5717483d;
		constexpr static std::string_view FinalUseMouse_type_name = "FinalUseMouse";
		constexpr static rivet::rivet_type_id FinalUseMouse_type_id = 0x9d9990c4;
		constexpr static std::string_view UseDefaultUserName_type_name = "UseDefaultUserName";
		constexpr static rivet::rivet_type_id UseDefaultUserName_type_id = 0xe63216f7; 

		explicit UserSystemSettings() = default;
		explicit UserSystemSettings([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		int32_t MaxPerUserBindingsConfigCount {};
		int32_t MaxPerUserControlGroupCount {};
		int32_t MaxPerUserControlCount {};
		int32_t MaxPerUserFinalizeStepCount {};
		uint8_t MaxPlayingUsers {};
		bool UsePureUserName {};
		bool SetSignedInAsPlaying {};
		bool GuestsEnabled {};
		bool AllocInstanceId {};
		bool FinalUseKeyboard {};
		bool FinalUseMouse {};
		bool UseDefaultUserName {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<UserSystemSettings>;
	};
} // namespace rivet::ddl::generated

// clang-format on
