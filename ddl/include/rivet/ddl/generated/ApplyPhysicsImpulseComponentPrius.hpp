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
	struct DDLVector3; 

	struct RIVET_DDL_SHARED ApplyPhysicsImpulseComponentPrius : rivet::structures::rivet_ddl_base {
		constexpr static std::string_view type_name = "ApplyPhysicsImpulseComponentPrius";
		constexpr static rivet::rivet_type_id type_id = 0x344ce380;

		constexpr static std::string_view Velocity_type_name = "Velocity";
		constexpr static rivet::rivet_type_id Velocity_type_id = 0x44d96bd9;
		constexpr static std::string_view Mass_type_name = "Mass";
		constexpr static rivet::rivet_type_id Mass_type_id = 0x5c939bd6;
		constexpr static std::string_view Radius_type_name = "Radius";
		constexpr static rivet::rivet_type_id Radius_type_id = 0x504203d; 

		explicit ApplyPhysicsImpulseComponentPrius() = default;
		explicit ApplyPhysicsImpulseComponentPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		std::shared_ptr<rivet::ddl::generated::DDLVector3> Velocity {};
		float Mass {};
		float Radius {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<ApplyPhysicsImpulseComponentPrius>;
	};
} // namespace rivet::ddl::generated

// clang-format on
