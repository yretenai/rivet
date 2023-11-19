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
	struct FocusTrackingSolverData;
	struct FocusTrackingInstData; 

	struct RIVET_DDL_SHARED GameFocusTrackingManagerData : rivet::structures::rivet_ddl_base {
		constexpr static std::string_view type_name = "GameFocusTrackingManagerData";
		constexpr static rivet::rivet_type_id type_id = 0xb0c62690;

		constexpr static std::string_view AlwaysEngaged_type_name = "AlwaysEngaged";
		constexpr static rivet::rivet_type_id AlwaysEngaged_type_id = 0xca5ba54f;
		constexpr static std::string_view DefaultTracking_Engaged_type_name = "DefaultTracking_Engaged";
		constexpr static rivet::rivet_type_id DefaultTracking_Engaged_type_id = 0xbe685f74;
		constexpr static std::string_view DefaultSolverDefinitions_Engaged_type_name = "DefaultSolverDefinitions_Engaged";
		constexpr static rivet::rivet_type_id DefaultSolverDefinitions_Engaged_type_id = 0x54e5e2cf; 

		explicit GameFocusTrackingManagerData() = default;
		explicit GameFocusTrackingManagerData([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		bool AlwaysEngaged {};
		std::shared_ptr<rivet::ddl::generated::FocusTrackingInstData> DefaultTracking_Engaged {};
		std::vector<std::shared_ptr<rivet::ddl::generated::FocusTrackingSolverData>> DefaultSolverDefinitions_Engaged {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<GameFocusTrackingManagerData>;
	};
} // namespace rivet::ddl::generated

// clang-format on