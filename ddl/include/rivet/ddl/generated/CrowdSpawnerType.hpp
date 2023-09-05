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
	struct ObjSysUnlockSequence; 

	struct RIVET_DDL_SHARED CrowdSpawnerType : rivet::structures::rivet_ddl_base {
		constexpr const static std::string_view type_name = "CrowdSpawnerType";
		constexpr const static rivet::rivet_type_id type_id = 0xd2e8fa8f;

		constexpr const static std::string_view TypeConfig_type_name = "TypeConfig";
		constexpr const static rivet::rivet_type_id TypeConfig_type_id = 0x8c241f18;
		constexpr const static std::string_view EnabledContainerRegions_type_name = "EnabledContainerRegions";
		constexpr const static rivet::rivet_type_id EnabledContainerRegions_type_id = 0xb8e32d51;
		constexpr const static std::string_view MissionUnlocks_type_name = "MissionUnlocks";
		constexpr const static rivet::rivet_type_id MissionUnlocks_type_id = 0x17ff21a7; 

		explicit CrowdSpawnerType() = default;
		explicit CrowdSpawnerType([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		std::string_view TypeConfig {};
		std::vector<std::string_view> EnabledContainerRegions {};
		std::shared_ptr<rivet::ddl::generated::ObjSysUnlockSequence> MissionUnlocks {}; 

		auto
		get_type_id() const noexcept -> rivet::rivet_type_id override;

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<CrowdSpawnerType>;
	};
} // namespace rivet::ddl::generated

// clang-format on
