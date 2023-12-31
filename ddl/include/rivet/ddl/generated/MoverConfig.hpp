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

#include <rivet/ddl/generated/ConfigBase.hpp> 

namespace rivet::ddl::generated {
	struct MoverBodySize; 

	struct RIVET_DDL_SHARED MoverConfig : ConfigBase {
		constexpr static std::string_view type_name = "MoverConfig";
		constexpr static rivet::rivet_type_id type_id = 0x5f563a9e;

		constexpr static std::string_view Gravity_type_name = "Gravity";
		constexpr static rivet::rivet_type_id Gravity_type_id = 0x5bf7469f;
		constexpr static std::string_view TerminalVelocity_type_name = "TerminalVelocity";
		constexpr static rivet::rivet_type_id TerminalVelocity_type_id = 0x8424e464;
		constexpr static std::string_view TurnGain_type_name = "TurnGain";
		constexpr static rivet::rivet_type_id TurnGain_type_id = 0x38623a3b;
		constexpr static std::string_view TurnDamp_type_name = "TurnDamp";
		constexpr static rivet::rivet_type_id TurnDamp_type_id = 0xb4b46db2;
		constexpr static std::string_view TurnSpeed_type_name = "TurnSpeed";
		constexpr static rivet::rivet_type_id TurnSpeed_type_id = 0x6cc70f48;
		constexpr static std::string_view StepUpHeight_type_name = "StepUpHeight";
		constexpr static rivet::rivet_type_id StepUpHeight_type_id = 0xd094ec68;
		constexpr static std::string_view StepDownHeight_type_name = "StepDownHeight";
		constexpr static rivet::rivet_type_id StepDownHeight_type_id = 0xbc74600;
		constexpr static std::string_view GoodGroundSlope_type_name = "GoodGroundSlope";
		constexpr static rivet::rivet_type_id GoodGroundSlope_type_id = 0xa8ff9570;
		constexpr static std::string_view ExternalMotionExtraGroundTime_type_name = "ExternalMotionExtraGroundTime";
		constexpr static rivet::rivet_type_id ExternalMotionExtraGroundTime_type_id = 0x50fece86;
		constexpr static std::string_view MaxHeightFail_type_name = "MaxHeightFail";
		constexpr static rivet::rivet_type_id MaxHeightFail_type_id = 0x7b4c57f1;
		constexpr static std::string_view OrientGain_type_name = "OrientGain";
		constexpr static rivet::rivet_type_id OrientGain_type_id = 0xbf602f34;
		constexpr static std::string_view OrientDamp_type_name = "OrientDamp";
		constexpr static rivet::rivet_type_id OrientDamp_type_id = 0x33b678bd;
		constexpr static std::string_view DefaultBodySize_type_name = "DefaultBodySize";
		constexpr static rivet::rivet_type_id DefaultBodySize_type_id = 0xe753ddfa; 

		explicit MoverConfig() = default;
		explicit MoverConfig([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		float Gravity {};
		float TerminalVelocity {};
		float TurnGain {};
		float TurnDamp {};
		float TurnSpeed {};
		float StepUpHeight {};
		float StepDownHeight {};
		float GoodGroundSlope {};
		float ExternalMotionExtraGroundTime {};
		float MaxHeightFail {};
		float OrientGain {};
		float OrientDamp {};
		std::shared_ptr<rivet::ddl::generated::MoverBodySize> DefaultBodySize {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<MoverConfig>;
	};
} // namespace rivet::ddl::generated

// clang-format on
