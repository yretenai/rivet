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
	struct MayaNameTrackTags;
	struct AnimSkeletonInfo;
	struct CineMenuOption; 

	struct RIVET_DDL_SHARED Cinematic2ActorCustomizationConfig : ConfigBase {
		constexpr static std::string_view type_name = "Cinematic2ActorCustomizationConfig";
		constexpr static rivet::rivet_type_id type_id = 0xd8b57470;

		constexpr static std::string_view CineOptionsMenu_type_name = "CineOptionsMenu";
		constexpr static rivet::rivet_type_id CineOptionsMenu_type_id = 0x3d07821f;
		constexpr static std::string_view MayaNameTrackTags_type_name = "MayaNameTrackTags";
		constexpr static rivet::rivet_type_id MayaNameTrackTags_type_id = 0x2d1628f0;
		constexpr static std::string_view AnimSkeletonInfos_type_name = "AnimSkeletonInfos";
		constexpr static rivet::rivet_type_id AnimSkeletonInfos_type_id = 0xfd3c800a; 

		explicit Cinematic2ActorCustomizationConfig() = default;
		explicit Cinematic2ActorCustomizationConfig([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		std::vector<std::shared_ptr<rivet::ddl::generated::CineMenuOption>> CineOptionsMenu {};
		std::vector<std::shared_ptr<rivet::ddl::generated::MayaNameTrackTags>> MayaNameTrackTags {};
		std::vector<std::shared_ptr<rivet::ddl::generated::AnimSkeletonInfo>> AnimSkeletonInfos {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<Cinematic2ActorCustomizationConfig>;
	};
} // namespace rivet::ddl::generated

// clang-format on
