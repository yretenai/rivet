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

#include <rivet/ddl/generated/BotPrius.hpp> 

namespace rivet::ddl::generated {
	struct HoverShuffleData; 

	struct RIVET_DDL_SHARED BossBotNefariousBlimpPrius : BotPrius {
		constexpr static std::string_view type_name = "BossBotNefariousBlimpPrius";
		constexpr static rivet::rivet_type_id type_id = 0xafebbe10;

		constexpr static std::string_view HoverShuffleData_type_name = "HoverShuffleData";
		constexpr static rivet::rivet_type_id HoverShuffleData_type_id = 0x5d8cb773;
		constexpr static std::string_view NefariousPilotAsset_type_name = "NefariousPilotAsset";
		constexpr static rivet::rivet_type_id NefariousPilotAsset_type_id = 0xaa27ccc1;
		constexpr static std::string_view LocatorToAttachPilot_type_name = "LocatorToAttachPilot";
		constexpr static rivet::rivet_type_id LocatorToAttachPilot_type_id = 0xd1ba870;
		constexpr static std::string_view NefariousPilotScale_type_name = "NefariousPilotScale";
		constexpr static rivet::rivet_type_id NefariousPilotScale_type_id = 0x44ceb319; 

		explicit BossBotNefariousBlimpPrius() = default;
		explicit BossBotNefariousBlimpPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		std::shared_ptr<rivet::ddl::generated::HoverShuffleData> HoverShuffleData {};
		std::string_view NefariousPilotAsset {};
		std::string_view LocatorToAttachPilot {};
		float NefariousPilotScale {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<BossBotNefariousBlimpPrius>;
	};
} // namespace rivet::ddl::generated

// clang-format on
