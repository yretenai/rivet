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

#include <rivet/ddl/generated/HitReactPrius.hpp> 

namespace rivet::ddl::generated {
	struct BotHitShaderData;
	struct DeathData;
	struct KnockdownData;
	struct KnockbackData;
	struct BotReactionBucket; 

	struct RIVET_DDL_SHARED HitReactGamePrius : HitReactPrius {
		constexpr static std::string_view type_name = "HitReactGamePrius";
		constexpr static rivet::rivet_type_id type_id = 0x1c70e4dd;

		constexpr static std::string_view Buckets_type_name = "Buckets";
		constexpr static rivet::rivet_type_id Buckets_type_id = 0x25b695d8;
		constexpr static std::string_view KnockbackData_type_name = "KnockbackData";
		constexpr static rivet::rivet_type_id KnockbackData_type_id = 0xcc96e476;
		constexpr static std::string_view KnockdownData_type_name = "KnockdownData";
		constexpr static rivet::rivet_type_id KnockdownData_type_id = 0xa615951;
		constexpr static std::string_view DeathData_type_name = "DeathData";
		constexpr static rivet::rivet_type_id DeathData_type_id = 0xc5c5429e;
		constexpr static std::string_view HitShaderData_type_name = "HitShaderData";
		constexpr static rivet::rivet_type_id HitShaderData_type_id = 0xbe73a2ef;
		constexpr static std::string_view CollisionTestHeight_type_name = "CollisionTestHeight";
		constexpr static rivet::rivet_type_id CollisionTestHeight_type_id = 0x4015bc6e;
		constexpr static std::string_view CollisionTestRadius_type_name = "CollisionTestRadius";
		constexpr static rivet::rivet_type_id CollisionTestRadius_type_id = 0x8e24373b; 

		explicit HitReactGamePrius() = default;
		explicit HitReactGamePrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		std::vector<std::shared_ptr<rivet::ddl::generated::BotReactionBucket>> Buckets {};
		std::shared_ptr<rivet::ddl::generated::KnockbackData> KnockbackData {};
		std::shared_ptr<rivet::ddl::generated::KnockdownData> KnockdownData {};
		std::shared_ptr<rivet::ddl::generated::DeathData> DeathData {};
		std::shared_ptr<rivet::ddl::generated::BotHitShaderData> HitShaderData {};
		float CollisionTestHeight {};
		float CollisionTestRadius {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<HitReactGamePrius>;
	};
} // namespace rivet::ddl::generated

// clang-format on
