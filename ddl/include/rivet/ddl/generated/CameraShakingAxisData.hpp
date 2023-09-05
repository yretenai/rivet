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
	struct CameraShakingCurveData; 

	struct RIVET_DDL_SHARED CameraShakingAxisData : rivet::structures::rivet_ddl_base {
		constexpr const static std::string_view type_name = "CameraShakingAxisData";
		constexpr const static rivet::rivet_type_id type_id = 0x38a1bf9;

		constexpr const static std::string_view CurveOne_type_name = "CurveOne";
		constexpr const static rivet::rivet_type_id CurveOne_type_id = 0xfef79d5a;
		constexpr const static std::string_view CurveTwo_type_name = "CurveTwo";
		constexpr const static rivet::rivet_type_id CurveTwo_type_id = 0x955191cd;
		constexpr const static std::string_view CurveThree_type_name = "CurveThree";
		constexpr const static rivet::rivet_type_id CurveThree_type_id = 0xc08ae25f; 

		explicit CameraShakingAxisData() = default;
		explicit CameraShakingAxisData([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		std::shared_ptr<rivet::ddl::generated::CameraShakingCurveData> CurveOne {};
		std::shared_ptr<rivet::ddl::generated::CameraShakingCurveData> CurveTwo {};
		std::shared_ptr<rivet::ddl::generated::CameraShakingCurveData> CurveThree {}; 

		auto
		get_type_id() const noexcept -> rivet::rivet_type_id override;

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<CameraShakingAxisData>;
	};
} // namespace rivet::ddl::generated

// clang-format on
