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
	struct Cinematic2UserZoneDef; 

	struct RIVET_DDL_SHARED Cinematic2UserRegionDef : rivet::structures::rivet_ddl_base {
		constexpr static std::string_view type_name = "Cinematic2UserRegionDef";
		constexpr static rivet::rivet_type_id type_id = 0xe25f9ebc;

		constexpr static std::string_view Id_type_name = "Id";
		constexpr static rivet::rivet_type_id Id_type_id = 0x8a514a8d;
		constexpr static std::string_view Name_type_name = "Name";
		constexpr static rivet::rivet_type_id Name_type_id = 0x6eb3beb6;
		constexpr static std::string_view UserZones_type_name = "UserZones";
		constexpr static rivet::rivet_type_id UserZones_type_id = 0xe1523db2; 

		explicit Cinematic2UserRegionDef() = default;
		explicit Cinematic2UserRegionDef([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		uint64_t Id {};
		std::string_view Name {};
		std::vector<std::shared_ptr<rivet::ddl::generated::Cinematic2UserZoneDef>> UserZones {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<Cinematic2UserRegionDef>;
	};
} // namespace rivet::ddl::generated

// clang-format on
