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
	struct RIVET_DDL_SHARED BuiltMissionEntry : rivet::structures::rivet_ddl_base {
		constexpr static std::string_view type_name = "BuiltMissionEntry";
		constexpr static rivet::rivet_type_id type_id = 0x976454d0;

		constexpr static std::string_view MissionName_type_name = "MissionName";
		constexpr static rivet::rivet_type_id MissionName_type_id = 0xa5c30e60;
		constexpr static std::string_view MissionGraph_type_name = "MissionGraph";
		constexpr static rivet::rivet_type_id MissionGraph_type_id = 0x7f6dce4c;
		constexpr static std::string_view ObjectiveGraph_type_name = "ObjectiveGraph";
		constexpr static rivet::rivet_type_id ObjectiveGraph_type_id = 0x55ff52bd; 

		explicit BuiltMissionEntry() = default;
		explicit BuiltMissionEntry([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		std::string_view MissionName {};
		std::string_view MissionGraph {};
		std::string_view ObjectiveGraph {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<BuiltMissionEntry>;
	};
} // namespace rivet::ddl::generated

// clang-format on
