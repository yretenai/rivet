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

#include <rivet/ddl/generated/enums/xf93e2b39.hpp> 

namespace rivet::ddl::generated {
	struct RIVET_DDL_SHARED SimpleRotatingPrius : rivet::structures::rivet_ddl_base {
		constexpr static std::string_view type_name = "SimpleRotatingPrius";
		constexpr static rivet::rivet_type_id type_id = 0xf2976f75;

		constexpr static std::string_view RotationAxis_type_name = "RotationAxis";
		constexpr static rivet::rivet_type_id RotationAxis_type_id = 0xea512758;
		constexpr static std::string_view RotationSpeed_type_name = "RotationSpeed";
		constexpr static rivet::rivet_type_id RotationSpeed_type_id = 0xe5938d1e; 

		explicit SimpleRotatingPrius() = default;
		explicit SimpleRotatingPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		rivet::ddl::generated::xf93e2b39 RotationAxis {};
		float RotationSpeed {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<SimpleRotatingPrius>;
	};
} // namespace rivet::ddl::generated

// clang-format on
