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
	struct RIVET_DDL_SHARED SimplePropManagerPrius : rivet::structures::rivet_ddl_base {
		constexpr static std::string_view type_name = "SimplePropManagerPrius";
		constexpr static rivet::rivet_type_id type_id = 0xc8056f95;

		constexpr static std::string_view PropConfig_type_name = "PropConfig";
		constexpr static rivet::rivet_type_id PropConfig_type_id = 0x97e7b151;
		constexpr static std::string_view MatchPropDriverTime_type_name = "MatchPropDriverTime";
		constexpr static rivet::rivet_type_id MatchPropDriverTime_type_id = 0xf65f6fd6; 

		explicit SimplePropManagerPrius() = default;
		explicit SimplePropManagerPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		std::string_view PropConfig {};
		bool MatchPropDriverTime {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<SimplePropManagerPrius>;
	};
} // namespace rivet::ddl::generated

// clang-format on