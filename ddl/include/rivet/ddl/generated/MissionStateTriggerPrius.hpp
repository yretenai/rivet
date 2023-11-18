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

#include <rivet/ddl/generated/BaseCustomOverlayTriggerPrius.hpp> 

namespace rivet::ddl::generated {
	struct RIVET_DDL_SHARED MissionStateTriggerPrius : BaseCustomOverlayTriggerPrius {
		constexpr static std::string_view type_name = "MissionStateTriggerPrius";
		constexpr static rivet::rivet_type_id type_id = 0x4813930a;

		constexpr static std::string_view MissionName_type_name = "MissionName";
		constexpr static rivet::rivet_type_id MissionName_type_id = 0xa5c30e60;
		constexpr static std::string_view Inactive_type_name = "Inactive";
		constexpr static rivet::rivet_type_id Inactive_type_id = 0x71d2b390;
		constexpr static std::string_view Available_type_name = "Available";
		constexpr static rivet::rivet_type_id Available_type_id = 0x27723b89;
		constexpr static std::string_view Active_type_name = "Active";
		constexpr static rivet::rivet_type_id Active_type_id = 0x7566b265;
		constexpr static std::string_view Cleanup_type_name = "Cleanup";
		constexpr static rivet::rivet_type_id Cleanup_type_id = 0xcba257e1;
		constexpr static std::string_view Complete_type_name = "Complete";
		constexpr static rivet::rivet_type_id Complete_type_id = 0xb8666d53;
		constexpr static std::string_view Failed_type_name = "Failed";
		constexpr static rivet::rivet_type_id Failed_type_id = 0xa0f3ed10; 

		explicit MissionStateTriggerPrius() = default;
		explicit MissionStateTriggerPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		std::string_view MissionName {};
		bool Inactive {};
		bool Available {};
		bool Active {};
		bool Cleanup {};
		bool Complete {};
		bool Failed {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<MissionStateTriggerPrius>;
	};
} // namespace rivet::ddl::generated

// clang-format on
