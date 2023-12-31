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
	struct RIVET_DDL_SHARED CameraContextVolumePrius : rivet::structures::rivet_ddl_base {
		constexpr static std::string_view type_name = "CameraContextVolumePrius";
		constexpr static rivet::rivet_type_id type_id = 0x6eb23002;

		constexpr static std::string_view CameraContextConfig_type_name = "CameraContextConfig";
		constexpr static rivet::rivet_type_id CameraContextConfig_type_id = 0xa47e522c;
		constexpr static std::string_view CameraContextAimConfig_type_name = "CameraContextAimConfig";
		constexpr static rivet::rivet_type_id CameraContextAimConfig_type_id = 0x598c5a79;
		constexpr static std::string_view ApplyGround_type_name = "ApplyGround";
		constexpr static rivet::rivet_type_id ApplyGround_type_id = 0x9ecee873;
		constexpr static std::string_view ApplyTraversal_type_name = "ApplyTraversal";
		constexpr static rivet::rivet_type_id ApplyTraversal_type_id = 0x93ddaf4d; 

		explicit CameraContextVolumePrius() = default;
		explicit CameraContextVolumePrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		std::string_view CameraContextConfig {};
		std::string_view CameraContextAimConfig {};
		bool ApplyGround {};
		bool ApplyTraversal {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<CameraContextVolumePrius>;
	};
} // namespace rivet::ddl::generated

// clang-format on
