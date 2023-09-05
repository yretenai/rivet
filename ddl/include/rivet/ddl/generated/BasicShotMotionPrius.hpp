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

#include <rivet/ddl/generated/ShotMotionBasePrius.hpp> 

namespace rivet::ddl::generated {
	struct FireFromLookData;
	struct DDLVector3; 

	struct RIVET_DDL_SHARED BasicShotMotionPrius : ShotMotionBasePrius {
		constexpr const static std::string_view type_name = "BasicShotMotionPrius";
		constexpr const static rivet::rivet_type_id type_id = 0x4bccd259;

		constexpr const static std::string_view FireFromLookPositionData_type_name = "FireFromLookPositionData";
		constexpr const static rivet::rivet_type_id FireFromLookPositionData_type_id = 0x3a7d57a3;
		constexpr const static std::string_view EmitSimOffset_type_name = "EmitSimOffset";
		constexpr const static rivet::rivet_type_id EmitSimOffset_type_id = 0xc069a8a0; 

		explicit BasicShotMotionPrius() = default;
		explicit BasicShotMotionPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		std::shared_ptr<rivet::ddl::generated::FireFromLookData> FireFromLookPositionData {};
		std::shared_ptr<rivet::ddl::generated::DDLVector3> EmitSimOffset {}; 

		auto
		get_type_id() const noexcept -> rivet::rivet_type_id override;

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<BasicShotMotionPrius>;
	};
} // namespace rivet::ddl::generated

// clang-format on
