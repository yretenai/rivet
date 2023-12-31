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

#include <rivet/ddl/generated/enums/x2c44a864.hpp> 

namespace rivet::ddl::generated {
	struct RIVET_DDL_SHARED CameraAnimIdlerPrius : rivet::structures::rivet_ddl_base {
		constexpr static std::string_view type_name = "CameraAnimIdlerPrius";
		constexpr static rivet::rivet_type_id type_id = 0x7cdbef64;

		constexpr static std::string_view IdleAnim_type_name = "IdleAnim";
		constexpr static rivet::rivet_type_id IdleAnim_type_id = 0xe747921a;
		constexpr static std::string_view CameraAnimName_type_name = "CameraAnimName";
		constexpr static rivet::rivet_type_id CameraAnimName_type_id = 0x2152a015; 

		explicit CameraAnimIdlerPrius() = default;
		explicit CameraAnimIdlerPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		rivet::ddl::generated::x2c44a864 IdleAnim {};
		std::string_view CameraAnimName {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<CameraAnimIdlerPrius>;
	};
} // namespace rivet::ddl::generated

// clang-format on
