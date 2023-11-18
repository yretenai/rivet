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
	struct AnimDamageAttack; 

	struct RIVET_DDL_SHARED AnimDamageHandlerPrius : rivet::structures::rivet_ddl_base {
		constexpr static std::string_view type_name = "AnimDamageHandlerPrius";
		constexpr static rivet::rivet_type_id type_id = 0xcdbccce9;

		constexpr static std::string_view DeferAnimDamageWarning_type_name = "DeferAnimDamageWarning";
		constexpr static rivet::rivet_type_id DeferAnimDamageWarning_type_id = 0x5494c7f6;
		constexpr static std::string_view DeferAnimDamage_type_name = "DeferAnimDamage";
		constexpr static rivet::rivet_type_id DeferAnimDamage_type_id = 0xcb17b7e3;
		constexpr static std::string_view ApplyActorScale_type_name = "ApplyActorScale";
		constexpr static rivet::rivet_type_id ApplyActorScale_type_id = 0x3b6cec91;
		constexpr static std::string_view AttackIndices_type_name = "AttackIndices";
		constexpr static rivet::rivet_type_id AttackIndices_type_id = 0xe73af6d; 

		explicit AnimDamageHandlerPrius() = default;
		explicit AnimDamageHandlerPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		std::string_view DeferAnimDamageWarning {};
		bool DeferAnimDamage {};
		bool ApplyActorScale {};
		std::vector<std::shared_ptr<rivet::ddl::generated::AnimDamageAttack>> AttackIndices {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<AnimDamageHandlerPrius>;
	};
} // namespace rivet::ddl::generated

// clang-format on
