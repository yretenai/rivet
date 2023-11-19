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
	struct FlockOverrideData; 

	struct RIVET_DDL_SHARED ScriptedFlockingVolumePrius : rivet::structures::rivet_ddl_base {
		constexpr static std::string_view type_name = "ScriptedFlockingVolumePrius";
		constexpr static rivet::rivet_type_id type_id = 0xbb253846;

		constexpr static std::string_view CreatureType_type_name = "CreatureType";
		constexpr static rivet::rivet_type_id CreatureType_type_id = 0xb1d5e2ec;
		constexpr static std::string_view FlockSize_type_name = "FlockSize";
		constexpr static rivet::rivet_type_id FlockSize_type_id = 0xa7039594;
		constexpr static std::string_view ManualDestination_type_name = "ManualDestination";
		constexpr static rivet::rivet_type_id ManualDestination_type_id = 0x9adb9e0c;
		constexpr static std::string_view OverrideTypeData_type_name = "OverrideTypeData";
		constexpr static rivet::rivet_type_id OverrideTypeData_type_id = 0x1f91b5b3;
		constexpr static std::string_view OverrideData_type_name = "OverrideData";
		constexpr static rivet::rivet_type_id OverrideData_type_id = 0x3f818aa; 

		explicit ScriptedFlockingVolumePrius() = default;
		explicit ScriptedFlockingVolumePrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		std::string_view CreatureType {};
		int32_t FlockSize {};
		bool ManualDestination {};
		bool OverrideTypeData {};
		std::shared_ptr<rivet::ddl::generated::FlockOverrideData> OverrideData {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<ScriptedFlockingVolumePrius>;
	};
} // namespace rivet::ddl::generated

// clang-format on