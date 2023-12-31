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
	struct RIVET_DDL_SHARED FormationRewardPrius : rivet::structures::rivet_ddl_base {
		constexpr static std::string_view type_name = "FormationRewardPrius";
		constexpr static rivet::rivet_type_id type_id = 0x85941768;

		constexpr static std::string_view NumRewards_type_name = "NumRewards";
		constexpr static rivet::rivet_type_id NumRewards_type_id = 0xbdbbc9a9;
		constexpr static std::string_view HealthPickup_type_name = "HealthPickup";
		constexpr static rivet::rivet_type_id HealthPickup_type_id = 0x5447c31d;
		constexpr static std::string_view AmmoPickup_type_name = "AmmoPickup";
		constexpr static rivet::rivet_type_id AmmoPickup_type_id = 0x6a552bfc; 

		explicit FormationRewardPrius() = default;
		explicit FormationRewardPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		int32_t NumRewards {};
		std::string_view HealthPickup {};
		std::string_view AmmoPickup {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<FormationRewardPrius>;
	};
} // namespace rivet::ddl::generated

// clang-format on
