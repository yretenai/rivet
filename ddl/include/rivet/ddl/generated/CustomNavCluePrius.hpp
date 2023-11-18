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

#include <rivet/ddl/generated/bitsets/x117c3bf3.hpp>
#include <rivet/ddl/generated/bitsets/x729ef36c.hpp> 

namespace rivet::ddl::generated {
	struct RIVET_DDL_SHARED CustomNavCluePrius : rivet::structures::rivet_ddl_base {
		constexpr static std::string_view type_name = "CustomNavCluePrius";
		constexpr static rivet::rivet_type_id type_id = 0xa312a7aa;

		constexpr static std::string_view TargetNavClue_type_name = "TargetNavClue";
		constexpr static rivet::rivet_type_id TargetNavClue_type_id = 0x54de279f;
		constexpr static std::string_view TargetHelper_type_name = "TargetHelper";
		constexpr static rivet::rivet_type_id TargetHelper_type_id = 0x75863196;
		constexpr static std::string_view RequiredAbilities_type_name = "RequiredAbilities";
		constexpr static rivet::rivet_type_id RequiredAbilities_type_id = 0xc66b4c36;
		constexpr static std::string_view RequiredEntityType_type_name = "RequiredEntityType";
		constexpr static rivet::rivet_type_id RequiredEntityType_type_id = 0xd375cf6e; 

		explicit CustomNavCluePrius() = default;
		explicit CustomNavCluePrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		uint64_t TargetNavClue {};
		uint64_t TargetHelper {};
		rivet::ddl::generated::x729ef36c RequiredAbilities {};
		rivet::ddl::generated::x117c3bf3 RequiredEntityType {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<CustomNavCluePrius>;
	};
} // namespace rivet::ddl::generated

// clang-format on
