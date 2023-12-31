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

#include <rivet/ddl/generated/enums/xf06c6830.hpp>
#include <rivet/ddl/generated/UICollectibleTypeBase.hpp> 

namespace rivet::ddl::generated {
	struct UIGoldBoltOptionTypeBase; 

	struct RIVET_DDL_SHARED UICollectibleTypeGoldBolt : UICollectibleTypeBase {
		constexpr static std::string_view type_name = "UICollectibleTypeGoldBolt";
		constexpr static rivet::rivet_type_id type_id = 0xd0f3ef7f;

		constexpr static std::string_view RewardID_type_name = "RewardID";
		constexpr static rivet::rivet_type_id RewardID_type_id = 0xc44f8e1c;
		constexpr static std::string_view Type_type_name = "Type";
		constexpr static rivet::rivet_type_id Type_type_id = 0xbc4e9799; 

		explicit UICollectibleTypeGoldBolt() = default;
		explicit UICollectibleTypeGoldBolt([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		rivet::ddl::generated::xf06c6830 RewardID {};
		std::shared_ptr<rivet::ddl::generated::UIGoldBoltOptionTypeBase> Type {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<UICollectibleTypeGoldBolt>;
	};
} // namespace rivet::ddl::generated

// clang-format on
