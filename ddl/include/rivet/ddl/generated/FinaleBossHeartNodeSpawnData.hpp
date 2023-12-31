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

#include <rivet/ddl/generated/SimpleSpawnData.hpp> 

namespace rivet::ddl::generated {
	struct RIVET_DDL_SHARED FinaleBossHeartNodeSpawnData : SimpleSpawnData {
		constexpr static std::string_view type_name = "FinaleBossHeartNodeSpawnData";
		constexpr static rivet::rivet_type_id type_id = 0xcb62149d;

		constexpr static std::string_view NodeIndex_type_name = "NodeIndex";
		constexpr static rivet::rivet_type_id NodeIndex_type_id = 0x59ce2a84; 

		explicit FinaleBossHeartNodeSpawnData() = default;
		explicit FinaleBossHeartNodeSpawnData([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		uint8_t NodeIndex {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<FinaleBossHeartNodeSpawnData>;
	};
} // namespace rivet::ddl::generated

// clang-format on
