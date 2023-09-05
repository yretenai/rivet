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
	struct DDLVector2; 

	struct RIVET_DDL_SHARED HoudiniHeightFieldMaskByFeatureData : rivet::structures::rivet_ddl_base {
		constexpr const static std::string_view type_name = "HoudiniHeightFieldMaskByFeatureData";
		constexpr const static rivet::rivet_type_id type_id = 0xb7f21df4;

		constexpr const static std::string_view MaskByCurvature_type_name = "MaskByCurvature";
		constexpr const static rivet::rivet_type_id MaskByCurvature_type_id = 0x369b9e2c;
		constexpr const static std::string_view ParamCurvatureMax_type_name = "ParamCurvatureMax";
		constexpr const static rivet::rivet_type_id ParamCurvatureMax_type_id = 0xb6160c9d;
		constexpr const static std::string_view MaskByDirection_type_name = "MaskByDirection";
		constexpr const static rivet::rivet_type_id MaskByDirection_type_id = 0xfbee1b54;
		constexpr const static std::string_view ParamDirectionAngle_type_name = "ParamDirectionAngle";
		constexpr const static rivet::rivet_type_id ParamDirectionAngle_type_id = 0x8c6b48b3;
		constexpr const static std::string_view ParamDirectionSpread_type_name = "ParamDirectionSpread";
		constexpr const static rivet::rivet_type_id ParamDirectionSpread_type_id = 0x858fff6a;
		constexpr const static std::string_view MaskByHeight_type_name = "MaskByHeight";
		constexpr const static rivet::rivet_type_id MaskByHeight_type_id = 0xddfeae1;
		constexpr const static std::string_view ParamHeightRange_type_name = "ParamHeightRange";
		constexpr const static rivet::rivet_type_id ParamHeightRange_type_id = 0x2aace294;
		constexpr const static std::string_view MaskByOcclusion_type_name = "MaskByOcclusion";
		constexpr const static rivet::rivet_type_id MaskByOcclusion_type_id = 0x7caa0568;
		constexpr const static std::string_view ParamOcclusionRange_type_name = "ParamOcclusionRange";
		constexpr const static rivet::rivet_type_id ParamOcclusionRange_type_id = 0xc82b0948;
		constexpr const static std::string_view MaskBySlope_type_name = "MaskBySlope";
		constexpr const static rivet::rivet_type_id MaskBySlope_type_id = 0xa707b27e;
		constexpr const static std::string_view ParamSlopeRange_type_name = "ParamSlopeRange";
		constexpr const static rivet::rivet_type_id ParamSlopeRange_type_id = 0xf0236470; 

		explicit HoudiniHeightFieldMaskByFeatureData() = default;
		explicit HoudiniHeightFieldMaskByFeatureData([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		bool MaskByCurvature {};
		float ParamCurvatureMax {};
		bool MaskByDirection {};
		float ParamDirectionAngle {};
		float ParamDirectionSpread {};
		bool MaskByHeight {};
		std::shared_ptr<rivet::ddl::generated::DDLVector2> ParamHeightRange {};
		bool MaskByOcclusion {};
		std::shared_ptr<rivet::ddl::generated::DDLVector2> ParamOcclusionRange {};
		bool MaskBySlope {};
		std::shared_ptr<rivet::ddl::generated::DDLVector2> ParamSlopeRange {}; 

		auto
		get_type_id() const noexcept -> rivet::rivet_type_id override;

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<HoudiniHeightFieldMaskByFeatureData>;
	};
} // namespace rivet::ddl::generated

// clang-format on
