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

#include <rivet/ddl/generated/enums/x10228b34.hpp> 

namespace rivet::ddl::generated {
	struct RIVET_DDL_SHARED OverrideHeroCameraAnimatorActionPrius : rivet::structures::rivet_ddl_base {
		constexpr static std::string_view type_name = "OverrideHeroCameraAnimatorActionPrius";
		constexpr static rivet::rivet_type_id type_id = 0x5f927f01;

		constexpr static std::string_view ActionType_type_name = "ActionType";
		constexpr static rivet::rivet_type_id ActionType_type_id = 0x874b2194;
		constexpr static std::string_view DriverName_type_name = "DriverName";
		constexpr static rivet::rivet_type_id DriverName_type_id = 0x7a8704f5; 

		explicit OverrideHeroCameraAnimatorActionPrius() = default;
		explicit OverrideHeroCameraAnimatorActionPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		rivet::ddl::generated::x10228b34 ActionType {};
		std::string_view DriverName {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<OverrideHeroCameraAnimatorActionPrius>;
	};
} // namespace rivet::ddl::generated

// clang-format on
