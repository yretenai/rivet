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

#include <rivet/ddl/generated/enums/ActorOrientation.hpp>
#include <rivet/ddl/generated/enums/x399b7397.hpp> 

namespace rivet::ddl::generated {
	struct PointOfImpactActorData;
	struct TrajectoryDrawerArcData;
	struct TrajectorDrawerKnotData; 

	struct RIVET_DDL_SHARED WeaponTrajectoryDrawerPrius : rivet::structures::rivet_ddl_base {
		constexpr static std::string_view type_name = "WeaponTrajectoryDrawerPrius";
		constexpr static rivet::rivet_type_id type_id = 0x34c006c;

		constexpr static std::string_view ArcStyle_type_name = "ArcStyle";
		constexpr static rivet::rivet_type_id ArcStyle_type_id = 0x42ab1eb9;
		constexpr static std::string_view KnotData_type_name = "KnotData";
		constexpr static rivet::rivet_type_id KnotData_type_id = 0x105e918d;
		constexpr static std::string_view Arc_type_name = "Arc";
		constexpr static rivet::rivet_type_id Arc_type_id = 0x55b37a5a;
		constexpr static std::string_view AimArc_type_name = "AimArc";
		constexpr static rivet::rivet_type_id AimArc_type_id = 0xa996c5b8;
		constexpr static std::string_view HighlightArc_type_name = "HighlightArc";
		constexpr static rivet::rivet_type_id HighlightArc_type_id = 0x10723417;
		constexpr static std::string_view ArcWidth_type_name = "ArcWidth";
		constexpr static rivet::rivet_type_id ArcWidth_type_id = 0xfd0ce3fc;
		constexpr static std::string_view OnlyDrawArcOnCollision_type_name = "OnlyDrawArcOnCollision";
		constexpr static rivet::rivet_type_id OnlyDrawArcOnCollision_type_id = 0x10b9a1f8;
		constexpr static std::string_view DecalTexture_type_name = "DecalTexture";
		constexpr static rivet::rivet_type_id DecalTexture_type_id = 0x94b7e712;
		constexpr static std::string_view DecalMaterial_type_name = "DecalMaterial";
		constexpr static rivet::rivet_type_id DecalMaterial_type_id = 0xe3182aaa;
		constexpr static std::string_view DecalSize_type_name = "DecalSize";
		constexpr static rivet::rivet_type_id DecalSize_type_id = 0xaef2b156;
		constexpr static std::string_view DecalAlpha_type_name = "DecalAlpha";
		constexpr static rivet::rivet_type_id DecalAlpha_type_id = 0x2dd498f5;
		constexpr static std::string_view CameraOrient_type_name = "CameraOrient";
		constexpr static rivet::rivet_type_id CameraOrient_type_id = 0x5eacda20;
		constexpr static std::string_view PointOfImpactActor_type_name = "PointOfImpactActor";
		constexpr static rivet::rivet_type_id PointOfImpactActor_type_id = 0x52fba301;
		constexpr static std::string_view ScalePointOfImpactActor_type_name = "ScalePointOfImpactActor";
		constexpr static rivet::rivet_type_id ScalePointOfImpactActor_type_id = 0xd96005f9;
		constexpr static std::string_view PointOfImpactSize_type_name = "PointOfImpactSize";
		constexpr static rivet::rivet_type_id PointOfImpactSize_type_id = 0x1a90e993;
		constexpr static std::string_view ImpactActorSkipDepth_type_name = "ImpactActorSkipDepth";
		constexpr static rivet::rivet_type_id ImpactActorSkipDepth_type_id = 0x559378e3;
		constexpr static std::string_view ApplyMaterialToImpactActor_type_name = "ApplyMaterialToImpactActor";
		constexpr static rivet::rivet_type_id ApplyMaterialToImpactActor_type_id = 0x19e8f40d;
		constexpr static std::string_view ActorOrientation_type_name = "ActorOrientation";
		constexpr static rivet::rivet_type_id ActorOrientation_type_id = 0xa073542a;
		constexpr static std::string_view AimPointOfImpactActor_type_name = "AimPointOfImpactActor";
		constexpr static rivet::rivet_type_id AimPointOfImpactActor_type_id = 0x6723e31b;
		constexpr static std::string_view AltPointOfImpactActors_type_name = "AltPointOfImpactActors";
		constexpr static rivet::rivet_type_id AltPointOfImpactActors_type_id = 0xd6570b7d;
		constexpr static std::string_view TriggerIndex_type_name = "TriggerIndex";
		constexpr static rivet::rivet_type_id TriggerIndex_type_id = 0xee73b5b3;
		constexpr static std::string_view ShotIndex_type_name = "ShotIndex";
		constexpr static rivet::rivet_type_id ShotIndex_type_id = 0xc409037f;
		constexpr static std::string_view IgnoreCollDist_type_name = "IgnoreCollDist";
		constexpr static rivet::rivet_type_id IgnoreCollDist_type_id = 0xcdfd6410; 

		explicit WeaponTrajectoryDrawerPrius() = default;
		explicit WeaponTrajectoryDrawerPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		rivet::ddl::generated::x399b7397 ArcStyle {};
		std::shared_ptr<rivet::ddl::generated::TrajectorDrawerKnotData> KnotData {};
		std::shared_ptr<rivet::ddl::generated::TrajectoryDrawerArcData> Arc {};
		std::shared_ptr<rivet::ddl::generated::TrajectoryDrawerArcData> AimArc {};
		std::shared_ptr<rivet::ddl::generated::TrajectoryDrawerArcData> HighlightArc {};
		float ArcWidth {};
		bool OnlyDrawArcOnCollision {};
		std::string_view DecalTexture {};
		std::string_view DecalMaterial {};
		float DecalSize {};
		float DecalAlpha {};
		bool CameraOrient {};
		std::string_view PointOfImpactActor {};
		bool ScalePointOfImpactActor {};
		float PointOfImpactSize {};
		bool ImpactActorSkipDepth {};
		bool ApplyMaterialToImpactActor {};
		rivet::ddl::generated::ActorOrientation ActorOrientation {};
		std::shared_ptr<rivet::ddl::generated::PointOfImpactActorData> AimPointOfImpactActor {};
		std::vector<std::shared_ptr<rivet::ddl::generated::PointOfImpactActorData>> AltPointOfImpactActors {};
		uint32_t TriggerIndex {};
		uint32_t ShotIndex {};
		float IgnoreCollDist {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<WeaponTrajectoryDrawerPrius>;
	};
} // namespace rivet::ddl::generated

// clang-format on
