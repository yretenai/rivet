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

#include <rivet/ddl/generated/bitsets/ActorFilterTypes.hpp>
#include <rivet/ddl/generated/enums/xf5eea2a0.hpp> 

namespace rivet::ddl::generated {
	struct WwiseSoundEvent;
	struct WWiseEvent;
	struct VisualEffectSpawnMesh; 

	struct RIVET_DDL_SHARED UI_ECMInputNodeDef : rivet::structures::rivet_ddl_base {
		constexpr static std::string_view type_name = "UI_ECMInputNodeDef";
		constexpr static rivet::rivet_type_id type_id = 0x23988a02;

		constexpr static std::string_view Type_type_name = "Type";
		constexpr static rivet::rivet_type_id Type_type_id = 0xbc4e9799;
		constexpr static std::string_view Value_type_name = "Value";
		constexpr static rivet::rivet_type_id Value_type_id = 0x42494f5;
		constexpr static std::string_view LocTag_type_name = "LocTag";
		constexpr static rivet::rivet_type_id LocTag_type_id = 0x6f8b0e5;
		constexpr static std::string_view PhysicsMaterial_type_name = "PhysicsMaterial";
		constexpr static rivet::rivet_type_id PhysicsMaterial_type_id = 0x3bd89dc5;
		constexpr static std::string_view PhysicsMaterials_type_name = "PhysicsMaterials";
		constexpr static rivet::rivet_type_id PhysicsMaterials_type_id = 0x2239ce24;
		constexpr static std::string_view ActorFilterTypes_type_name = "ActorFilterTypes";
		constexpr static rivet::rivet_type_id ActorFilterTypes_type_id = 0x3b1d202a;
		constexpr static std::string_view VisualEffect_type_name = "VisualEffect";
		constexpr static rivet::rivet_type_id VisualEffect_type_id = 0xafa67994;
		constexpr static std::string_view VisualEffectSpawnMesh_type_name = "VisualEffectSpawnMesh";
		constexpr static rivet::rivet_type_id VisualEffectSpawnMesh_type_id = 0x7225c9b5;
		constexpr static std::string_view MaterialAsset_type_name = "MaterialAsset";
		constexpr static rivet::rivet_type_id MaterialAsset_type_id = 0xf55a8ae3;
		constexpr static std::string_view WwiseVariant_type_name = "WwiseVariant";
		constexpr static rivet::rivet_type_id WwiseVariant_type_id = 0xe0d5f6de;
		constexpr static std::string_view WwiseEvent_type_name = "WwiseEvent";
		constexpr static rivet::rivet_type_id WwiseEvent_type_id = 0xcebb3bc3;
		constexpr static std::string_view ShadowState_type_name = "ShadowState";
		constexpr static rivet::rivet_type_id ShadowState_type_id = 0x93bba070; 

		explicit UI_ECMInputNodeDef() = default;
		explicit UI_ECMInputNodeDef([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		rivet::ddl::generated::xf5eea2a0 Type {};
		std::string_view Value {};
		std::string_view LocTag {};
		std::string_view PhysicsMaterial {};
		std::vector<std::string_view> PhysicsMaterials {};
		rivet::ddl::generated::ActorFilterTypes ActorFilterTypes {};
		std::string_view VisualEffect {};
		std::shared_ptr<rivet::ddl::generated::VisualEffectSpawnMesh> VisualEffectSpawnMesh {};
		std::string_view MaterialAsset {};
		std::shared_ptr<rivet::ddl::generated::WWiseEvent> WwiseVariant {};
		std::shared_ptr<rivet::ddl::generated::WwiseSoundEvent> WwiseEvent {};
		std::string_view ShadowState {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<UI_ECMInputNodeDef>;
	};
} // namespace rivet::ddl::generated

// clang-format on
