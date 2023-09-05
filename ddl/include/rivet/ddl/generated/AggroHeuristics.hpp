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
	struct RIVET_DDL_SHARED AggroHeuristics : rivet::structures::rivet_ddl_base {
		constexpr const static std::string_view type_name = "AggroHeuristics";
		constexpr const static rivet::rivet_type_id type_id = 0xfe00f59;

		constexpr const static std::string_view Weight_type_name = "Weight";
		constexpr const static rivet::rivet_type_id Weight_type_id = 0x39b51b26; 

		explicit AggroHeuristics() = default;
		explicit AggroHeuristics([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		float Weight {}; 

		auto
		get_type_id() const noexcept -> rivet::rivet_type_id override;

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<AggroHeuristics>;
	};
} // namespace rivet::ddl::generated

// clang-format on
