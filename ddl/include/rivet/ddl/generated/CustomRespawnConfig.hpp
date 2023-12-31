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

#include <rivet/ddl/generated/ConfigBase.hpp> 

namespace rivet::ddl::generated {
	struct CustomRespawn; 

	struct RIVET_DDL_SHARED CustomRespawnConfig : ConfigBase {
		constexpr static std::string_view type_name = "CustomRespawnConfig";
		constexpr static rivet::rivet_type_id type_id = 0xa59b5510;

		constexpr static std::string_view CustomRespawns_type_name = "CustomRespawns";
		constexpr static rivet::rivet_type_id CustomRespawns_type_id = 0x1ed42638; 

		explicit CustomRespawnConfig() = default;
		explicit CustomRespawnConfig([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		std::vector<std::shared_ptr<rivet::ddl::generated::CustomRespawn>> CustomRespawns {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<CustomRespawnConfig>;
	};
} // namespace rivet::ddl::generated

// clang-format on
