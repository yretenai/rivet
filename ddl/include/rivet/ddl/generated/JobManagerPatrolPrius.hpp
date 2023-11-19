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

#include <rivet/ddl/generated/enums/MovementStyle.hpp> 

namespace rivet::ddl::generated {
	struct RIVET_DDL_SHARED JobManagerPatrolPrius : rivet::structures::rivet_ddl_base {
		constexpr static std::string_view type_name = "JobManagerPatrolPrius";
		constexpr static rivet::rivet_type_id type_id = 0x794932df;

		constexpr static std::string_view Broadcast_type_name = "Broadcast";
		constexpr static rivet::rivet_type_id Broadcast_type_id = 0x190ce3f9;
		constexpr static std::string_view MovementStyle_type_name = "MovementStyle";
		constexpr static rivet::rivet_type_id MovementStyle_type_id = 0x480e6afa;
		constexpr static std::string_view UsableByLargeEnemies_type_name = "UsableByLargeEnemies";
		constexpr static rivet::rivet_type_id UsableByLargeEnemies_type_id = 0x16e6303d;
		constexpr static std::string_view StartAtBeginningOfCurve_type_name = "StartAtBeginningOfCurve";
		constexpr static rivet::rivet_type_id StartAtBeginningOfCurve_type_id = 0x86601155;
		constexpr static std::string_view DisableBroadcastOnUse_type_name = "DisableBroadcastOnUse";
		constexpr static rivet::rivet_type_id DisableBroadcastOnUse_type_id = 0xeadb4e80;
		constexpr static std::string_view HoveringPatrol_type_name = "HoveringPatrol";
		constexpr static rivet::rivet_type_id HoveringPatrol_type_id = 0xcb892d25; 

		explicit JobManagerPatrolPrius() = default;
		explicit JobManagerPatrolPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		bool Broadcast {};
		rivet::ddl::generated::MovementStyle MovementStyle {};
		bool UsableByLargeEnemies {};
		bool StartAtBeginningOfCurve {};
		bool DisableBroadcastOnUse {};
		bool HoveringPatrol {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<JobManagerPatrolPrius>;
	};
} // namespace rivet::ddl::generated

// clang-format on