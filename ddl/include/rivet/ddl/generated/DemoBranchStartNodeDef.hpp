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

#include <rivet/ddl/generated/BranchStartNodeBaseDef.hpp> 

namespace rivet::ddl::generated {
	struct OutputPlugBoolean; 

	struct RIVET_DDL_SHARED DemoBranchStartNodeDef : BranchStartNodeBaseDef {
		constexpr static std::string_view type_name = "DemoBranchStartNodeDef";
		constexpr static rivet::rivet_type_id type_id = 0xdaae9981;

		constexpr static std::string_view Demo_type_name = "Demo";
		constexpr static rivet::rivet_type_id Demo_type_id = 0xe6d21f10;
		constexpr static std::string_view NotDemo_type_name = "NotDemo";
		constexpr static rivet::rivet_type_id NotDemo_type_id = 0xe5cbdffc; 

		explicit DemoBranchStartNodeDef() = default;
		explicit DemoBranchStartNodeDef([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		std::shared_ptr<rivet::ddl::generated::OutputPlugBoolean> Demo {};
		std::shared_ptr<rivet::ddl::generated::OutputPlugBoolean> NotDemo {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<DemoBranchStartNodeDef>;
	};
} // namespace rivet::ddl::generated

// clang-format on
