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
	struct RIVET_DDL_SHARED TargetShapeOBB : rivet::structures::rivet_ddl_base {
		constexpr static std::string_view type_name = "TargetShapeOBB";
		constexpr static rivet::rivet_type_id type_id = 0xfc737cbb;

		constexpr static std::string_view SizeX_type_name = "SizeX";
		constexpr static rivet::rivet_type_id SizeX_type_id = 0x371b2e8;
		constexpr static std::string_view SizeY_type_name = "SizeY";
		constexpr static rivet::rivet_type_id SizeY_type_id = 0x7476827e;
		constexpr static std::string_view SizeZ_type_name = "SizeZ";
		constexpr static rivet::rivet_type_id SizeZ_type_id = 0xed7fd3c4; 

		explicit TargetShapeOBB() = default;
		explicit TargetShapeOBB([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		float SizeX {};
		float SizeY {};
		float SizeZ {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<TargetShapeOBB>;
	};
} // namespace rivet::ddl::generated

// clang-format on
