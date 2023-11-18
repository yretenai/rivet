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
	struct YawAndPitchData; 

	struct RIVET_DDL_SHARED FreeMoveCamData : rivet::structures::rivet_ddl_base {
		constexpr static std::string_view type_name = "FreeMoveCamData";
		constexpr static rivet::rivet_type_id type_id = 0xc13edbf5;

		constexpr static std::string_view TetherDistance_type_name = "TetherDistance";
		constexpr static rivet::rivet_type_id TetherDistance_type_id = 0xc7fa135f;
		constexpr static std::string_view MoveSpeed_type_name = "MoveSpeed";
		constexpr static rivet::rivet_type_id MoveSpeed_type_id = 0x1f570251;
		constexpr static std::string_view RiseSpeed_type_name = "RiseSpeed";
		constexpr static rivet::rivet_type_id RiseSpeed_type_id = 0xf879a9d1;
		constexpr static std::string_view Acceleration_type_name = "Acceleration";
		constexpr static rivet::rivet_type_id Acceleration_type_id = 0xb9f88dfb;
		constexpr static std::string_view YawAndPitch_type_name = "YawAndPitch";
		constexpr static rivet::rivet_type_id YawAndPitch_type_id = 0x44749354;
		constexpr static std::string_view StickConfig_type_name = "StickConfig";
		constexpr static rivet::rivet_type_id StickConfig_type_id = 0x3bc8f276; 

		explicit FreeMoveCamData() = default;
		explicit FreeMoveCamData([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		float TetherDistance {};
		float MoveSpeed {};
		float RiseSpeed {};
		float Acceleration {};
		std::shared_ptr<rivet::ddl::generated::YawAndPitchData> YawAndPitch {};
		std::string_view StickConfig {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<FreeMoveCamData>;
	};
} // namespace rivet::ddl::generated

// clang-format on
