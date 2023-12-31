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

#include <rivet/ddl/generated/enums/WeightSpreadScheme.hpp> 

namespace rivet::ddl::generated {
	struct RIVET_DDL_SHARED FocusTrackingSolverData : rivet::structures::rivet_ddl_base {
		constexpr static std::string_view type_name = "FocusTrackingSolverData";
		constexpr static rivet::rivet_type_id type_id = 0x2bd53253;

		constexpr static std::string_view JointChain_type_name = "JointChain";
		constexpr static rivet::rivet_type_id JointChain_type_id = 0x4fdcefaf;
		constexpr static std::string_view EndEffectorJoint_type_name = "EndEffectorJoint";
		constexpr static rivet::rivet_type_id EndEffectorJoint_type_id = 0xd003d36c;
		constexpr static std::string_view FocusPositionName_type_name = "FocusPositionName";
		constexpr static rivet::rivet_type_id FocusPositionName_type_id = 0xfd2be175;
		constexpr static std::string_view PollRefPoseEveryTick_type_name = "PollRefPoseEveryTick";
		constexpr static rivet::rivet_type_id PollRefPoseEveryTick_type_id = 0x990982de;
		constexpr static std::string_view ReferencePoseTime_type_name = "ReferencePoseTime";
		constexpr static rivet::rivet_type_id ReferencePoseTime_type_id = 0x45631e85;
		constexpr static std::string_view SetEndEffectorFwdToModelFwd_type_name = "SetEndEffectorFwdToModelFwd";
		constexpr static rivet::rivet_type_id SetEndEffectorFwdToModelFwd_type_id = 0x2c5f605b;
		constexpr static std::string_view MinYawAngle_type_name = "MinYawAngle";
		constexpr static rivet::rivet_type_id MinYawAngle_type_id = 0xb2a54151;
		constexpr static std::string_view MaxYawAngle_type_name = "MaxYawAngle";
		constexpr static rivet::rivet_type_id MaxYawAngle_type_id = 0x7ea83a5e;
		constexpr static std::string_view MinPitchAngle_type_name = "MinPitchAngle";
		constexpr static rivet::rivet_type_id MinPitchAngle_type_id = 0xf6de9d12;
		constexpr static std::string_view MaxPitchAngle_type_name = "MaxPitchAngle";
		constexpr static rivet::rivet_type_id MaxPitchAngle_type_id = 0xb691e564;
		constexpr static std::string_view WeightSpreadScheme_type_name = "WeightSpreadScheme";
		constexpr static rivet::rivet_type_id WeightSpreadScheme_type_id = 0xab2ca92f; 

		explicit FocusTrackingSolverData() = default;
		explicit FocusTrackingSolverData([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		std::string_view JointChain {};
		std::string_view EndEffectorJoint {};
		std::string_view FocusPositionName {};
		bool PollRefPoseEveryTick {};
		float ReferencePoseTime {};
		bool SetEndEffectorFwdToModelFwd {};
		float MinYawAngle {};
		float MaxYawAngle {};
		float MinPitchAngle {};
		float MaxPitchAngle {};
		rivet::ddl::generated::WeightSpreadScheme WeightSpreadScheme {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<FocusTrackingSolverData>;
	};
} // namespace rivet::ddl::generated

// clang-format on
