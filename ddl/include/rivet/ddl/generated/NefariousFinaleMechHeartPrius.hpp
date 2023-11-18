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

#include <rivet/ddl/generated/DamageModifierIncomingPrius.hpp> 

namespace rivet::ddl::generated {
	struct NefariousFinaleMechHeartWeakspotData; 

	struct RIVET_DDL_SHARED NefariousFinaleMechHeartPrius : DamageModifierIncomingPrius {
		constexpr static std::string_view type_name = "NefariousFinaleMechHeartPrius";
		constexpr static rivet::rivet_type_id type_id = 0x18fbe1b3;

		constexpr static std::string_view HeartBaseHealth_type_name = "HeartBaseHealth";
		constexpr static rivet::rivet_type_id HeartBaseHealth_type_id = 0x56acb646;
		constexpr static std::string_view HeartLaserPhaseHealth_type_name = "HeartLaserPhaseHealth";
		constexpr static rivet::rivet_type_id HeartLaserPhaseHealth_type_id = 0xb0570c28;
		constexpr static std::string_view HitShader_type_name = "HitShader";
		constexpr static rivet::rivet_type_id HitShader_type_id = 0x1d51dd0b;
		constexpr static std::string_view HitShaderDuration_type_name = "HitShaderDuration";
		constexpr static rivet::rivet_type_id HitShaderDuration_type_id = 0xd2d7cb4d;
		constexpr static std::string_view Chamber1_NodeA_Data_type_name = "Chamber1_NodeA_Data";
		constexpr static rivet::rivet_type_id Chamber1_NodeA_Data_type_id = 0x319d26e5;
		constexpr static std::string_view Chamber1_NodeB_Data_type_name = "Chamber1_NodeB_Data";
		constexpr static rivet::rivet_type_id Chamber1_NodeB_Data_type_id = 0xb709544b;
		constexpr static std::string_view Chamber2_NodeA_Data_type_name = "Chamber2_NodeA_Data";
		constexpr static rivet::rivet_type_id Chamber2_NodeA_Data_type_id = 0x4603f415;
		constexpr static std::string_view Chamber2_NodeB_Data_type_name = "Chamber2_NodeB_Data";
		constexpr static rivet::rivet_type_id Chamber2_NodeB_Data_type_id = 0xc09786bb;
		constexpr static std::string_view Chamber3_NodeA_Data_type_name = "Chamber3_NodeA_Data";
		constexpr static rivet::rivet_type_id Chamber3_NodeA_Data_type_id = 0xdda6b87a;
		constexpr static std::string_view Chamber3_NodeB_Data_type_name = "Chamber3_NodeB_Data";
		constexpr static rivet::rivet_type_id Chamber3_NodeB_Data_type_id = 0x5b32cad4;
		constexpr static std::string_view HeartCore_Data_type_name = "HeartCore_Data";
		constexpr static rivet::rivet_type_id HeartCore_Data_type_id = 0x9e7c97e3;
		constexpr static std::string_view WeakSpotDummyActor_type_name = "WeakSpotDummyActor";
		constexpr static rivet::rivet_type_id WeakSpotDummyActor_type_id = 0x754b91e9; 

		explicit NefariousFinaleMechHeartPrius() = default;
		explicit NefariousFinaleMechHeartPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		float HeartBaseHealth {};
		float HeartLaserPhaseHealth {};
		std::string_view HitShader {};
		float HitShaderDuration {};
		std::shared_ptr<rivet::ddl::generated::NefariousFinaleMechHeartWeakspotData> Chamber1_NodeA_Data {};
		std::shared_ptr<rivet::ddl::generated::NefariousFinaleMechHeartWeakspotData> Chamber1_NodeB_Data {};
		std::shared_ptr<rivet::ddl::generated::NefariousFinaleMechHeartWeakspotData> Chamber2_NodeA_Data {};
		std::shared_ptr<rivet::ddl::generated::NefariousFinaleMechHeartWeakspotData> Chamber2_NodeB_Data {};
		std::shared_ptr<rivet::ddl::generated::NefariousFinaleMechHeartWeakspotData> Chamber3_NodeA_Data {};
		std::shared_ptr<rivet::ddl::generated::NefariousFinaleMechHeartWeakspotData> Chamber3_NodeB_Data {};
		std::shared_ptr<rivet::ddl::generated::NefariousFinaleMechHeartWeakspotData> HeartCore_Data {};
		std::string_view WeakSpotDummyActor {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<NefariousFinaleMechHeartPrius>;
	};
} // namespace rivet::ddl::generated

// clang-format on
