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

#include <rivet/ddl/generated/enums/xc34e772f.hpp> 

namespace rivet::ddl::generated {
	struct DDLVector3; 

	struct RIVET_DDL_SHARED DynamicInstanceItem : rivet::structures::rivet_ddl_base {
		constexpr static std::string_view type_name = "DynamicInstanceItem";
		constexpr static rivet::rivet_type_id type_id = 0xeddeb4ae;

		constexpr static std::string_view InstanceAsset_type_name = "InstanceAsset";
		constexpr static rivet::rivet_type_id InstanceAsset_type_id = 0x8938b71d;
		constexpr static std::string_view InstanceOnEndpoints_type_name = "InstanceOnEndpoints";
		constexpr static rivet::rivet_type_id InstanceOnEndpoints_type_id = 0xb7150214;
		constexpr static std::string_view InstanceProbability_type_name = "InstanceProbability";
		constexpr static rivet::rivet_type_id InstanceProbability_type_id = 0xb6db3833;
		constexpr static std::string_view InstanceScaleVariation_type_name = "InstanceScaleVariation";
		constexpr static rivet::rivet_type_id InstanceScaleVariation_type_id = 0x45358871;
		constexpr static std::string_view InstanceDistance_type_name = "InstanceDistance";
		constexpr static rivet::rivet_type_id InstanceDistance_type_id = 0x17302fa9;
		constexpr static std::string_view InstanceOffset_type_name = "InstanceOffset";
		constexpr static rivet::rivet_type_id InstanceOffset_type_id = 0x8a58c3b6;
		constexpr static std::string_view InstanceOffsetVariation_type_name = "InstanceOffsetVariation";
		constexpr static rivet::rivet_type_id InstanceOffsetVariation_type_id = 0x6625cc4a;
		constexpr static std::string_view InstanceRotation_type_name = "InstanceRotation";
		constexpr static rivet::rivet_type_id InstanceRotation_type_id = 0x22de2dd9;
		constexpr static std::string_view InstanceRotationVariation_type_name = "InstanceRotationVariation";
		constexpr static rivet::rivet_type_id InstanceRotationVariation_type_id = 0x6d2cf927;
		constexpr static std::string_view InstanceRandomRotation_type_name = "InstanceRandomRotation";
		constexpr static rivet::rivet_type_id InstanceRandomRotation_type_id = 0x7974d46b;
		constexpr static std::string_view InstanceOrientation_type_name = "InstanceOrientation";
		constexpr static rivet::rivet_type_id InstanceOrientation_type_id = 0x5ef5932e; 

		explicit DynamicInstanceItem() = default;
		explicit DynamicInstanceItem([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		std::string_view InstanceAsset {};
		bool InstanceOnEndpoints {};
		float InstanceProbability {};
		float InstanceScaleVariation {};
		float InstanceDistance {};
		std::shared_ptr<rivet::ddl::generated::DDLVector3> InstanceOffset {};
		std::shared_ptr<rivet::ddl::generated::DDLVector3> InstanceOffsetVariation {};
		std::shared_ptr<rivet::ddl::generated::DDLVector3> InstanceRotation {};
		std::shared_ptr<rivet::ddl::generated::DDLVector3> InstanceRotationVariation {};
		bool InstanceRandomRotation {};
		rivet::ddl::generated::xc34e772f InstanceOrientation {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<DynamicInstanceItem>;
	};
} // namespace rivet::ddl::generated

// clang-format on
