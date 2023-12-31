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
	struct EmergentVOTagList; 

	struct RIVET_DDL_SHARED EmergentVOBasePrius : rivet::structures::rivet_ddl_base {
		constexpr static std::string_view type_name = "EmergentVOBasePrius";
		constexpr static rivet::rivet_type_id type_id = 0x62c7a2d2;

		constexpr static std::string_view EntityType_type_name = "EntityType";
		constexpr static rivet::rivet_type_id EntityType_type_id = 0xc43edf73;
		constexpr static std::string_view DialogTags_type_name = "DialogTags";
		constexpr static rivet::rivet_type_id DialogTags_type_id = 0x7c5dd1d8; 

		explicit EmergentVOBasePrius() = default;
		explicit EmergentVOBasePrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		std::string_view EntityType {};
		std::shared_ptr<rivet::ddl::generated::EmergentVOTagList> DialogTags {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<EmergentVOBasePrius>;
	};
} // namespace rivet::ddl::generated

// clang-format on
