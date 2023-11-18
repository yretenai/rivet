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

#include <rivet/ddl/generated/enums/CameraType.hpp> 

namespace rivet::ddl::generated {
	struct CameraPerspectiveData; 

	struct RIVET_DDL_SHARED CameraAttribute : rivet::structures::rivet_ddl_base {
		constexpr static std::string_view type_name = "CameraAttribute";
		constexpr static rivet::rivet_type_id type_id = 0x696ece1d;

		constexpr static std::string_view CameraType_type_name = "CameraType";
		constexpr static rivet::rivet_type_id CameraType_type_id = 0x34041fcf;
		constexpr static std::string_view PerspectiveData_type_name = "PerspectiveData";
		constexpr static rivet::rivet_type_id PerspectiveData_type_id = 0x697c5113; 

		explicit CameraAttribute() = default;
		explicit CameraAttribute([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		rivet::ddl::generated::CameraType CameraType {};
		std::shared_ptr<rivet::ddl::generated::CameraPerspectiveData> PerspectiveData {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<CameraAttribute>;
	};
} // namespace rivet::ddl::generated

// clang-format on
