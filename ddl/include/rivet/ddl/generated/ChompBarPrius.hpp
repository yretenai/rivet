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
	struct RIVET_DDL_SHARED ChompBarPrius : rivet::structures::rivet_ddl_base {
		constexpr static std::string_view type_name = "ChompBarPrius";
		constexpr static rivet::rivet_type_id type_id = 0x9f08f2d7;

		constexpr static std::string_view ChompDistance_type_name = "ChompDistance";
		constexpr static rivet::rivet_type_id ChompDistance_type_id = 0x3a3a0124; 

		explicit ChompBarPrius() = default;
		explicit ChompBarPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		float ChompDistance {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<ChompBarPrius>;
	};
} // namespace rivet::ddl::generated

// clang-format on
