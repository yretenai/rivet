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

#include <rivet/ddl/generated/CameraRotatorBasePrius.hpp> 

namespace rivet::ddl::generated {
	struct DDLVector3; 

	struct RIVET_DDL_SHARED CameraRotatorTargetedPrius : CameraRotatorBasePrius {
		constexpr static std::string_view type_name = "CameraRotatorTargetedPrius";
		constexpr static rivet::rivet_type_id type_id = 0xe8c17d3b;

		constexpr static std::string_view TargetOffset_type_name = "TargetOffset";
		constexpr static rivet::rivet_type_id TargetOffset_type_id = 0xabbb80f6; 

		explicit CameraRotatorTargetedPrius() = default;
		explicit CameraRotatorTargetedPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		std::shared_ptr<rivet::ddl::generated::DDLVector3> TargetOffset {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<CameraRotatorTargetedPrius>;
	};
} // namespace rivet::ddl::generated

// clang-format on
