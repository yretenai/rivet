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

	struct RIVET_DDL_SHARED DDLTransform : rivet::structures::rivet_ddl_base {
		constexpr static std::string_view type_name = "DDLTransform";
		constexpr static rivet::rivet_type_id type_id = 0x6252337b;

		constexpr static std::string_view Position_type_name = "Position";
		constexpr static rivet::rivet_type_id Position_type_id = 0xbc2d5985;
		constexpr static std::string_view EulerRotation_type_name = "EulerRotation";
		constexpr static rivet::rivet_type_id EulerRotation_type_id = 0x99453ee8;
		constexpr static std::string_view Scale_type_name = "Scale";
		constexpr static rivet::rivet_type_id Scale_type_id = 0xf515e945;
		constexpr static std::string_view Shear_type_name = "Shear";
		constexpr static rivet::rivet_type_id Shear_type_id = 0x13603d12; 

		explicit DDLTransform() = default;
		explicit DDLTransform([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		std::shared_ptr<rivet::ddl::generated::DDLVector3> Position {};
		std::shared_ptr<rivet::ddl::generated::DDLVector3> EulerRotation {};
		std::shared_ptr<rivet::ddl::generated::DDLVector3> Scale {};
		std::shared_ptr<rivet::ddl::generated::DDLVector3> Shear {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<DDLTransform>;
	};
} // namespace rivet::ddl::generated

// clang-format on
