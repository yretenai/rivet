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

#include <rivet/ddl/generated/enums/x40742051.hpp> 

namespace rivet::ddl::generated {
	struct ProjectileThrowingPrius; 

	struct RIVET_DDL_SHARED ProjectileThrowingManagerEntry : rivet::structures::rivet_ddl_base {
		constexpr static std::string_view type_name = "ProjectileThrowingManagerEntry";
		constexpr static rivet::rivet_type_id type_id = 0x16f6ecad;

		constexpr static std::string_view ThrowType_type_name = "ThrowType";
		constexpr static rivet::rivet_type_id ThrowType_type_id = 0xebac52c;
		constexpr static std::string_view ThrowingComponent_type_name = "ThrowingComponent";
		constexpr static rivet::rivet_type_id ThrowingComponent_type_id = 0xc756c6c5; 

		explicit ProjectileThrowingManagerEntry() = default;
		explicit ProjectileThrowingManagerEntry([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		rivet::ddl::generated::x40742051 ThrowType {};
		std::shared_ptr<rivet::ddl::generated::ProjectileThrowingPrius> ThrowingComponent {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<ProjectileThrowingManagerEntry>;
	};
} // namespace rivet::ddl::generated

// clang-format on
