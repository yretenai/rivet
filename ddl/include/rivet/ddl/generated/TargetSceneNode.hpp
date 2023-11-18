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

	struct RIVET_DDL_SHARED TargetSceneNode : rivet::structures::rivet_ddl_base {
		constexpr static std::string_view type_name = "TargetSceneNode";
		constexpr static rivet::rivet_type_id type_id = 0xba99e6f3;

		constexpr static std::string_view Id_type_name = "Id";
		constexpr static rivet::rivet_type_id Id_type_id = 0x8a514a8d;
		constexpr static std::string_view AssetPath_type_name = "AssetPath";
		constexpr static rivet::rivet_type_id AssetPath_type_id = 0xefa614b;
		constexpr static std::string_view AdjustCamera_type_name = "AdjustCamera";
		constexpr static rivet::rivet_type_id AdjustCamera_type_id = 0x20da01ca;
		constexpr static std::string_view OldCameraPosition_type_name = "OldCameraPosition";
		constexpr static rivet::rivet_type_id OldCameraPosition_type_id = 0x7991d18a;
		constexpr static std::string_view OldCameraForward_type_name = "OldCameraForward";
		constexpr static rivet::rivet_type_id OldCameraForward_type_id = 0xe0c8fd06;
		constexpr static std::string_view NewCameraPosition_type_name = "NewCameraPosition";
		constexpr static rivet::rivet_type_id NewCameraPosition_type_id = 0x7653e121;
		constexpr static std::string_view NewCameraForward_type_name = "NewCameraForward";
		constexpr static rivet::rivet_type_id NewCameraForward_type_id = 0x2201624f;
		constexpr static std::string_view PreviousSelection_type_name = "PreviousSelection";
		constexpr static rivet::rivet_type_id PreviousSelection_type_id = 0x6c58f6d6; 

		explicit TargetSceneNode() = default;
		explicit TargetSceneNode([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		uint64_t Id {};
		std::string_view AssetPath {};
		bool AdjustCamera {};
		std::shared_ptr<rivet::ddl::generated::DDLVector3> OldCameraPosition {};
		std::shared_ptr<rivet::ddl::generated::DDLVector3> OldCameraForward {};
		std::shared_ptr<rivet::ddl::generated::DDLVector3> NewCameraPosition {};
		std::shared_ptr<rivet::ddl::generated::DDLVector3> NewCameraForward {};
		uint64_t PreviousSelection {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<TargetSceneNode>;
	};
} // namespace rivet::ddl::generated

// clang-format on
