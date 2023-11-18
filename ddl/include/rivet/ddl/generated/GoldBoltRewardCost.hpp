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

namespace rivet::ddl::generated {
	struct RIVET_DDL_SHARED GoldBoltRewardCost : rivet::structures::rivet_ddl_base {
		constexpr static std::string_view type_name = "GoldBoltRewardCost";
		constexpr static rivet::rivet_type_id type_id = 0x5b4a5050;

		constexpr static std::string_view Reward_type_name = "Reward";
		constexpr static rivet::rivet_type_id Reward_type_id = 0x70a93c34;
		constexpr static std::string_view Cost_type_name = "Cost";
		constexpr static rivet::rivet_type_id Cost_type_id = 0x28b6544c; 

		explicit GoldBoltRewardCost() = default;
		explicit GoldBoltRewardCost([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		rivet::ddl::generated::xf06c6830 Reward {};
		uint32_t Cost {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<GoldBoltRewardCost>;
	};
} // namespace rivet::ddl::generated

// clang-format on
