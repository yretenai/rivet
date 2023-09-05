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
	struct RIVET_DDL_SHARED CameraTargetTrackData : rivet::structures::rivet_ddl_base {
		constexpr const static std::string_view type_name = "CameraTargetTrackData";
		constexpr const static rivet::rivet_type_id type_id = 0x1f3f6161;

		constexpr const static std::string_view TrackForwardGain_type_name = "TrackForwardGain";
		constexpr const static rivet::rivet_type_id TrackForwardGain_type_id = 0xc3beac40;
		constexpr const static std::string_view TrackForwardDamp_type_name = "TrackForwardDamp";
		constexpr const static rivet::rivet_type_id TrackForwardDamp_type_id = 0x4f68fbc9;
		constexpr const static std::string_view TrackBackGain_type_name = "TrackBackGain";
		constexpr const static rivet::rivet_type_id TrackBackGain_type_id = 0x8095a0d7;
		constexpr const static std::string_view TrackBackDamp_type_name = "TrackBackDamp";
		constexpr const static rivet::rivet_type_id TrackBackDamp_type_id = 0xc43f75e;
		constexpr const static std::string_view TrackLeftGain_type_name = "TrackLeftGain";
		constexpr const static rivet::rivet_type_id TrackLeftGain_type_id = 0xd32d0716;
		constexpr const static std::string_view TrackLeftDamp_type_name = "TrackLeftDamp";
		constexpr const static rivet::rivet_type_id TrackLeftDamp_type_id = 0x5ffb509f;
		constexpr const static std::string_view TrackUpGain_type_name = "TrackUpGain";
		constexpr const static rivet::rivet_type_id TrackUpGain_type_id = 0x32a39aea;
		constexpr const static std::string_view TrackUpDamp_type_name = "TrackUpDamp";
		constexpr const static rivet::rivet_type_id TrackUpDamp_type_id = 0xbe75cd63;
		constexpr const static std::string_view SafeZoneLeftEnabled_type_name = "SafeZoneLeftEnabled";
		constexpr const static rivet::rivet_type_id SafeZoneLeftEnabled_type_id = 0x9051ceb2;
		constexpr const static std::string_view SafeZoneLeftAngleMin_type_name = "SafeZoneLeftAngleMin";
		constexpr const static rivet::rivet_type_id SafeZoneLeftAngleMin_type_id = 0x9c2eba28;
		constexpr const static std::string_view SafeZoneLeftAngleMax_type_name = "SafeZoneLeftAngleMax";
		constexpr const static rivet::rivet_type_id SafeZoneLeftAngleMax_type_id = 0xa0238571;
		constexpr const static std::string_view SafeZoneForwardEnabled_type_name = "SafeZoneForwardEnabled";
		constexpr const static rivet::rivet_type_id SafeZoneForwardEnabled_type_id = 0x3158f63a;
		constexpr const static std::string_view SafeZoneForwardDistMin_type_name = "SafeZoneForwardDistMin";
		constexpr const static rivet::rivet_type_id SafeZoneForwardDistMin_type_id = 0x90978b52;
		constexpr const static std::string_view SafeZoneForwardDistMax_type_name = "SafeZoneForwardDistMax";
		constexpr const static rivet::rivet_type_id SafeZoneForwardDistMax_type_id = 0xac9ab40b; 

		explicit CameraTargetTrackData() = default;
		explicit CameraTargetTrackData([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		float TrackForwardGain {};
		float TrackForwardDamp {};
		float TrackBackGain {};
		float TrackBackDamp {};
		float TrackLeftGain {};
		float TrackLeftDamp {};
		float TrackUpGain {};
		float TrackUpDamp {};
		bool SafeZoneLeftEnabled {};
		float SafeZoneLeftAngleMin {};
		float SafeZoneLeftAngleMax {};
		bool SafeZoneForwardEnabled {};
		float SafeZoneForwardDistMin {};
		float SafeZoneForwardDistMax {}; 

		auto
		get_type_id() const noexcept -> rivet::rivet_type_id override;

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<CameraTargetTrackData>;
	};
} // namespace rivet::ddl::generated

// clang-format on
