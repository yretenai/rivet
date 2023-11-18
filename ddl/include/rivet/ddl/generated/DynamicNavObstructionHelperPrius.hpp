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
	struct NavMeshObstructionPrius; 

	struct RIVET_DDL_SHARED DynamicNavObstructionHelperPrius : rivet::structures::rivet_ddl_base {
		constexpr static std::string_view type_name = "DynamicNavObstructionHelperPrius";
		constexpr static rivet::rivet_type_id type_id = 0xe1cefc8b;

		constexpr static std::string_view NavMeshObstructionPriusData_type_name = "NavMeshObstructionPriusData";
		constexpr static rivet::rivet_type_id NavMeshObstructionPriusData_type_id = 0xf125ec02;
		constexpr static std::string_view ThisActorDoesNotMove_type_name = "ThisActorDoesNotMove";
		constexpr static rivet::rivet_type_id ThisActorDoesNotMove_type_id = 0xdf150e63; 

		explicit DynamicNavObstructionHelperPrius() = default;
		explicit DynamicNavObstructionHelperPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		std::shared_ptr<rivet::ddl::generated::NavMeshObstructionPrius> NavMeshObstructionPriusData {};
		bool ThisActorDoesNotMove {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<DynamicNavObstructionHelperPrius>;
	};
} // namespace rivet::ddl::generated

// clang-format on
