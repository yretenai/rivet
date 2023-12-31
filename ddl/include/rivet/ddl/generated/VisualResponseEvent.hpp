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

#include <rivet/ddl/generated/ResponseEvent.hpp> 

namespace rivet::ddl::generated {
	struct RIVET_DDL_SHARED VisualResponseEvent : ResponseEvent {
		constexpr static std::string_view type_name = "VisualResponseEvent";
		constexpr static rivet::rivet_type_id type_id = 0xcfb26502;

		constexpr static std::string_view AttachLocJoint_type_name = "AttachLocJoint";
		constexpr static rivet::rivet_type_id AttachLocJoint_type_id = 0x94bbadd6;
		constexpr static std::string_view FollowLocJoint_type_name = "FollowLocJoint";
		constexpr static rivet::rivet_type_id FollowLocJoint_type_id = 0xa7da544;
		constexpr static std::string_view FollowActor_type_name = "FollowActor";
		constexpr static rivet::rivet_type_id FollowActor_type_id = 0x6b8aab60;
		constexpr static std::string_view FXPackage_type_name = "FXPackage";
		constexpr static rivet::rivet_type_id FXPackage_type_id = 0x41f71a88;
		constexpr static std::string_view StartEffect_type_name = "StartEffect";
		constexpr static rivet::rivet_type_id StartEffect_type_id = 0xc37d3372;
		constexpr static std::string_view OnConduitDelete_type_name = "OnConduitDelete";
		constexpr static rivet::rivet_type_id OnConduitDelete_type_id = 0xe42c89b5;
		constexpr static std::string_view StartDelay_type_name = "StartDelay";
		constexpr static rivet::rivet_type_id StartDelay_type_id = 0xcaf1ec7f;
		constexpr static std::string_view FadeOut_type_name = "FadeOut";
		constexpr static rivet::rivet_type_id FadeOut_type_id = 0xa9e43db1;
		constexpr static std::string_view FadeIn_type_name = "FadeIn";
		constexpr static rivet::rivet_type_id FadeIn_type_id = 0x84ac8cf2;
		constexpr static std::string_view RefLocator_type_name = "RefLocator";
		constexpr static rivet::rivet_type_id RefLocator_type_id = 0xe2e796b0;
		constexpr static std::string_view SingleViewport_type_name = "SingleViewport";
		constexpr static rivet::rivet_type_id SingleViewport_type_id = 0x5510162;
		constexpr static std::string_view ExcludeViewport_type_name = "ExcludeViewport";
		constexpr static rivet::rivet_type_id ExcludeViewport_type_id = 0x5f225fa9;
		constexpr static std::string_view ApplyParentInfluence_type_name = "ApplyParentInfluence";
		constexpr static rivet::rivet_type_id ApplyParentInfluence_type_id = 0x13f3e34f;
		constexpr static std::string_view TargetModelMaterialMappingHashes_type_name = "TargetModelMaterialMappingHashes";
		constexpr static rivet::rivet_type_id TargetModelMaterialMappingHashes_type_id = 0x986cd3c1;
		constexpr static std::string_view ExcludeModelMaterialMappingHashes_type_name = "ExcludeModelMaterialMappingHashes";
		constexpr static rivet::rivet_type_id ExcludeModelMaterialMappingHashes_type_id = 0x2f07f341; 

		explicit VisualResponseEvent() = default;
		explicit VisualResponseEvent([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		std::string_view AttachLocJoint {};
		bool FollowLocJoint {};
		bool FollowActor {};
		std::string_view FXPackage {};
		int8_t StartEffect {};
		int8_t OnConduitDelete {};
		float StartDelay {};
		float FadeOut {};
		float FadeIn {};
		std::string_view RefLocator {};
		int8_t SingleViewport {};
		int8_t ExcludeViewport {};
		bool ApplyParentInfluence {};
		std::string_view TargetModelMaterialMappingHashes {};
		std::string_view ExcludeModelMaterialMappingHashes {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<VisualResponseEvent>;
	};
} // namespace rivet::ddl::generated

// clang-format on
