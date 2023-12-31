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
	struct RIVET_DDL_SHARED PriortizedActivity : rivet::structures::rivet_ddl_base {
		constexpr static std::string_view type_name = "PriortizedActivity";
		constexpr static rivet::rivet_type_id type_id = 0x92603956;

		constexpr static std::string_view activityId_type_name = "activityId";
		constexpr static rivet::rivet_type_id activityId_type_id = 0x875ebf15;
		constexpr static std::string_view priority_type_name = "priority";
		constexpr static rivet::rivet_type_id priority_type_id = 0x61d10301; 

		explicit PriortizedActivity() = default;
		explicit PriortizedActivity([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		std::string_view activityId {};
		int32_t priority {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<PriortizedActivity>;
	};
} // namespace rivet::ddl::generated

// clang-format on
