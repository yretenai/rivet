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

#include <rivet/ddl/generated/TargetCheckBasePrius.hpp> 

namespace rivet::ddl::generated {
	struct RIVET_DDL_SHARED TargetCheckNavDistancePrius : TargetCheckBasePrius {
		constexpr static std::string_view type_name = "TargetCheckNavDistancePrius";
		constexpr static rivet::rivet_type_id type_id = 0xb7d9223d;

		constexpr static std::string_view ActorHandle_type_name = "ActorHandle";
		constexpr static rivet::rivet_type_id ActorHandle_type_id = 0xb54c733c;
		constexpr static std::string_view DistanceMin_type_name = "DistanceMin";
		constexpr static rivet::rivet_type_id DistanceMin_type_id = 0x61b2ebb8;
		constexpr static std::string_view DistanceMax_type_name = "DistanceMax";
		constexpr static rivet::rivet_type_id DistanceMax_type_id = 0x5dbfd4e1; 

		explicit TargetCheckNavDistancePrius() = default;
		explicit TargetCheckNavDistancePrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		uint32_t ActorHandle {};
		float DistanceMin {};
		float DistanceMax {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<TargetCheckNavDistancePrius>;
	};
} // namespace rivet::ddl::generated

// clang-format on
