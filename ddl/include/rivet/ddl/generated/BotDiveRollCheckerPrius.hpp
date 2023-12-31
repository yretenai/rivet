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
	struct RIVET_DDL_SHARED BotDiveRollCheckerPrius : rivet::structures::rivet_ddl_base {
		constexpr static std::string_view type_name = "BotDiveRollCheckerPrius";
		constexpr static rivet::rivet_type_id type_id = 0x2c79c8bb;

		constexpr static std::string_view AnimDriver_type_name = "AnimDriver";
		constexpr static rivet::rivet_type_id AnimDriver_type_id = 0x10f54dce;
		constexpr static std::string_view MinDistance_type_name = "MinDistance";
		constexpr static rivet::rivet_type_id MinDistance_type_id = 0x448e693a;
		constexpr static std::string_view OverrideAnimTime_type_name = "OverrideAnimTime";
		constexpr static rivet::rivet_type_id OverrideAnimTime_type_id = 0x5f7d5b08;
		constexpr static std::string_view SideStepAnimDriver_type_name = "SideStepAnimDriver";
		constexpr static rivet::rivet_type_id SideStepAnimDriver_type_id = 0x62c3091f;
		constexpr static std::string_view SideStepMinDistance_type_name = "SideStepMinDistance";
		constexpr static rivet::rivet_type_id SideStepMinDistance_type_id = 0xb528bd3c;
		constexpr static std::string_view OverrideSideStepAnimTime_type_name = "OverrideSideStepAnimTime";
		constexpr static rivet::rivet_type_id OverrideSideStepAnimTime_type_id = 0x92c88067; 

		explicit BotDiveRollCheckerPrius() = default;
		explicit BotDiveRollCheckerPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		std::string_view AnimDriver {};
		float MinDistance {};
		float OverrideAnimTime {};
		std::string_view SideStepAnimDriver {};
		float SideStepMinDistance {};
		float OverrideSideStepAnimTime {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<BotDiveRollCheckerPrius>;
	};
} // namespace rivet::ddl::generated

// clang-format on
