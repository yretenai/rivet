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
	struct RIVET_DDL_SHARED SunsetSpawnerFactoryInitialTargetsPrius : rivet::structures::rivet_ddl_base {
		constexpr static std::string_view type_name = "SunsetSpawnerFactoryInitialTargetsPrius";
		constexpr static rivet::rivet_type_id type_id = 0xd0680923;

		constexpr static std::string_view TargetGroupHandle_type_name = "TargetGroupHandle";
		constexpr static rivet::rivet_type_id TargetGroupHandle_type_id = 0xd22460ec;
		constexpr static std::string_view TargetTime_type_name = "TargetTime";
		constexpr static rivet::rivet_type_id TargetTime_type_id = 0x96eb524d;
		constexpr static std::string_view Aggro_type_name = "Aggro";
		constexpr static rivet::rivet_type_id Aggro_type_id = 0x504e1083;
		constexpr static std::string_view WaitForIntro_type_name = "WaitForIntro";
		constexpr static rivet::rivet_type_id WaitForIntro_type_id = 0x306e249a;
		constexpr static std::string_view WaitForTargetsTargetable_type_name = "WaitForTargetsTargetable";
		constexpr static rivet::rivet_type_id WaitForTargetsTargetable_type_id = 0x533ee021;
		constexpr static std::string_view TargetsUnlosable_type_name = "TargetsUnlosable";
		constexpr static rivet::rivet_type_id TargetsUnlosable_type_id = 0xceff7f9; 

		explicit SunsetSpawnerFactoryInitialTargetsPrius() = default;
		explicit SunsetSpawnerFactoryInitialTargetsPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		uint32_t TargetGroupHandle {};
		float TargetTime {};
		float Aggro {};
		bool WaitForIntro {};
		bool WaitForTargetsTargetable {};
		bool TargetsUnlosable {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<SunsetSpawnerFactoryInitialTargetsPrius>;
	};
} // namespace rivet::ddl::generated

// clang-format on
