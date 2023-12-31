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

#include <rivet/ddl/generated/EnabledComponentBasePrius.hpp> 

namespace rivet::ddl::generated {
	struct RespawnGroup; 

	struct RIVET_DDL_SHARED RespawnableGroupManagerPrius : EnabledComponentBasePrius {
		constexpr static std::string_view type_name = "RespawnableGroupManagerPrius";
		constexpr static rivet::rivet_type_id type_id = 0xc4448cb3;

		constexpr static std::string_view RespawnGroup_type_name = "RespawnGroup";
		constexpr static rivet::rivet_type_id RespawnGroup_type_id = 0xd1279ac6;
		constexpr static std::string_view RespawnDelay_type_name = "RespawnDelay";
		constexpr static rivet::rivet_type_id RespawnDelay_type_id = 0xe7d5e98; 

		explicit RespawnableGroupManagerPrius() = default;
		explicit RespawnableGroupManagerPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		std::vector<std::shared_ptr<rivet::ddl::generated::RespawnGroup>> RespawnGroup {};
		float RespawnDelay {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<RespawnableGroupManagerPrius>;
	};
} // namespace rivet::ddl::generated

// clang-format on
