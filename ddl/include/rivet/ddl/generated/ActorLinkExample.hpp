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

namespace rivet::ddl::generated {
	struct RIVET_DDL_SHARED ActorLinkExample : rivet::structures::rivet_ddl_base {
		constexpr static std::string_view type_name = "ActorLinkExample";
		constexpr static rivet::rivet_type_id type_id = 0xaf559073;

		constexpr static std::string_view Volumes_type_name = "Volumes";
		constexpr static rivet::rivet_type_id Volumes_type_id = 0x7b36c92d;
		constexpr static std::string_view AnyActor_type_name = "AnyActor";
		constexpr static rivet::rivet_type_id AnyActor_type_id = 0x3750276d;
		constexpr static std::string_view AnyModelOrVolumeActor_type_name = "AnyModelOrVolumeActor";
		constexpr static rivet::rivet_type_id AnyModelOrVolumeActor_type_id = 0x3f45340a;
		constexpr static std::string_view AnyKindOfModel_type_name = "AnyKindOfModel";
		constexpr static rivet::rivet_type_id AnyKindOfModel_type_id = 0x7bc48dc6;
		constexpr static std::string_view AnyKindOfSceneNode_type_name = "AnyKindOfSceneNode";
		constexpr static rivet::rivet_type_id AnyKindOfSceneNode_type_id = 0x248e0e3a; 

		explicit ActorLinkExample() = default;
		explicit ActorLinkExample([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		std::vector<uint64_t> Volumes {};
		uint64_t AnyActor {};
		uint64_t AnyModelOrVolumeActor {};
		uint64_t AnyKindOfModel {};
		uint64_t AnyKindOfSceneNode {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<ActorLinkExample>;
	};
} // namespace rivet::ddl::generated

// clang-format on
