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

#include <rivet/ddl/generated/enums/xfb0b3aad.hpp> 

namespace rivet::ddl::generated {
	struct POIAttributeIconBase;
	struct POIAttributeEdgeModeBase;
	struct POIAttributeDistanceScaleBase;
	struct POIAttributeDistanceTextBase; 

	struct RIVET_DDL_SHARED POIConfigData : rivet::structures::rivet_ddl_base {
		constexpr const static std::string_view type_name = "POIConfigData";
		constexpr const static rivet::rivet_type_id type_id = 0x96379876;

		constexpr const static std::string_view CoherentPOI_type_name = "CoherentPOI";
		constexpr const static rivet::rivet_type_id CoherentPOI_type_id = 0x85fde7d2;
		constexpr const static std::string_view Icon_type_name = "Icon";
		constexpr const static rivet::rivet_type_id Icon_type_id = 0x5504e96b;
		constexpr const static std::string_view Priority_type_name = "Priority";
		constexpr const static rivet::rivet_type_id Priority_type_id = 0x98a76157;
		constexpr const static std::string_view EdgeMode_type_name = "EdgeMode";
		constexpr const static rivet::rivet_type_id EdgeMode_type_id = 0x2a4e5466;
		constexpr const static std::string_view OffscreenIndicator_type_name = "OffscreenIndicator";
		constexpr const static rivet::rivet_type_id OffscreenIndicator_type_id = 0xbe47c5ca;
		constexpr const static std::string_view DistanceScaleMode_type_name = "DistanceScaleMode";
		constexpr const static rivet::rivet_type_id DistanceScaleMode_type_id = 0x6c21b587;
		constexpr const static std::string_view DistanceText_type_name = "DistanceText";
		constexpr const static rivet::rivet_type_id DistanceText_type_id = 0xaa2068d6;
		constexpr const static std::string_view DistanceTextMode_type_name = "DistanceTextMode";
		constexpr const static rivet::rivet_type_id DistanceTextMode_type_id = 0xf0c02500; 

		explicit POIConfigData() = default;
		explicit POIConfigData([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		bool CoherentPOI {};
		std::shared_ptr<rivet::ddl::generated::POIAttributeIconBase> Icon {};
		rivet::ddl::generated::xfb0b3aad Priority {};
		std::shared_ptr<rivet::ddl::generated::POIAttributeEdgeModeBase> EdgeMode {};
		bool OffscreenIndicator {};
		std::shared_ptr<rivet::ddl::generated::POIAttributeDistanceScaleBase> DistanceScaleMode {};
		bool DistanceText {};
		std::shared_ptr<rivet::ddl::generated::POIAttributeDistanceTextBase> DistanceTextMode {}; 

		auto
		get_type_id() const noexcept -> rivet::rivet_type_id override;

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<POIConfigData>;
	};
} // namespace rivet::ddl::generated

// clang-format on
