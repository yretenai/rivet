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

#include <rivet/ddl/generated/UIArenaChallengeReward.hpp> 

namespace rivet::ddl::generated {
	struct RIVET_DDL_SHARED UIArenaChallengeRewardBolts : UIArenaChallengeReward {
		constexpr static std::string_view type_name = "UIArenaChallengeRewardBolts";
		constexpr static rivet::rivet_type_id type_id = 0x5e7a2eeb;

		constexpr static std::string_view Amount_type_name = "Amount";
		constexpr static rivet::rivet_type_id Amount_type_id = 0xb0d93e25; 

		explicit UIArenaChallengeRewardBolts() = default;
		explicit UIArenaChallengeRewardBolts([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		uint32_t Amount {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<UIArenaChallengeRewardBolts>;
	};
} // namespace rivet::ddl::generated

// clang-format on
