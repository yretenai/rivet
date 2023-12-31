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

#include <rivet/ddl/generated/bitsets/xb52df7e7.hpp> 

namespace rivet::ddl::generated {
	struct Cinematic2CameraOrphanTrackDef;
	struct Cinematic2CameraEventTrackDef;
	struct Cinematic2CameraVfxTrackDef;
	struct Cinematic2CameraPosRotTrackDef;
	struct Cinematic2CameraDofTrackDef;
	struct Cinematic2BehaviorPlayAnimClipActionDef;
	struct Cinematic2DefaultCameraValuesDef;
	struct Cinematic2CameraFovCurveDef;
	struct DDLTransform;
	struct Cinematic2CameraShakeTrackDef;
	struct Cinematic2CameraFocalLengthCurveDef;
	struct Cinematic2TrackTagsDef; 

	struct RIVET_DDL_SHARED Cinematic2CameraTrackDef : rivet::structures::rivet_ddl_base {
		constexpr static std::string_view type_name = "Cinematic2CameraTrackDef";
		constexpr static rivet::rivet_type_id type_id = 0xf94d0c62;

		constexpr static std::string_view Id_type_name = "Id";
		constexpr static rivet::rivet_type_id Id_type_id = 0x8a514a8d;
		constexpr static std::string_view Name_type_name = "Name";
		constexpr static rivet::rivet_type_id Name_type_id = 0x6eb3beb6;
		constexpr static std::string_view PlatformFilter_type_name = "PlatformFilter";
		constexpr static rivet::rivet_type_id PlatformFilter_type_id = 0x92542397;
		constexpr static std::string_view Tags_type_name = "Tags";
		constexpr static rivet::rivet_type_id Tags_type_id = 0x5f2c5496;
		constexpr static std::string_view Global_type_name = "Global";
		constexpr static rivet::rivet_type_id Global_type_id = 0xd67dc5e4;
		constexpr static std::string_view StartTransform_type_name = "StartTransform";
		constexpr static rivet::rivet_type_id StartTransform_type_id = 0x96f1f1f8;
		constexpr static std::string_view DefaultValues_type_name = "DefaultValues";
		constexpr static rivet::rivet_type_id DefaultValues_type_id = 0x616c13d7;
		constexpr static std::string_view InheritGameDof_type_name = "InheritGameDof";
		constexpr static rivet::rivet_type_id InheritGameDof_type_id = 0x6ebf4684;
		constexpr static std::string_view PlayAnimActions_type_name = "PlayAnimActions";
		constexpr static rivet::rivet_type_id PlayAnimActions_type_id = 0x2a95c808;
		constexpr static std::string_view DofTracks_type_name = "DofTracks";
		constexpr static rivet::rivet_type_id DofTracks_type_id = 0x16d51e79;
		constexpr static std::string_view Fov_type_name = "Fov";
		constexpr static rivet::rivet_type_id Fov_type_id = 0xc24de428;
		constexpr static std::string_view FocalLength_type_name = "FocalLength";
		constexpr static rivet::rivet_type_id FocalLength_type_id = 0xfc7ce243;
		constexpr static std::string_view PosRotTracks_type_name = "PosRotTracks";
		constexpr static rivet::rivet_type_id PosRotTracks_type_id = 0x9d08821a;
		constexpr static std::string_view Shake_type_name = "Shake";
		constexpr static rivet::rivet_type_id Shake_type_id = 0x6d55f883;
		constexpr static std::string_view VfxTracks_type_name = "VfxTracks";
		constexpr static rivet::rivet_type_id VfxTracks_type_id = 0xbc4d8836;
		constexpr static std::string_view EventTracks_type_name = "EventTracks";
		constexpr static rivet::rivet_type_id EventTracks_type_id = 0x653e2373;
		constexpr static std::string_view OrphanTracks_type_name = "OrphanTracks";
		constexpr static rivet::rivet_type_id OrphanTracks_type_id = 0xea59a6; 

		explicit Cinematic2CameraTrackDef() = default;
		explicit Cinematic2CameraTrackDef([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		uint64_t Id {};
		std::string_view Name {};
		rivet::ddl::generated::xb52df7e7 PlatformFilter {};
		std::shared_ptr<rivet::ddl::generated::Cinematic2TrackTagsDef> Tags {};
		bool Global {};
		std::shared_ptr<rivet::ddl::generated::DDLTransform> StartTransform {};
		std::shared_ptr<rivet::ddl::generated::Cinematic2DefaultCameraValuesDef> DefaultValues {};
		bool InheritGameDof {};
		std::vector<std::shared_ptr<rivet::ddl::generated::Cinematic2BehaviorPlayAnimClipActionDef>> PlayAnimActions {};
		std::vector<std::shared_ptr<rivet::ddl::generated::Cinematic2CameraDofTrackDef>> DofTracks {};
		std::vector<std::shared_ptr<rivet::ddl::generated::Cinematic2CameraFovCurveDef>> Fov {};
		std::vector<std::shared_ptr<rivet::ddl::generated::Cinematic2CameraFocalLengthCurveDef>> FocalLength {};
		std::vector<std::shared_ptr<rivet::ddl::generated::Cinematic2CameraPosRotTrackDef>> PosRotTracks {};
		std::vector<std::shared_ptr<rivet::ddl::generated::Cinematic2CameraShakeTrackDef>> Shake {};
		std::vector<std::shared_ptr<rivet::ddl::generated::Cinematic2CameraVfxTrackDef>> VfxTracks {};
		std::vector<std::shared_ptr<rivet::ddl::generated::Cinematic2CameraEventTrackDef>> EventTracks {};
		std::vector<std::shared_ptr<rivet::ddl::generated::Cinematic2CameraOrphanTrackDef>> OrphanTracks {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<Cinematic2CameraTrackDef>;
	};
} // namespace rivet::ddl::generated

// clang-format on
