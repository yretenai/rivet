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

#include <rivet/ddl/generated/enums/x603b1ec6.hpp> 

namespace rivet::ddl::generated {
	struct RIVET_DDL_SHARED CurveControllerPrius : rivet::structures::rivet_ddl_base {
		constexpr static std::string_view type_name = "CurveControllerPrius";
		constexpr static rivet::rivet_type_id type_id = 0x71a68a29;

		constexpr static std::string_view EnableRotation_type_name = "EnableRotation";
		constexpr static rivet::rivet_type_id EnableRotation_type_id = 0xacc0b58c;
		constexpr static std::string_view EnableStretch_type_name = "EnableStretch";
		constexpr static rivet::rivet_type_id EnableStretch_type_id = 0xd7832a77;
		constexpr static std::string_view RotationType_type_name = "RotationType";
		constexpr static rivet::rivet_type_id RotationType_type_id = 0xe380f68b; 

		explicit CurveControllerPrius() = default;
		explicit CurveControllerPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		bool EnableRotation {};
		bool EnableStretch {};
		rivet::ddl::generated::x603b1ec6 RotationType {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<CurveControllerPrius>;
	};
} // namespace rivet::ddl::generated

// clang-format on
