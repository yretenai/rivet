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
	struct RIVET_DDL_SHARED AnimSetSequenceFilterDef : rivet::structures::rivet_ddl_base {
		constexpr static std::string_view type_name = "AnimSetSequenceFilterDef";
		constexpr static rivet::rivet_type_id type_id = 0x6880091e;

		constexpr static std::string_view Id_type_name = "Id";
		constexpr static rivet::rivet_type_id Id_type_id = 0x8a514a8d;
		constexpr static std::string_view Time_type_name = "Time";
		constexpr static rivet::rivet_type_id Time_type_id = 0x5f0458f5;
		constexpr static std::string_view FilterGroupName_type_name = "FilterGroupName";
		constexpr static rivet::rivet_type_id FilterGroupName_type_id = 0xa25d3255;
		constexpr static std::string_view FilterIdName_type_name = "FilterIdName";
		constexpr static rivet::rivet_type_id FilterIdName_type_id = 0x4a75024d; 

		explicit AnimSetSequenceFilterDef() = default;
		explicit AnimSetSequenceFilterDef([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		uint64_t Id {};
		float Time {};
		std::string_view FilterGroupName {};
		std::string_view FilterIdName {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<AnimSetSequenceFilterDef>;
	};
} // namespace rivet::ddl::generated

// clang-format on