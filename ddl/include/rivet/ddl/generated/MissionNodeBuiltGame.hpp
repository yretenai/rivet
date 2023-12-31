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

#include <rivet/ddl/generated/enums/x1953eb86.hpp>
#include <rivet/ddl/generated/MissionNodeBuiltShared.hpp> 

namespace rivet::ddl::generated {
	struct ObjectiveLoadInfo; 

	struct RIVET_DDL_SHARED MissionNodeBuiltGame : MissionNodeBuiltShared {
		constexpr static std::string_view type_name = "MissionNodeBuiltGame";
		constexpr static rivet::rivet_type_id type_id = 0xb4720e85;

		constexpr static std::string_view AvailableDebugLoadInfo_type_name = "AvailableDebugLoadInfo";
		constexpr static rivet::rivet_type_id AvailableDebugLoadInfo_type_id = 0x42bd84aa;
		constexpr static std::string_view MissionType_type_name = "MissionType";
		constexpr static rivet::rivet_type_id MissionType_type_id = 0x773e274f;
		constexpr static std::string_view MissionSaveWeight_type_name = "MissionSaveWeight";
		constexpr static rivet::rivet_type_id MissionSaveWeight_type_id = 0x4eadb9a9; 

		explicit MissionNodeBuiltGame() = default;
		explicit MissionNodeBuiltGame([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		std::shared_ptr<rivet::ddl::generated::ObjectiveLoadInfo> AvailableDebugLoadInfo {};
		rivet::ddl::generated::x1953eb86 MissionType {};
		float MissionSaveWeight {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<MissionNodeBuiltGame>;
	};
} // namespace rivet::ddl::generated

// clang-format on
