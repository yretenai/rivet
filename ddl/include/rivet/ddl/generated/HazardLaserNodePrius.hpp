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
	struct RIVET_DDL_SHARED HazardLaserNodePrius : rivet::structures::rivet_ddl_base {
		constexpr static std::string_view type_name = "HazardLaserNodePrius";
		constexpr static rivet::rivet_type_id type_id = 0xbc2ab514;

		constexpr static std::string_view Path_type_name = "Path";
		constexpr static rivet::rivet_type_id Path_type_id = 0x3bc44bbf;
		constexpr static std::string_view SpeedMax_type_name = "SpeedMax";
		constexpr static rivet::rivet_type_id SpeedMax_type_id = 0xb6419fba;
		constexpr static std::string_view SpeedAccel_type_name = "SpeedAccel";
		constexpr static rivet::rivet_type_id SpeedAccel_type_id = 0x5d9ea52c;
		constexpr static std::string_view PauseTime_type_name = "PauseTime";
		constexpr static rivet::rivet_type_id PauseTime_type_id = 0x4c078eb;
		constexpr static std::string_view TimeOffset_type_name = "TimeOffset";
		constexpr static rivet::rivet_type_id TimeOffset_type_id = 0x4ada9c3f; 

		explicit HazardLaserNodePrius() = default;
		explicit HazardLaserNodePrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		uint64_t Path {};
		float SpeedMax {};
		float SpeedAccel {};
		float PauseTime {};
		float TimeOffset {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<HazardLaserNodePrius>;
	};
} // namespace rivet::ddl::generated

// clang-format on
