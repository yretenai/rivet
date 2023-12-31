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

#include <rivet/ddl/generated/enums/x9675aa42.hpp> 

namespace rivet::ddl::generated {
	struct RIVET_DDL_SHARED AnimControllerComponentPrius : rivet::structures::rivet_ddl_base {
		constexpr static std::string_view type_name = "AnimControllerComponentPrius";
		constexpr static rivet::rivet_type_id type_id = 0x1e0b001e;

		constexpr static std::string_view AnimSets_type_name = "AnimSets";
		constexpr static rivet::rivet_type_id AnimSets_type_id = 0x3492d19;
		constexpr static std::string_view PerformanceType_type_name = "PerformanceType";
		constexpr static rivet::rivet_type_id PerformanceType_type_id = 0x4eb38c52;
		constexpr static std::string_view PerformanceSet_type_name = "PerformanceSet";
		constexpr static rivet::rivet_type_id PerformanceSet_type_id = 0x535a8946;
		constexpr static std::string_view PerformanceSetOverride_type_name = "PerformanceSetOverride";
		constexpr static rivet::rivet_type_id PerformanceSetOverride_type_id = 0x3e8d411b;
		constexpr static std::string_view PerformanceSetsAux_type_name = "PerformanceSetsAux";
		constexpr static rivet::rivet_type_id PerformanceSetsAux_type_id = 0xe6e90e46;
		constexpr static std::string_view MaxUpdateDistance_type_name = "MaxUpdateDistance";
		constexpr static rivet::rivet_type_id MaxUpdateDistance_type_id = 0x75ad2b16;
		constexpr static std::string_view AnimDynamicsUpdateMultiplier_type_name = "AnimDynamicsUpdateMultiplier";
		constexpr static rivet::rivet_type_id AnimDynamicsUpdateMultiplier_type_id = 0x2cd2f6bf;
		constexpr static std::string_view NeverCull_type_name = "NeverCull";
		constexpr static rivet::rivet_type_id NeverCull_type_id = 0x6a1ae3ac;
		constexpr static std::string_view BindAfterAnimEnd_type_name = "BindAfterAnimEnd";
		constexpr static rivet::rivet_type_id BindAfterAnimEnd_type_id = 0xf08a76da;
		constexpr static std::string_view AutoFreezeSkinning_type_name = "AutoFreezeSkinning";
		constexpr static rivet::rivet_type_id AutoFreezeSkinning_type_id = 0xa8bd7957;
		constexpr static std::string_view MaxAnimTreeSize_type_name = "MaxAnimTreeSize";
		constexpr static rivet::rivet_type_id MaxAnimTreeSize_type_id = 0x67512479; 

		explicit AnimControllerComponentPrius() = default;
		explicit AnimControllerComponentPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		std::vector<std::string_view> AnimSets {};
		rivet::ddl::generated::x9675aa42 PerformanceType {};
		std::string_view PerformanceSet {};
		std::string_view PerformanceSetOverride {};
		std::vector<std::string_view> PerformanceSetsAux {};
		float MaxUpdateDistance {};
		float AnimDynamicsUpdateMultiplier {};
		bool NeverCull {};
		bool BindAfterAnimEnd {};
		bool AutoFreezeSkinning {};
		uint16_t MaxAnimTreeSize {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<AnimControllerComponentPrius>;
	};
} // namespace rivet::ddl::generated

// clang-format on
