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
	struct RIVET_DDL_SHARED Cinematic2MaterialReplaceInfo : rivet::structures::rivet_ddl_base {
		constexpr static std::string_view type_name = "Cinematic2MaterialReplaceInfo";
		constexpr static rivet::rivet_type_id type_id = 0x3d9b5ed1;

		constexpr static std::string_view MaterialMappingName_type_name = "MaterialMappingName";
		constexpr static rivet::rivet_type_id MaterialMappingName_type_id = 0x981e6927;
		constexpr static std::string_view MaterialAsset_type_name = "MaterialAsset";
		constexpr static rivet::rivet_type_id MaterialAsset_type_id = 0xf55a8ae3; 

		explicit Cinematic2MaterialReplaceInfo() = default;
		explicit Cinematic2MaterialReplaceInfo([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		std::string_view MaterialMappingName {};
		std::string_view MaterialAsset {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<Cinematic2MaterialReplaceInfo>;
	};
} // namespace rivet::ddl::generated

// clang-format on
