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
	struct VehicleMergeDistance; 

	struct RIVET_DDL_SHARED VehicleCurveGeneratorInfo : rivet::structures::rivet_ddl_base {
		constexpr const static std::string_view type_name = "VehicleCurveGeneratorInfo";
		constexpr const static rivet::rivet_type_id type_id = 0xab328a16;

		constexpr const static std::string_view MaxPositionHistoryPoints_type_name = "MaxPositionHistoryPoints";
		constexpr const static rivet::rivet_type_id MaxPositionHistoryPoints_type_id = 0xbac5525b;
		constexpr const static std::string_view PositionHistorySegmentLength_type_name = "PositionHistorySegmentLength";
		constexpr const static rivet::rivet_type_id PositionHistorySegmentLength_type_id = 0x29e94dde;
		constexpr const static std::string_view MaxBlendPoints_type_name = "MaxBlendPoints";
		constexpr const static rivet::rivet_type_id MaxBlendPoints_type_id = 0x31a0f338;
		constexpr const static std::string_view BlendSegmentLength_type_name = "BlendSegmentLength";
		constexpr const static rivet::rivet_type_id BlendSegmentLength_type_id = 0x9f770578;
		constexpr const static std::string_view MaxDestinationNodes_type_name = "MaxDestinationNodes";
		constexpr const static rivet::rivet_type_id MaxDestinationNodes_type_id = 0x4213209d;
		constexpr const static std::string_view CurveRegenMinT_type_name = "CurveRegenMinT";
		constexpr const static rivet::rivet_type_id CurveRegenMinT_type_id = 0x7029e4e3;
		constexpr const static std::string_view MergeBezierPoints_type_name = "MergeBezierPoints";
		constexpr const static rivet::rivet_type_id MergeBezierPoints_type_id = 0x68c523b5;
		constexpr const static std::string_view MergeBezierSpeedCoeff_type_name = "MergeBezierSpeedCoeff";
		constexpr const static rivet::rivet_type_id MergeBezierSpeedCoeff_type_id = 0x307da7a9;
		constexpr const static std::string_view MinPostMergeDistance_type_name = "MinPostMergeDistance";
		constexpr const static rivet::rivet_type_id MinPostMergeDistance_type_id = 0xaa7a813c;
		constexpr const static std::string_view BezierMergeDistances_type_name = "BezierMergeDistances";
		constexpr const static rivet::rivet_type_id BezierMergeDistances_type_id = 0x3a65202e; 

		explicit VehicleCurveGeneratorInfo() = default;
		explicit VehicleCurveGeneratorInfo([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		uint16_t MaxPositionHistoryPoints {};
		float PositionHistorySegmentLength {};
		uint16_t MaxBlendPoints {};
		float BlendSegmentLength {};
		uint16_t MaxDestinationNodes {};
		float CurveRegenMinT {};
		uint16_t MergeBezierPoints {};
		float MergeBezierSpeedCoeff {};
		float MinPostMergeDistance {};
		std::vector<std::shared_ptr<rivet::ddl::generated::VehicleMergeDistance>> BezierMergeDistances {}; 

		auto
		get_type_id() const noexcept -> rivet::rivet_type_id override;

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<VehicleCurveGeneratorInfo>;
	};
} // namespace rivet::ddl::generated

// clang-format on
