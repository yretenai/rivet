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
	struct DDLTransform; 

	struct RIVET_DDL_SHARED RobotestPhysBodyInfo : rivet::structures::rivet_ddl_base {
		constexpr static std::string_view type_name = "RobotestPhysBodyInfo";
		constexpr static rivet::rivet_type_id type_id = 0xea85a4b4;

		constexpr static std::string_view BodyId_type_name = "BodyId";
		constexpr static rivet::rivet_type_id BodyId_type_id = 0x55e4c38f;
		constexpr static std::string_view BodyFlags_type_name = "BodyFlags";
		constexpr static rivet::rivet_type_id BodyFlags_type_id = 0x40983dcb;
		constexpr static std::string_view IsActive_type_name = "IsActive";
		constexpr static rivet::rivet_type_id IsActive_type_id = 0x70774ba8;
		constexpr static std::string_view IsDynamic_type_name = "IsDynamic";
		constexpr static rivet::rivet_type_id IsDynamic_type_id = 0xaf91c678;
		constexpr static std::string_view IsKeyFramed_type_name = "IsKeyFramed";
		constexpr static rivet::rivet_type_id IsKeyFramed_type_id = 0xa6537884;
		constexpr static std::string_view IsStatic_type_name = "IsStatic";
		constexpr static rivet::rivet_type_id IsStatic_type_id = 0xbba99f8f;
		constexpr static std::string_view CollisionFilterWord_type_name = "CollisionFilterWord";
		constexpr static rivet::rivet_type_id CollisionFilterWord_type_id = 0xfa6e54c7;
		constexpr static std::string_view MaterialId_type_name = "MaterialId";
		constexpr static rivet::rivet_type_id MaterialId_type_id = 0xddd29a99;
		constexpr static std::string_view Transform_type_name = "Transform";
		constexpr static rivet::rivet_type_id Transform_type_id = 0xf54f1ea1; 

		explicit RobotestPhysBodyInfo() = default;
		explicit RobotestPhysBodyInfo([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		uint32_t BodyId {};
		uint32_t BodyFlags {};
		bool IsActive {};
		bool IsDynamic {};
		bool IsKeyFramed {};
		bool IsStatic {};
		uint32_t CollisionFilterWord {};
		uint16_t MaterialId {};
		std::shared_ptr<rivet::ddl::generated::DDLTransform> Transform {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<RobotestPhysBodyInfo>;
	};
} // namespace rivet::ddl::generated

// clang-format on