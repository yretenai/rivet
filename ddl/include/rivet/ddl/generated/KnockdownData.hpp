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
	struct ScaleData; 

	struct RIVET_DDL_SHARED KnockdownData : rivet::structures::rivet_ddl_base {
		constexpr static std::string_view type_name = "KnockdownData";
		constexpr static rivet::rivet_type_id type_id = 0xa615951;

		constexpr static std::string_view Driver_type_name = "Driver";
		constexpr static rivet::rivet_type_id Driver_type_id = 0x2f1e32be;
		constexpr static std::string_view Normal_type_name = "Normal";
		constexpr static rivet::rivet_type_id Normal_type_id = 0x1ffd2683;
		constexpr static std::string_view Blast_type_name = "Blast";
		constexpr static rivet::rivet_type_id Blast_type_id = 0x571c694d; 

		explicit KnockdownData() = default;
		explicit KnockdownData([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		std::string_view Driver {};
		std::shared_ptr<rivet::ddl::generated::ScaleData> Normal {};
		std::shared_ptr<rivet::ddl::generated::ScaleData> Blast {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<KnockdownData>;
	};
} // namespace rivet::ddl::generated

// clang-format on
