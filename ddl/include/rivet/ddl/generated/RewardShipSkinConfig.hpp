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
	struct ShipSkinMaterialGroup; 

	struct RIVET_DDL_SHARED RewardShipSkinConfig : ConfigBase {
		constexpr static std::string_view type_name = "RewardShipSkinConfig";
		constexpr static rivet::rivet_type_id type_id = 0x8a5b85ed;

		constexpr static std::string_view Skins_type_name = "Skins";
		constexpr static rivet::rivet_type_id Skins_type_id = 0xf85047c1; 

		explicit RewardShipSkinConfig() = default;
		explicit RewardShipSkinConfig([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		std::vector<std::shared_ptr<rivet::ddl::generated::ShipSkinMaterialGroup>> Skins {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<RewardShipSkinConfig>;
	};
} // namespace rivet::ddl::generated

// clang-format on
