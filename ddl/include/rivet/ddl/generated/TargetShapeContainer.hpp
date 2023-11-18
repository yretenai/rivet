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
	struct TargetShape; 

	struct RIVET_DDL_SHARED TargetShapeContainer : rivet::structures::rivet_ddl_base {
		constexpr static std::string_view type_name = "TargetShapeContainer";
		constexpr static rivet::rivet_type_id type_id = 0x93267cbe;

		constexpr static std::string_view Shape_type_name = "Shape";
		constexpr static rivet::rivet_type_id Shape_type_id = 0xc4633319; 

		explicit TargetShapeContainer() = default;
		explicit TargetShapeContainer([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		std::shared_ptr<rivet::ddl::generated::TargetShape> Shape {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<TargetShapeContainer>;
	};
} // namespace rivet::ddl::generated

// clang-format on
