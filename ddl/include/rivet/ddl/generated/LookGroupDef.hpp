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
	struct LookDef; 

	struct RIVET_DDL_SHARED LookGroupDef : rivet::structures::rivet_ddl_base {
		constexpr static std::string_view type_name = "LookGroupDef";
		constexpr static rivet::rivet_type_id type_id = 0x983dfbd5;

		constexpr static std::string_view Name_type_name = "Name";
		constexpr static rivet::rivet_type_id Name_type_id = 0x6eb3beb6;
		constexpr static std::string_view Looks_type_name = "Looks";
		constexpr static rivet::rivet_type_id Looks_type_id = 0xec785832; 

		explicit LookGroupDef() = default;
		explicit LookGroupDef([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		std::string_view Name {};
		std::vector<std::shared_ptr<rivet::ddl::generated::LookDef>> Looks {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<LookGroupDef>;
	};
} // namespace rivet::ddl::generated

// clang-format on
