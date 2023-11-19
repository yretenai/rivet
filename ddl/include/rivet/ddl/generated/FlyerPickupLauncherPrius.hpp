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
	struct RIVET_DDL_SHARED FlyerPickupLauncherPrius : rivet::structures::rivet_ddl_base {
		constexpr static std::string_view type_name = "FlyerPickupLauncherPrius";
		constexpr static rivet::rivet_type_id type_id = 0x47e19edf;

		constexpr static std::string_view CapsuleHeight_type_name = "CapsuleHeight";
		constexpr static rivet::rivet_type_id CapsuleHeight_type_id = 0x74424f3e;
		constexpr static std::string_view CapsuleRadius_type_name = "CapsuleRadius";
		constexpr static rivet::rivet_type_id CapsuleRadius_type_id = 0xba73c46b;
		constexpr static std::string_view CapsuleUpOffset_type_name = "CapsuleUpOffset";
		constexpr static rivet::rivet_type_id CapsuleUpOffset_type_id = 0x33192047;
		constexpr static std::string_view DrawDebugDetection_type_name = "DrawDebugDetection";
		constexpr static rivet::rivet_type_id DrawDebugDetection_type_id = 0xcceb8d61;
		constexpr static std::string_view PickupActor_type_name = "PickupActor";
		constexpr static rivet::rivet_type_id PickupActor_type_id = 0x2b00e05f;
		constexpr static std::string_view ShotConfig_type_name = "ShotConfig";
		constexpr static rivet::rivet_type_id ShotConfig_type_id = 0xb171e6ae; 

		explicit FlyerPickupLauncherPrius() = default;
		explicit FlyerPickupLauncherPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		float CapsuleHeight {};
		float CapsuleRadius {};
		float CapsuleUpOffset {};
		bool DrawDebugDetection {};
		std::string_view PickupActor {};
		std::string_view ShotConfig {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<FlyerPickupLauncherPrius>;
	};
} // namespace rivet::ddl::generated

// clang-format on