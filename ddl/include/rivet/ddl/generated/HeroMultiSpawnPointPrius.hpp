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

#include <rivet/ddl/generated/HeroSingleSpawnPointPrius.hpp> 

namespace rivet::ddl::generated {
	struct RIVET_DDL_SHARED HeroMultiSpawnPointPrius : HeroSingleSpawnPointPrius {
		constexpr static std::string_view type_name = "HeroMultiSpawnPointPrius";
		constexpr static rivet::rivet_type_id type_id = 0x8d413709;

		constexpr static std::string_view AdditionalLocationsGroup_type_name = "AdditionalLocationsGroup";
		constexpr static rivet::rivet_type_id AdditionalLocationsGroup_type_id = 0xfb4ab458; 

		explicit HeroMultiSpawnPointPrius() = default;
		explicit HeroMultiSpawnPointPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		uint64_t AdditionalLocationsGroup {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<HeroMultiSpawnPointPrius>;
	};
} // namespace rivet::ddl::generated

// clang-format on
