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

#include <rivet/ddl/generated/enums/x52f67dac.hpp>
#include <rivet/ddl/generated/enums/x69c22897.hpp>
#include <rivet/ddl/generated/AimModifierPrius.hpp> 

namespace rivet::ddl::generated {
	struct RIVET_DDL_SHARED AimModSweepPrius : AimModifierPrius {
		constexpr static std::string_view type_name = "AimModSweepPrius";
		constexpr static rivet::rivet_type_id type_id = 0xdcba4f26;

		constexpr static std::string_view SweepHalfAngle_type_name = "SweepHalfAngle";
		constexpr static rivet::rivet_type_id SweepHalfAngle_type_id = 0x59839627;
		constexpr static std::string_view SweepTimeIsBurstTime_type_name = "SweepTimeIsBurstTime";
		constexpr static rivet::rivet_type_id SweepTimeIsBurstTime_type_id = 0x4ed6bd8a;
		constexpr static std::string_view TotalSweepTime_type_name = "TotalSweepTime";
		constexpr static rivet::rivet_type_id TotalSweepTime_type_id = 0x5fa3bce2;
		constexpr static std::string_view StartDelay_type_name = "StartDelay";
		constexpr static rivet::rivet_type_id StartDelay_type_id = 0xcaf1ec7f;
		constexpr static std::string_view SweepType_type_name = "SweepType";
		constexpr static rivet::rivet_type_id SweepType_type_id = 0x7e82d654;
		constexpr static std::string_view SweepDirection_type_name = "SweepDirection";
		constexpr static rivet::rivet_type_id SweepDirection_type_id = 0xefe38765;
		constexpr static std::string_view EndClamp_type_name = "EndClamp";
		constexpr static rivet::rivet_type_id EndClamp_type_id = 0xe82419d1; 

		explicit AimModSweepPrius() = default;
		explicit AimModSweepPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		float SweepHalfAngle {};
		bool SweepTimeIsBurstTime {};
		float TotalSweepTime {};
		float StartDelay {};
		rivet::ddl::generated::x69c22897 SweepType {};
		rivet::ddl::generated::x52f67dac SweepDirection {};
		float EndClamp {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<AimModSweepPrius>;
	};
} // namespace rivet::ddl::generated

// clang-format on
