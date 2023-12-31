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
	struct VanityBundleSaveWeight;
	struct RYNOPlanSaveWeight;
	struct GoldBoltSaveWeight; 

	struct RIVET_DDL_SHARED SaveSystemConfig : ConfigBase {
		constexpr static std::string_view type_name = "SaveSystemConfig";
		constexpr static rivet::rivet_type_id type_id = 0xcf9cf810;

		constexpr static std::string_view GoldenPathCategoryWeight_type_name = "GoldenPathCategoryWeight";
		constexpr static rivet::rivet_type_id GoldenPathCategoryWeight_type_id = 0x7e65c21d;
		constexpr static std::string_view OptionalMissionCategoryWeight_type_name = "OptionalMissionCategoryWeight";
		constexpr static rivet::rivet_type_id OptionalMissionCategoryWeight_type_id = 0xeca047a4;
		constexpr static std::string_view CollectiblesCategoryWeight_type_name = "CollectiblesCategoryWeight";
		constexpr static rivet::rivet_type_id CollectiblesCategoryWeight_type_id = 0x2ec9a442;
		constexpr static std::string_view GoldBoltWeights_type_name = "GoldBoltWeights";
		constexpr static rivet::rivet_type_id GoldBoltWeights_type_id = 0x1cd5112d;
		constexpr static std::string_view RYNOPlanWeights_type_name = "RYNOPlanWeights";
		constexpr static rivet::rivet_type_id RYNOPlanWeights_type_id = 0x833cb21e;
		constexpr static std::string_view VanityBundleWeights_type_name = "VanityBundleWeights";
		constexpr static rivet::rivet_type_id VanityBundleWeights_type_id = 0x6fd5bf42; 

		explicit SaveSystemConfig() = default;
		explicit SaveSystemConfig([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		float GoldenPathCategoryWeight {};
		float OptionalMissionCategoryWeight {};
		float CollectiblesCategoryWeight {};
		std::vector<std::shared_ptr<rivet::ddl::generated::GoldBoltSaveWeight>> GoldBoltWeights {};
		std::vector<std::shared_ptr<rivet::ddl::generated::RYNOPlanSaveWeight>> RYNOPlanWeights {};
		std::vector<std::shared_ptr<rivet::ddl::generated::VanityBundleSaveWeight>> VanityBundleWeights {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<SaveSystemConfig>;
	};
} // namespace rivet::ddl::generated

// clang-format on
