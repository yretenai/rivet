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
	struct RynoActivityData;
	struct ArenaCupActivityData;
	struct ActivitySubCategoryInfo; 

	struct RIVET_DDL_SHARED ActivityMetadataConfig : ConfigBase {
		constexpr static std::string_view type_name = "ActivityMetadataConfig";
		constexpr static rivet::rivet_type_id type_id = 0xf3b99ec5;

		constexpr static std::string_view SubCategories_type_name = "SubCategories";
		constexpr static rivet::rivet_type_id SubCategories_type_id = 0x1546408e;
		constexpr static std::string_view BronzeCup_type_name = "BronzeCup";
		constexpr static rivet::rivet_type_id BronzeCup_type_id = 0x781fd602;
		constexpr static std::string_view SilverCup_type_name = "SilverCup";
		constexpr static rivet::rivet_type_id SilverCup_type_id = 0x13665853;
		constexpr static std::string_view GoldenCup_type_name = "GoldenCup";
		constexpr static rivet::rivet_type_id GoldenCup_type_id = 0x70f4091e;
		constexpr static std::string_view RynoActivityData_type_name = "RynoActivityData";
		constexpr static rivet::rivet_type_id RynoActivityData_type_id = 0xbae9f85c;
		constexpr static std::string_view FallbackSmallImage_type_name = "FallbackSmallImage";
		constexpr static rivet::rivet_type_id FallbackSmallImage_type_id = 0xc3541300;
		constexpr static std::string_view FallbackLargeImage_type_name = "FallbackLargeImage";
		constexpr static rivet::rivet_type_id FallbackLargeImage_type_id = 0x24f9098b; 

		explicit ActivityMetadataConfig() = default;
		explicit ActivityMetadataConfig([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		std::vector<std::shared_ptr<rivet::ddl::generated::ActivitySubCategoryInfo>> SubCategories {};
		std::shared_ptr<rivet::ddl::generated::ArenaCupActivityData> BronzeCup {};
		std::shared_ptr<rivet::ddl::generated::ArenaCupActivityData> SilverCup {};
		std::shared_ptr<rivet::ddl::generated::ArenaCupActivityData> GoldenCup {};
		std::shared_ptr<rivet::ddl::generated::RynoActivityData> RynoActivityData {};
		std::string_view FallbackSmallImage {};
		std::string_view FallbackLargeImage {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<ActivityMetadataConfig>;
	};
} // namespace rivet::ddl::generated

// clang-format on
