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

#include <rivet/ddl/generated/bitsets/xf32dacf0.hpp>
#include <rivet/ddl/generated/enums/x10228b34.hpp> 

namespace rivet::ddl::generated {
	struct RIVET_DDL_SHARED CheckPuzzleTargetTypeActionPrius : rivet::structures::rivet_ddl_base {
		constexpr static std::string_view type_name = "CheckPuzzleTargetTypeActionPrius";
		constexpr static rivet::rivet_type_id type_id = 0x4dce5228;

		constexpr static std::string_view ActionType_type_name = "ActionType";
		constexpr static rivet::rivet_type_id ActionType_type_id = 0x874b2194;
		constexpr static std::string_view TargetType_type_name = "TargetType";
		constexpr static rivet::rivet_type_id TargetType_type_id = 0x75a19d21; 

		explicit CheckPuzzleTargetTypeActionPrius() = default;
		explicit CheckPuzzleTargetTypeActionPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		rivet::ddl::generated::x10228b34 ActionType {};
		rivet::ddl::generated::xf32dacf0 TargetType {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<CheckPuzzleTargetTypeActionPrius>;
	};
} // namespace rivet::ddl::generated

// clang-format on
