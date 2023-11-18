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

#include <rivet/ddl/generated/enums/x81d3e717.hpp> 

namespace rivet::ddl::generated {
	struct ActivityHint; 

	struct RIVET_DDL_SHARED PlanetRYNOPlan : rivet::structures::rivet_ddl_base {
		constexpr static std::string_view type_name = "PlanetRYNOPlan";
		constexpr static rivet::rivet_type_id type_id = 0xc4824f33;

		constexpr static std::string_view SaveId_type_name = "SaveId";
		constexpr static rivet::rivet_type_id SaveId_type_id = 0xcd7269d0;
		constexpr static std::string_view NameTag_type_name = "NameTag";
		constexpr static rivet::rivet_type_id NameTag_type_id = 0x2d78cbbd;
		constexpr static std::string_view DefaultPlaytimeEstimate_type_name = "DefaultPlaytimeEstimate";
		constexpr static rivet::rivet_type_id DefaultPlaytimeEstimate_type_id = 0xa76d47a6;
		constexpr static std::string_view Hints_type_name = "Hints";
		constexpr static rivet::rivet_type_id Hints_type_id = 0xf00bc587; 

		explicit PlanetRYNOPlan() = default;
		explicit PlanetRYNOPlan([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		rivet::ddl::generated::x81d3e717 SaveId {};
		std::string_view NameTag {};
		uint32_t DefaultPlaytimeEstimate {};
		std::vector<std::shared_ptr<rivet::ddl::generated::ActivityHint>> Hints {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<PlanetRYNOPlan>;
	};
} // namespace rivet::ddl::generated

// clang-format on
