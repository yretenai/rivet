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

#include <rivet/ddl/generated/EventBase.hpp> 

namespace rivet::ddl::generated {
	struct DDLVector3; 

	struct RIVET_DDL_SHARED SpawnerThrowSpawnEvent : EventBase {
		constexpr static std::string_view type_name = "SpawnerThrowSpawnEvent";
		constexpr static rivet::rivet_type_id type_id = 0x55cbfb66;

		constexpr static std::string_view ThrowToPosition_type_name = "ThrowToPosition";
		constexpr static rivet::rivet_type_id ThrowToPosition_type_id = 0x59b6b1f1;
		constexpr static std::string_view ThrowHeight_type_name = "ThrowHeight";
		constexpr static rivet::rivet_type_id ThrowHeight_type_id = 0xd7e273b9; 

		explicit SpawnerThrowSpawnEvent() = default;
		explicit SpawnerThrowSpawnEvent([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		std::shared_ptr<rivet::ddl::generated::DDLVector3> ThrowToPosition {};
		float ThrowHeight {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<SpawnerThrowSpawnEvent>;
	};
} // namespace rivet::ddl::generated

// clang-format on
