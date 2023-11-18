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
	struct MeleeModelSwapData; 

	struct RIVET_DDL_SHARED RewardMeleeModelSwapConfig : ConfigBase {
		constexpr static std::string_view type_name = "RewardMeleeModelSwapConfig";
		constexpr static rivet::rivet_type_id type_id = 0x7b69db64;

		constexpr static std::string_view MeleeModelSwapData_type_name = "MeleeModelSwapData";
		constexpr static rivet::rivet_type_id MeleeModelSwapData_type_id = 0x9ab26759; 

		explicit RewardMeleeModelSwapConfig() = default;
		explicit RewardMeleeModelSwapConfig([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		std::vector<std::shared_ptr<rivet::ddl::generated::MeleeModelSwapData>> MeleeModelSwapData {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<RewardMeleeModelSwapConfig>;
	};
} // namespace rivet::ddl::generated

// clang-format on
