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
	struct RIVET_DDL_SHARED SpawnerCollisionTesterThrowToPointPrius : rivet::structures::rivet_ddl_base {
		constexpr static std::string_view type_name = "SpawnerCollisionTesterThrowToPointPrius";
		constexpr static rivet::rivet_type_id type_id = 0xac5b393e;

		constexpr static std::string_view DistanceTolerance_type_name = "DistanceTolerance";
		constexpr static rivet::rivet_type_id DistanceTolerance_type_id = 0x6f905aed;
		constexpr static std::string_view DoArcCheck_type_name = "DoArcCheck";
		constexpr static rivet::rivet_type_id DoArcCheck_type_id = 0x48a7d6bf;
		constexpr static std::string_view ThrowHeight_type_name = "ThrowHeight";
		constexpr static rivet::rivet_type_id ThrowHeight_type_id = 0xd7e273b9; 

		explicit SpawnerCollisionTesterThrowToPointPrius() = default;
		explicit SpawnerCollisionTesterThrowToPointPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		float DistanceTolerance {};
		bool DoArcCheck {};
		float ThrowHeight {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<SpawnerCollisionTesterThrowToPointPrius>;
	};
} // namespace rivet::ddl::generated

// clang-format on
