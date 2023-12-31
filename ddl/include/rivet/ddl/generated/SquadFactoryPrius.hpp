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

#include <rivet/ddl/generated/SpawnerFactoryPrius.hpp> 

namespace rivet::ddl::generated {
	struct RIVET_DDL_SHARED SquadFactoryPrius : SpawnerFactoryPrius {
		constexpr static std::string_view type_name = "SquadFactoryPrius";
		constexpr static rivet::rivet_type_id type_id = 0x8e467aac;

		constexpr static std::string_view SquadMembers_type_name = "SquadMembers";
		constexpr static rivet::rivet_type_id SquadMembers_type_id = 0xcc8b61bf; 

		explicit SquadFactoryPrius() = default;
		explicit SquadFactoryPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		uint32_t SquadMembers {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<SquadFactoryPrius>;
	};
} // namespace rivet::ddl::generated

// clang-format on
